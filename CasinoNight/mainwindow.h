#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "adminlogin.h"
#include <QMainWindow>
#include "user.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    AdminLogin *al = new AdminLogin;
    User *u = new User;
};

#endif // MAINWINDOW_H
