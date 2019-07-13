#include "register.h"
#include "ui_register.h"
#include <QMessageBox>
#include <QDebug>

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
       qDebug() << "Database connected";
    }
    else {
      qDebug() << "Error in connecting";
    }
    QString email="",pass="",name="";
    int amount=0;
    email  = ui->lineEdit->text();
    pass = ui->lineEdit_2->text();
    name = ui->lineEdit_3->text();
    amount = ui->lineEdit_4->text().toInt();
    if(email=="" || pass=="" ||name == "" || amount == 0) {
        QMessageBox::StandardButton qsb;
        qsb = QMessageBox::critical(this,"Error","Please insert complete information");
    }

    QSqlQuery *querry = new QSqlQuery(sql);
    querry->prepare("INSERT INTO Data(Email,Password,name,Amount)" "VALUES(:email,:pass,:name,:amount)");
    querry->bindValue(":email",email);
    querry->bindValue(":pass",pass);
    querry->bindValue(":name",name);
    querry->bindValue(":amount",amount);
    if(!querry->exec()) {
        qDebug() <<querry->lastError();
        QMessageBox::StandardButton qsb;
        qsb = QMessageBox::critical(this,"Error","Please insert correct information");
    }
    else {
        QMessageBox::StandardButton qsb;
        qsb = QMessageBox::information(this,"Registered","Successfully registered");
        this->close();
        sql.removeDatabase("QSQLITE");
        ur->getUser(name,email);
    }
    sql.removeDatabase("QSQLITE");
}
