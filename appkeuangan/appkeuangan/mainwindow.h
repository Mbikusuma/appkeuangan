#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTableWidget>
#include <QString>

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
    QPushButton* buatTombolHapus(int row, QTableWidget *tabel, const QString &tipe);


private:
    Ui::MainWindow *ui;
    void muatHistori();
    void updateBudgetFromIncome(double incomeAmount);
    void tambahKategoriAuto();
    void simpanKonfigurasiBudget();
    void normalisasiBudget(int changedRow);

};
#endif // MAINWINDOW_H
