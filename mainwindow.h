#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QString>
#include <QTableWidgetItem>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void simpanTransaksi();
    void simpanBudget();
    void tampilkanBudget();
    void on_btnsimpanbudget_clicked(); // tombol simpan ditekan
    void on_comboBox_currentIndexChanged(const QString &kategori);
    void autosaveData(QTableWidgetItem *item);

private:
    Ui::MainWindow *ui;
    void muatHistori();
    void updateBudgetFromIncome(double incomeAmount);
    void tambahKategoriAuto();
    void simpanKonfigurasiBudget();
    QMap<QString, int> budgetMap;               // Menyimpan budget tiap kategori
    QMap<QString, QList<QPair<QString, int>>> transaksiMap; // Menyimpan list transaksi tiap kategori

};
#endif // MAINWINDOW_H
