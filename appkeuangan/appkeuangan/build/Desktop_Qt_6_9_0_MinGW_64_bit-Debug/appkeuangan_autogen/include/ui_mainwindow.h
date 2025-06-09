/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *Page1Histori;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QTableWidget *tabelHistori;
    QWidget *Page4Rekom;
    QLabel *label_13;
    QWidget *Page2Budgeting;
    QGridLayout *gridLayout;
    QLineEdit *inputKategoriBudget;
    QLabel *label_10;
    QDoubleSpinBox *spinbudget;
    QLabel *label_7;
    QPushButton *SimpanBudget;
    QLabel *label_9;
    QTableWidget *tabelBudget;
    QPushButton *TambahKategori;
    QWidget *Page3Pengaturan;
    QLabel *label_12;
    QWidget *Page0Transaksi;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboJenis;
    QLabel *label_3;
    QLineEdit *inputJumlah;
    QLabel *label_4;
    QDateEdit *inputTanggal;
    QLabel *label_5;
    QComboBox *comboKategori;
    QLabel *label_6;
    QTextEdit *inputCatatan;
    QPushButton *SimpanTransaksi;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnTransaksi;
    QPushButton *btnHistori;
    QPushButton *btnBudgeting;
    QPushButton *btnPengaturan;
    QPushButton *btnRekomendasi;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        Page1Histori = new QWidget();
        Page1Histori->setObjectName("Page1Histori");
        gridLayout_3 = new QGridLayout(Page1Histori);
        gridLayout_3->setObjectName("gridLayout_3");
        label_11 = new QLabel(Page1Histori);
        label_11->setObjectName("label_11");
        QFont font;
        font.setPointSize(12);
        label_11->setFont(font);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        tabelHistori = new QTableWidget(Page1Histori);
        if (tabelHistori->columnCount() < 6)
            tabelHistori->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelHistori->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelHistori->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelHistori->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabelHistori->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabelHistori->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabelHistori->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tabelHistori->setObjectName("tabelHistori");

        gridLayout_3->addWidget(tabelHistori, 1, 0, 1, 1);

        stackedWidget->addWidget(Page1Histori);
        Page4Rekom = new QWidget();
        Page4Rekom->setObjectName("Page4Rekom");
        label_13 = new QLabel(Page4Rekom);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 20, 111, 31));
        label_13->setFont(font);
        stackedWidget->addWidget(Page4Rekom);
        Page2Budgeting = new QWidget();
        Page2Budgeting->setObjectName("Page2Budgeting");
        gridLayout = new QGridLayout(Page2Budgeting);
        gridLayout->setObjectName("gridLayout");
        inputKategoriBudget = new QLineEdit(Page2Budgeting);
        inputKategoriBudget->setObjectName("inputKategoriBudget");

        gridLayout->addWidget(inputKategoriBudget, 2, 0, 1, 1);

        label_10 = new QLabel(Page2Budgeting);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        spinbudget = new QDoubleSpinBox(Page2Budgeting);
        spinbudget->setObjectName("spinbudget");
        spinbudget->setDecimals(0);
        spinbudget->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(spinbudget, 4, 0, 1, 1);

        label_7 = new QLabel(Page2Budgeting);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        SimpanBudget = new QPushButton(Page2Budgeting);
        SimpanBudget->setObjectName("SimpanBudget");

        gridLayout->addWidget(SimpanBudget, 6, 2, 1, 1);

        label_9 = new QLabel(Page2Budgeting);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        tabelBudget = new QTableWidget(Page2Budgeting);
        if (tabelBudget->columnCount() < 3)
            tabelBudget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabelBudget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabelBudget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tabelBudget->setObjectName("tabelBudget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabelBudget->sizePolicy().hasHeightForWidth());
        tabelBudget->setSizePolicy(sizePolicy1);
        tabelBudget->setDefaultDropAction(Qt::DropAction::TargetMoveAction);
        tabelBudget->setColumnCount(3);
        tabelBudget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tabelBudget, 5, 0, 1, 3);

        TambahKategori = new QPushButton(Page2Budgeting);
        TambahKategori->setObjectName("TambahKategori");

        gridLayout->addWidget(TambahKategori, 2, 1, 1, 1);

        stackedWidget->addWidget(Page2Budgeting);
        Page3Pengaturan = new QWidget();
        Page3Pengaturan->setObjectName("Page3Pengaturan");
        label_12 = new QLabel(Page3Pengaturan);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 20, 111, 21));
        label_12->setFont(font);
        stackedWidget->addWidget(Page3Pengaturan);
        Page0Transaksi = new QWidget();
        Page0Transaksi->setObjectName("Page0Transaksi");
        gridLayout_2 = new QGridLayout(Page0Transaksi);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Page0Transaksi);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Page0Transaksi);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboJenis = new QComboBox(Page0Transaksi);
        comboJenis->addItem(QString());
        comboJenis->addItem(QString());
        comboJenis->setObjectName("comboJenis");

        gridLayout_2->addWidget(comboJenis, 1, 1, 1, 1);

        label_3 = new QLabel(Page0Transaksi);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        inputJumlah = new QLineEdit(Page0Transaksi);
        inputJumlah->setObjectName("inputJumlah");

        gridLayout_2->addWidget(inputJumlah, 3, 0, 1, 1);

        label_4 = new QLabel(Page0Transaksi);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        inputTanggal = new QDateEdit(Page0Transaksi);
        inputTanggal->setObjectName("inputTanggal");

        gridLayout_2->addWidget(inputTanggal, 5, 0, 1, 1);

        label_5 = new QLabel(Page0Transaksi);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 6, 0, 1, 1);

        comboKategori = new QComboBox(Page0Transaksi);
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->addItem(QString());
        comboKategori->setObjectName("comboKategori");

        gridLayout_2->addWidget(comboKategori, 7, 0, 1, 1);

        label_6 = new QLabel(Page0Transaksi);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 8, 0, 1, 1);

        inputCatatan = new QTextEdit(Page0Transaksi);
        inputCatatan->setObjectName("inputCatatan");

        gridLayout_2->addWidget(inputCatatan, 9, 0, 1, 1);

        SimpanTransaksi = new QPushButton(Page0Transaksi);
        SimpanTransaksi->setObjectName("SimpanTransaksi");

        gridLayout_2->addWidget(SimpanTransaksi, 10, 1, 1, 1);

        stackedWidget->addWidget(Page0Transaksi);

        gridLayout_4->addWidget(stackedWidget, 0, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        btnTransaksi = new QPushButton(widget);
        btnTransaksi->setObjectName("btnTransaksi");

        verticalLayout->addWidget(btnTransaksi);

        btnHistori = new QPushButton(widget);
        btnHistori->setObjectName("btnHistori");

        verticalLayout->addWidget(btnHistori);

        btnBudgeting = new QPushButton(widget);
        btnBudgeting->setObjectName("btnBudgeting");

        verticalLayout->addWidget(btnBudgeting);

        btnPengaturan = new QPushButton(widget);
        btnPengaturan->setObjectName("btnPengaturan");

        verticalLayout->addWidget(btnPengaturan);

        btnRekomendasi = new QPushButton(widget);
        btnRekomendasi->setObjectName("btnRekomendasi");

        verticalLayout->addWidget(btnRekomendasi);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

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
        label_11->setText(QCoreApplication::translate("MainWindow", "Histori", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelHistori->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Tanggal", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelHistori->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Jenis", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelHistori->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Kategori", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabelHistori->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Jumlah", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabelHistori->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Catatan", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Rekomendasi", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Budgeting", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Masukkan Kategori", nullptr));
        SimpanBudget->setText(QCoreApplication::translate("MainWindow", "Simpan", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "List Budget", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabelBudget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Kategori", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabelBudget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Persentase(%)", nullptr));
        TambahKategori->setText(QCoreApplication::translate("MainWindow", "Tambah", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Pengaturan", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TRANSAKSI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Pilih Jenis Transaksi : ", nullptr));
        comboJenis->setItemText(0, QCoreApplication::translate("MainWindow", "Pemasukan", nullptr));
        comboJenis->setItemText(1, QCoreApplication::translate("MainWindow", "Pengeluaran", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Masukkan Nominal Uang ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Masukkan Tanggal", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pilih Kategori", nullptr));
        comboKategori->setItemText(0, QCoreApplication::translate("MainWindow", "Makan", nullptr));
        comboKategori->setItemText(1, QCoreApplication::translate("MainWindow", "Infaq/shadaqah", nullptr));
        comboKategori->setItemText(2, QCoreApplication::translate("MainWindow", "Transport", nullptr));
        comboKategori->setItemText(3, QCoreApplication::translate("MainWindow", "Bayar Kos", nullptr));
        comboKategori->setItemText(4, QCoreApplication::translate("MainWindow", "UKT", nullptr));
        comboKategori->setItemText(5, QCoreApplication::translate("MainWindow", "Air", nullptr));
        comboKategori->setItemText(6, QCoreApplication::translate("MainWindow", "Other", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Catatan", nullptr));
        SimpanTransaksi->setText(QCoreApplication::translate("MainWindow", "Simpan", nullptr));
        btnTransaksi->setText(QCoreApplication::translate("MainWindow", "Transaksi", nullptr));
        btnHistori->setText(QCoreApplication::translate("MainWindow", "Histori", nullptr));
        btnBudgeting->setText(QCoreApplication::translate("MainWindow", "Budgeting", nullptr));
        btnPengaturan->setText(QCoreApplication::translate("MainWindow", "Pengaturan", nullptr));
        btnRekomendasi->setText(QCoreApplication::translate("MainWindow", "Rekomendasi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
