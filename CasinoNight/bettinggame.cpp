#include "bettinggame.h"
#include "ui_bettinggame.h"
#include<QtSql>
#include<QMessageBox>
#include<cstdlib>

BettingGame::BettingGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BettingGame)
{
    ui->setupUi(this);
}

BettingGame::~BettingGame()
{
    delete ui;
}
void BettingGame::getUser(QString user,QString username) {
    this->show();
    this->username = username;
    this->user = user;

    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_2->setVisible(false);
    QSqlDatabase sql;
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
      qDebug() << "Database connected";
    }
    else {
     qDebug() << sql.lastError();
    }
    QSqlQuery sqlq(sql);
    if(sqlq.exec("SELECT Amount FROM Data where Email='"+username+"'")) {
        while(sqlq.next())
        {
            amount = sqlq.value(0).toInt();
        }

    }
    else {

        qDebug()<<sqlq.lastError();
    }
    ui->label_2->setText("Initially you have amount of "+QString::number(amount));
}

void BettingGame::on_pushButton_clicked()
{
    if(ui->lineEdit->text().toInt() <= amount) {
        ui->label_2->setVisible(false);
        ui->label_3->setVisible(false);
        ui->lineEdit->setVisible(false);
        ui->pushButton->setVisible(false);
        betamount = ui->lineEdit->text().toInt();
        ui->label_6->setText("Amount left: "+QString::number(betamount));
        ui->lineEdit_2->setVisible(true);
        ui->lineEdit_3->setVisible(true);
        ui->label_4->setVisible(true);
        ui->label_5->setVisible(true);
        ui->label_6->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        amount -= betamount;
    }
    else {
        QMessageBox::StandardButton sb;
        sb = QMessageBox::critical(this,"Not enough money","You don't have enough money in your account");
    }
}

void BettingGame::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton sb;
    if(betamount<=0) {
        sb = QMessageBox::critical(this,"Game Over","No more money in your account thanks for coming");
    }
    else  {
    srand(time(NULL));
    int randNum = rand()%9+0;
    int numByUser = ui->lineEdit_2->text().toInt();
    int ammountOnBet = ui->lineEdit_3->text().toInt();
    if(numByUser == randNum) {
        sb = QMessageBox::information(this,"Correct!","Your guess was correct and you earned "+QString::number(ammountOnBet));
        betamount += ammountOnBet;
    }
    else {
        sb = QMessageBox::critical(this,"Wrong!","Your guess was incorrect and you lost "+QString::number(ammountOnBet));
        betamount -= ammountOnBet;
    }
    ui->label_6->setText("Amount left: "+QString::number(betamount));
    }
}

void BettingGame::on_pushButton_3_clicked()
{
    QSqlDatabase sql;
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
      qDebug() << "Database connected";
    }
    else {
     qDebug() << sql.lastError();
    }
    QSqlQuery qsql(sql);
    qsql.prepare("UPDATE Data SET Amount = "+QString::number(amount+betamount)+" WHERE Email ='"+username+"'");
    qsql.exec();
    QMessageBox::StandardButton sb;
    sb = QMessageBox::information(this,"Game Over!","Thats it! Thanks for playing your account balance after this game is: "+QString::number(betamount+amount));

}
