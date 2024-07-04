#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <../../JalaliDate/qdatejalali.h>
#include <QTimer>
#include <QMessageBox>
#include <QScreen>
#include <QSysInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QDATEJALALI *jalali;
    QTimer *timer;
    Ui::MainWindow *ui;
    
private slots:
    void onTimer(void);
    void on_Sbox_yearsh_valueChanged(int arg1);
    void on_Sbox_monthsh_valueChanged(int arg1);
    void on_Sbox_daysh_valueChanged(int arg1);
    void on_Btn_Calculateshtomi_clicked();
    void on_Sbox_yearmi_valueChanged(int arg1);
    void on_Sbox_monthmi_valueChanged(int arg1);
    void on_Sbox_daymi_valueChanged(int arg1);
    void on_Btn_Calculatemitosh_clicked();
};

#endif // MAINWINDOW_H
