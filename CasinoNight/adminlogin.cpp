#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <QMessageBox>

AdminLogin::AdminLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_pushButton_clicked()
{
    if(ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "admin") {
        QMessageBox::StandardButton qmb = QMessageBox::information(this,"Logged","Welcome, Admin!");
        this->close();
        ar->show();
    }
    else
        QMessageBox::StandardButton qmb = QMessageBox::critical(this,"Wrong Login","Wrong username or password!");
}
