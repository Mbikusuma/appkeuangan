/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Transaksi;
    QPushButton *Histori;
    QPushButton *Budgeting;
    QPushButton *Rekomendasi;
    QPushButton *Pengaturan;
    QStackedWidget *stackedWidget;
    QWidget *PageHistori;
    QWidget *PageRekom;
    QWidget *PageBudgeting;
    QLineEdit *inputKategoriBudget;
    QLabel *label_7;
    QDoubleSpinBox *inputJumlahBudget;
    QLabel *label_8;
    QPushButton *SimpanBudget;
    QTableWidget *tabelBudget;
    QWidget *PagePengaturan;
    QWidget *PageTransaksi;
    QLabel *label;
    QComboBox *comboJenis;
    QLabel *label_2;
    QLineEdit *inputJumlah;
    QLabel *label_3;
    QDateEdit *inputTanggal;
    QLabel *label_4;
    QComboBox *comboKategori;
    QLabel *label_5;
    QTextEdit *inputCatatan;
    QLabel *label_6;
    QPushButton *SimpanTransaksi;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        Transaksi = new QPushButton(widget);
        Transaksi->setObjectName("Transaksi");

        verticalLayout->addWidget(Transaksi);

        Histori = new QPushButton(widget);
        Histori->setObjectName("Histori");

        verticalLayout->addWidget(Histori);

        Budgeting = new QPushButton(widget);
        Budgeting->setObjectName("Budgeting");

        verticalLayout->addWidget(Budgeting);

        Rekomendasi = new QPushButton(widget);
        Rekomendasi->setObjectName("Rekomendasi");

        verticalLayout->addWidget(Rekomendasi);

        Pengaturan = new QPushButton(widget);
        Pengaturan->setObjectName("Pengaturan");

        verticalLayout->addWidget(Pengaturan);


        horizontalLayout->addWidget(widget);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        PageHistori = new QWidget();
        PageHistori->setObjectName("PageHistori");
        stackedWidget->addWidget(PageHistori);
        PageRekom = new QWidget();
        PageRekom->setObjectName("PageRekom");
        stackedWidget->addWidget(PageRekom);
        PageBudgeting = new QWidget();
        PageBudgeting->setObjectName("PageBudgeting");
        inputKategoriBudget = new QLineEdit(PageBudgeting);
        inputKategoriBudget->setObjectName("inputKategoriBudget");
        inputKategoriBudget->setGeometry(QRect(50, 60, 221, 24));
        label_7 = new QLabel(PageBudgeting);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 30, 111, 16));
        inputJumlahBudget = new QDoubleSpinBox(PageBudgeting);
        inputJumlahBudget->setObjectName("inputJumlahBudget");
        inputJumlahBudget->setGeometry(QRect(50, 120, 161, 25));
        inputJumlahBudget->setDecimals(0);
        inputJumlahBudget->setMaximum(1000000.000000000000000);
        label_8 = new QLabel(PageBudgeting);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 100, 171, 16));
        SimpanBudget = new QPushButton(PageBudgeting);
        SimpanBudget->setObjectName("SimpanBudget");
        SimpanBudget->setGeometry(QRect(530, 420, 91, 24));
        tabelBudget = new QTableWidget(PageBudgeting);
        if (tabelBudget->columnCount() < 1)
            tabelBudget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelBudget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tabelBudget->rowCount() < 5)
            tabelBudget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelBudget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelBudget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabelBudget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabelBudget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabelBudget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabelBudget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabelBudget->setItem(1, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabelBudget->setItem(2, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabelBudget->setItem(3, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabelBudget->setItem(4, 0, __qtablewidgetitem10);
        tabelBudget->setObjectName("tabelBudget");
        tabelBudget->setGeometry(QRect(50, 170, 231, 181));
        stackedWidget->addWidget(PageBudgeting);
        PagePengaturan = new QWidget();
        PagePengaturan->setObjectName("PagePengaturan");
        stackedWidget->addWidget(PagePengaturan);
        PageTransaksi = new QWidget();
        PageTransaksi->setObjectName("PageTransaksi");
        label = new QLabel(PageTransaksi);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 61, 16));
        comboJenis = new QComboBox(PageTransaksi);
        comboJenis->addItem(QString());
        comboJenis->addItem(QString());
        comboJenis->setObjectName("comboJenis");
        comboJenis->setGeometry(QRect(150, 50, 101, 24));
        label_2 = new QLabel(PageTransaksi);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 111, 16));
        inputJumlah = new QLineEdit(PageTransaksi);
        inputJumlah->setObjectName("inputJumlah");
        inputJumlah->setGeometry(QRect(40, 100, 113, 24));
        label_3 = new QLabel(PageTransaksi);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 80, 141, 16));
        inputTanggal = new QDateEdit(PageTransaksi);
        inputTanggal->setObjectName("inputTanggal");
        inputTanggal->setGeometry(QRect(40, 150, 110, 25));
        label_4 = new QLabel(PageTransaksi);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 130, 141, 16));
        comboKategori = new QComboBox(PageTransaksi);
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->setObjectName("comboKategori");
        comboKategori->setGeometry(QRect(40, 200, 111, 24));
        label_5 = new QLabel(PageTransaksi);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 180, 81, 16));
        inputCatatan = new QTextEdit(PageTransaksi);
        inputCatatan->setObjectName("inputCatatan");
        inputCatatan->setGeometry(QRect(40, 250, 481, 31));
        label_6 = new QLabel(PageTransaksi);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 230, 81, 16));
        SimpanTransaksi = new QPushButton(PageTransaksi);
        SimpanTransaksi->setObjectName("SimpanTransaksi");
        SimpanTransaksi->setGeometry(QRect(530, 440, 80, 24));
        stackedWidget->addWidget(PageTransaksi);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Transaksi->setText(QCoreApplication::translate("MainWindow", "Transaksi", nullptr));
        Histori->setText(QCoreApplication::translate("MainWindow", "Histori", nullptr));
        Budgeting->setText(QCoreApplication::translate("MainWindow", "Budgeting", nullptr));
        Rekomendasi->setText(QCoreApplication::translate("MainWindow", "Rekomendasi", nullptr));
        Pengaturan->setText(QCoreApplication::translate("MainWindow", "Pengaturan", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Masukkan Kategori", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Jumlah Budget (max. 1.000.000)", nullptr));
        SimpanBudget->setText(QCoreApplication::translate("MainWindow", "Simpan", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelBudget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelBudget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Infaq", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelBudget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Pokok(Daruriyat)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabelBudget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Tabungan/Dana Darurat", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabelBudget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Investasi Ilmu", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabelBudget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Lifestyle", nullptr));

        const bool __sortingEnabled = tabelBudget->isSortingEnabled();
        tabelBudget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tabelBudget->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabelBudget->item(1, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabelBudget->item(2, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tabelBudget->item(3, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tabelBudget->item(4, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        tabelBudget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("MainWindow", "TRANSAKSI", nullptr));
        comboJenis->setItemText(0, QCoreApplication::translate("MainWindow", "Pemasukan", nullptr));
        comboJenis->setItemText(1, QCoreApplication::translate("MainWindow", "Pengeluaran", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Pilih Jenis Transaksi : ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Masukkan Nominal Uang ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Masukkan Tanggal", nullptr));
        comboKategori->setItemText(0, QCoreApplication::translate("MainWindow", "Makan", nullptr));
        comboKategori->setItemText(1, QCoreApplication::translate("MainWindow", "Infaq/shadaqah", nullptr));
        comboKategori->setItemText(2, QCoreApplication::translate("MainWindow", "Transport", nullptr));
        comboKategori->setItemText(3, QCoreApplication::translate("MainWindow", "Bayar Kos", nullptr));
        comboKategori->setItemText(4, QCoreApplication::translate("MainWindow", "UKT", nullptr));
        comboKategori->setItemText(5, QCoreApplication::translate("MainWindow", "Air", nullptr));
        comboKategori->setItemText(6, QCoreApplication::translate("MainWindow", "Other", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Pilih Kategori", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Catatan", nullptr));
        SimpanTransaksi->setText(QCoreApplication::translate("MainWindow", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
