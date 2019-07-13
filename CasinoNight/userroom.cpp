#include "userroom.h"
#include "ui_userroom.h"
#include "jackpot.h"
#include "bettinggame.h"
#include "roulette.h"
#include <QSql>
#include <QtSql>

UserRoom::UserRoom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserRoom)
{
    ui->setupUi(this);
}

UserRoom::~UserRoom()
{
    delete ui;
}

void UserRoom::on_pushButton_clicked()
{
    QSqlDatabase sql;
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
       qDebug() << "Database connected";
    }
    else {
      qDebug() << "Error in connecting";
    }
    int amount;
    QSqlQuery sqlq(sql);
    if(sqlq.exec("SELECT Amount FROM Data WHERE Email='"+username+"'"))
        while(sqlq.next())
            amount = sqlq.value(0).toInt();
    else {
        qDebug() <<sqlq.lastError();
    }
    Jackpot *j = new Jackpot;
    j->start(user,username,amount);
//    this->close();
}

void UserRoom::on_pushButton_2_clicked()
{
    QSqlDatabase sql;
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
       qDebug() << "Database connected";
    }
    else {
      qDebug() << "Error in connecting";
    }
    int amount;
    QSqlQuery sqlq(sql);
    if(sqlq.exec("SELECT Amount FROM Data WHERE Email='"+username+"'"))
        while(sqlq.next())
            amount = sqlq.value(0).toInt();
    else {
        qDebug() <<sqlq.lastError();
    }
    Roulette *r = new Roulette;
    r->startRoulette(user,username,amount);
//    this->close();
}

void UserRoom::on_pushButton_3_clicked()
{
    BettingGame *bg = new BettingGame;
    bg->getUser(user,username);
//    this->close();
}
void UserRoom::getUser(QString s,QString username) {
    user = s;
    this->username = username;
    this->show();
    ui->label_2->setText("Welcome, "+user);
}
