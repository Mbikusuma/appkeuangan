#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDate>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QTableWidget>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Tombol Navigasi
    connect(ui->btnTransaksi, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->Page0Transaksi);
    });
    connect(ui->btnHistori, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->Page1Histori);
        muatHistori();
    });
    connect(ui->btnBudgeting, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->Page2Budgeting);
    });
    connect(ui->btnPengaturan, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->Page3Pengaturan);
    });
    connect(ui->btnRekomendasi, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->Page4Rekom);
    });

    // Tombol Aksi
    connect(ui->SimpanTransaksi, &QPushButton::clicked, this, &MainWindow::simpanTransaksi);
    connect(ui->TambahKategori, &QPushButton::clicked, this, &MainWindow::tambahKategoriAuto);

    // Inisialisasi
    ui->comboJenis->addItems({"Pemasukan", "Pengeluaran"});
    tampilkanBudget();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::simpanTransaksi() {
    QString jenis = ui->comboJenis->currentText();
    QString kategori = ui->comboKategori->currentText();
    QString tanggal = QDate::currentDate().toString("yyyy-MM-dd");
    QString jumlahStr = ui->inputJumlah->text();
    QString catatan = ui->inputCatatan->toPlainText();

    if (jumlahStr.isEmpty() || kategori.isEmpty()) {
        QMessageBox::warning(this, "Peringatan", "Jumlah dan kategori tidak boleh kosong.");
        return;
    }

    bool ok;
    double jumlah = jumlahStr.toDouble(&ok);
    if (!ok || jumlah <= 0) {
        QMessageBox::warning(this, "Peringatan", "Jumlah harus berupa angka positif.");
        return;
    }

    QFile file("transaksi.csv");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << tanggal << "," << jenis << "," << kategori << "," << jumlahStr << "," << catatan << "\n";
        file.close();
        QMessageBox::information(this, "Berhasil", "Transaksi berhasil disimpan.");

        if (jenis == "Pemasukan") {
            updateBudgetFromIncome(jumlah);
        }
    }
    muatHistori();
    ui->inputJumlah->clear();
    ui->inputCatatan->clear();
    ui->comboKategori->setCurrentIndex(0);
    ui->comboJenis->setCurrentIndex(0);
}

void MainWindow::muatHistori() {
    QFile file("transaksi.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    ui->tabelHistori->setRowCount(0);
    int row = 0;
    while (!in.atEnd()) {
        QStringList data = in.readLine().split(",");
        if (data.size() >= 5) {
            ui->tabelHistori->insertRow(row);
            for (int col = 0; col < 5; ++col) {
                ui->tabelHistori->setItem(row, col, new QTableWidgetItem(data[col]));
            }
            QPushButton *btn = buatTombolHapus(row, ui->tabelHistori, "histori");
            ui->tabelHistori->setCellWidget(row, 5, btn);
            row++;
        }
    }
    ui->tabelHistori->setHorizontalHeaderLabels({"Tanggal", "Jenis", "Kategori", "Jumlah", "Catatan",""});
    ui->tabelHistori->horizontalHeader()->setStretchLastSection(true);
    file.close();
}

void MainWindow::tambahKategoriAuto() {
    QString kategori = ui->inputKategoriBudget->text();
    if (kategori.isEmpty()) return;

    int row = ui->tabelBudget->rowCount();
    ui->tabelBudget->insertRow(row);
    ui->tabelBudget->insertColumn(3);
    ui->tabelBudget->setHorizontalHeaderLabels({"Kategori","Persentase(%)",""});
    ui->tabelBudget->setItem(row, 0, new QTableWidgetItem(kategori));

    QDoubleSpinBox *spin = new QDoubleSpinBox();
    spin->setRange(0, 100);
    spin->setDecimals(1);
    spin->setSuffix(" %");
    spin->setValue(0);

    connect(spin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double) {
        normalisasiBudget(row);  // row adalah baris tempat spinbox berada
    });


    ui->tabelBudget->resizeColumnsToContents();

    ui->tabelBudget->setCellWidget(row, 1, spin);
    ui->inputKategoriBudget->clear();
    simpanKonfigurasiBudget();
    QPushButton *btn = buatTombolHapus(row, ui->tabelBudget, "budget");
    ui->tabelBudget->setCellWidget(row, 2, btn);

}

void MainWindow::simpanKonfigurasiBudget() {
    QFile file("budget_config.csv");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Kategori,Persentase\n";
        for (int row = 0; row < ui->tabelBudget->rowCount(); ++row) {
            QString kategori = ui->tabelBudget->item(row, 0)->text();
            QDoubleSpinBox *spin = qobject_cast<QDoubleSpinBox *>(ui->tabelBudget->cellWidget(row, 1));
            if (spin) {
                out << kategori << "," << spin->value() << "\n";
            }
        }
        file.close();
    }
}

