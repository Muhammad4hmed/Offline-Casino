#include "jackpot.h"
#include<cstdlib>
#include "ui_jackpot.h"
#include <QMessageBox>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include<QtSql>

Jackpot::Jackpot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Jackpot)
{
    ui->setupUi(this);
    int randA=rand()%9+0,randB=rand()%9+0,randC=rand()%9+0;
    generateResults(randA,randB,randC);

}

Jackpot::~Jackpot()
{
    delete ui;
}

void Jackpot::on_pushButton_clicked()
{
    if(amount<=0) {
        QMessageBox::StandardButton qmb;
        QMessageBox::critical(this,"You don't have enought money!","You don't have enough money to play more!");
    }
    else {

        srand(time(NULL));
        int count = rand()%5+1;
        int win = rand()%9+0;
       int randA=rand()%9+0,randB=rand()%9+0,randC=rand()%9+0;
           if(count==3)
               randA=win,randB=win,randC=win;
           randA = (randA==1?10:randA);
           randB = (randB==1?10:randB);
           randC = (randC==1?10:randC);

           generateResults(randA,randB,randC);
       QMessageBox::StandardButton qmb;
       if(randA==randB && randB==randC) {
           qmb = QMessageBox::information(this,"Congratulations!","You have won $500");
           amount += 500;
           ui->label_7->setText("You Won!");
           ui->label_7->setStyleSheet("QLabel{background-color: green;}");
       }
       else {
           qmb = QMessageBox::critical(this,"You Lost!","You have lost $50");
           amount -= 50;
           ui->label_7->setText("You Lost!");
           ui->label_7->setStyleSheet("QLabel{background-color: red;}");
    }
   }
    ui->label_8->setText("Current \nBalance: " +QString::number(amount));
}

void Jackpot::generateResults(int randA,int randB,int randC) {
    QPixmap qp1(pics[randA]);
    ui->label_4->setPixmap(qp1);
    ui->label_4->setScaledContents(true);

    QPixmap qp2(pics[randB]);
    ui->label_5->setPixmap(qp2);
    ui->label_5->setScaledContents(true);

    QPixmap qp3(pics[randC]);
    ui->label_6->setPixmap(qp3);
    ui->label_6->setScaledContents(true);
    qDebug()<<randA<<endl<<randB<<endl<<randC<<endl;

}

void Jackpot::start(QString n,QString un,int amount) {
    this->show();
    this->amount = amount;
    ui->label_8->setText("Current\nBalance: "+QString::number(amount));
    name = n;
    username = un;

}
void Jackpot::on_pushButton_2_clicked()
{
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
      qDebug() << "Database connected";
    }
    else {
     qDebug() << "Error in connecting";
    }
    QSqlQuery qsql(sql);
    qsql.prepare("UPDATE Data SET Amount = "+QString::number(amount)+" WHERE Email='"+username+"'");
    qsql.exec();
    QMessageBox::StandardButton qmb;
    qmb = QMessageBox::information(this,"Game Over!","Your new account balance is: "+QString::number(amount)+" Thanks for playing!");
}
