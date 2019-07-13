#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QWidget>
#include "adminroom.h"

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QWidget
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdminLogin *ui;
    AdminRoom *ar = new AdminRoom;
};

#endif // ADMINLOGIN_H
