#include "user.h"
#include "ui_user.h"
#include<QMessageBox>
#include<QtSql/QSqlQuery>
#include<string>
#include<QDebug>
User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::on_pushButton_clicked()
{
    qdb = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    qdb.setDatabaseName("/E:/O2/userdata.db");

    if(!qdb.open()) {
        qDebug() << "DB not open";
    }
    QString email,pass;
    email = ui->lineEdit->text();
    pass = ui->lineEdit_2->text();
    QSqlQuery *sql = new QSqlQuery(qdb);
    if(sql->exec("SELECT * from Data where Email ='"+email+"'and Password ='"+pass+"'")) {
        int  c = 0;
        while(sql->next()) {
            c++;
        }
        if(c==1) {
            QMessageBox::StandardButton qmb;
            qmb = QMessageBox::information(this,"Logged","You are successfully logged");
            this->close();
            QString uname = email;
            sql->prepare("SELECT name FROM Data where Email=:email");
            sql->bindValue(":email",email);
            sql->exec();
            while(sql->next())
            {
                uname = sql->value(0).toString();
                qDebug() <<uname;
            }
                    qdb.removeDatabase("QSQLITE");
                    ur->getUser(uname,email);
        }
        else {
            QMessageBox::StandardButton qmb;
            qmb = QMessageBox::critical(this,"Not Logged","Incorrect email or password");
        }
    }
    qdb.removeDatabase("QSQLITE");
}

void User::on_pushButton_2_clicked()
{
    this->close();
    r->show();
}