void MainWindow::normalisasiBudget(int changedRow) {
    // Hitung total tanpa baris yang diedit
    double total = 0;
    QList<int> rowsToUpdate;

    for (int row = 0; row < ui->tabelBudget->rowCount(); ++row) {
        if (row == changedRow) continue;
        QDoubleSpinBox *spin = qobject_cast<QDoubleSpinBox *>(ui->tabelBudget->cellWidget(row, 1));
        if (spin) {
            total += spin->value();
            rowsToUpdate.append(row);
        }
    }

    // Ambil nilai baru dari baris yang diedit
    QDoubleSpinBox *editedSpin = qobject_cast<QDoubleSpinBox *>(ui->tabelBudget->cellWidget(changedRow, 1));
    if (!editedSpin) return;

    double remaining = 100.0 - editedSpin->value();
    if (total == 0 || remaining < 0) return;

    for (int row : rowsToUpdate) {
        QDoubleSpinBox *spin = qobject_cast<QDoubleSpinBox *>(ui->tabelBudget->cellWidget(row, 1));
        if (spin) {
            double current = spin->value();
            double newValue = (current / total) * remaining;
            spin->blockSignals(true);  // Hindari pemanggilan berulang
            spin->setValue(newValue);
            spin->blockSignals(false);
        }
    }

    simpanKonfigurasiBudget();
}

void MainWindow::tampilkanBudget() {
    ui->tabelBudget->setRowCount(0);
    QFile file("budget_config.csv");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        in.readLine(); // skip header
        while (!in.atEnd()) {
            QStringList data = in.readLine().split(",");
            if (data.size() >= 2) {
                int row = ui->tabelBudget->rowCount();
                ui->tabelBudget->insertRow(row);
                ui->tabelBudget->setItem(row, 0, new QTableWidgetItem(data[0]));

                QDoubleSpinBox *spin = new QDoubleSpinBox();
                spin->setRange(0, 100);
                spin->setDecimals(1);
                spin->setSuffix(" %");
                spin->setValue(data[1].toDouble());

                connect(spin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double) {
                    simpanKonfigurasiBudget();
                });

                ui->tabelBudget->setCellWidget(row, 1, spin);

                QPushButton *btn = buatTombolHapus(row, ui->tabelBudget, "budget");
                ui->tabelBudget->setCellWidget(row, 2, btn);
            }
        }
        file.close();
    }
}

void MainWindow::updateBudgetFromIncome(double incomeAmount) {
    QFile file("budget_config.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Gagal", "File budget_config.csv tidak ditemukan!");
        return;
    }
    QTextStream in(&file);
    in.readLine();

    QList<QString> kategoriList;
    QList<double> persenList;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() >= 2) {
            kategoriList.append(parts[0]);
            persenList.append(parts[1].toDouble());
        }
    }
    file.close();

    QFile outFile("budget_data.csv");
    if (outFile.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&outFile);
        QDate tanggal = QDate::currentDate();
        for (int i = 0; i < kategoriList.size(); ++i) {
            double alokasi = incomeAmount * persenList[i] / 100.0;
            out << tanggal.toString("yyyy-MM-dd") << "," << kategoriList[i] << "," << alokasi << "\n";
        }
        outFile.close();
    }
}

void MainWindow::simpanBudget() {
    simpanKonfigurasiBudget();  // misalnya hanya memanggil fungsi ini
    QMessageBox::information(this, "Tersimpan", "Data budget berhasil disimpan.");
}

QPushButton* MainWindow::buatTombolHapus(int row, QTableWidget *tabel, const QString &tipe) {
    QPushButton *btn = new QPushButton("🗑️");
    btn->setToolTip("Hapus baris");
    btn->setFixedSize(30, 30);

    connect(btn, &QPushButton::clicked, this, [=]() {
        if (tipe == "budget") {
            tabel->removeRow(row);
            simpanKonfigurasiBudget();
        } else if (tipe == "histori") {
            QFile file("transaksi.csv");
            QFile temp("temp.csv");

            if (!file.open(QIODevice::ReadOnly | QIODevice::Text) || !temp.open(QIODevice::WriteOnly | QIODevice::Text))
                return;

            QTextStream in(&file);
            QTextStream out(&temp);
            int currentRow = -1;
            while (!in.atEnd()) {
                QString line = in.readLine();
                if (++currentRow != row)
                    out << line << "\n";
            }
            if (row >= 0 && row < tabel->rowCount()) {
                tabel->removeRow(row);
            }
            file.close();
            temp.close();
            file.remove();
            temp.rename("transaksi.csv");

            muatHistori();
        }
    });

    return btn;
}


