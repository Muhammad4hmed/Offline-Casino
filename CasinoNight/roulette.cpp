#include "roulette.h"
#include<cstdlib>
#include<QtSql>
#include <cmath>
#include "ui_roulette.h"
#include <QMessageBox>

Roulette::Roulette(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roulette)
{
    ui->setupUi(this);

}

Roulette::~Roulette()
{
    delete ui;
}
//startroulette is a func
void Roulette::startRoulette(QString name,QString username,int amount) {
    this->show();
    //name, user, amount, betamount is dec in headf
    this->name = name;
    this->username = username;
    this->amount = amount;
    ui->pushButton_17->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_19->setVisible(false);
    ui->label_3->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_9->setVisible(false);
    ui->pushButton_10->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_12->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton_6->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_13->setVisible(false);
    ui->pushButton_14->setVisible(false);
    ui->label_4->setVisible(false);

    betamount = amount;


}

void Roulette::on_pushButton_clicked()
{
    QMessageBox::StandardButton qmb;
    qmb = QMessageBox::information(this,"Welcome to roulette!","Kindly read rules...");
    qmb = QMessageBox::information(this,"Welcome to roulette!","1) The Numbers on the Roulette range from 0 - 36\n2) Odd Numbers are Red & Even Numbers are Black");
    qmb = QMessageBox::information(this,"Welcome to roulette!","3) There are basically two types of bets/ Inside & Outside Bets");
    qmb = QMessageBox::information(this,"Inside Bet","The Inside bets consist of Straigh, Split, Trio & Corner bets\n\n1) Straight/Single : Bet on a single number\n2) Split : Bet on two vertically/horizontally adjacent numbers (e.g. 14-17 or 8-9)\n3) Corner/Square : Bet on four numbers that meet at one corner (e.g. 10-11-13-14)\n4) Trio : A three-number bet that involves at least one zero: 0-1-2 (either layout); 0-2-3");
    qmb = QMessageBox::information(this,"Outside Bet","The Outside bets consist of Low or High, Rouge ou Noir & Dozen bets\n\n1) Low (1 - 18) Or High (19 - 36) : A bet that the number will be in the chosen range.\n2) Rouge ou Noir : A bet that the number will be the chosen color(Red Or Black).\n3) Dozen bet : A bet that the number will be in the chosen dozen: (1-12), (13-24) or (25-36).");

}

void Roulette::on_pushButton_2_clicked()
{
    ui->label_3->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);

    ui->pushButton_9->setVisible(true);
    ui->pushButton_10->setVisible(true);
    ui->pushButton_11->setVisible(true);
    ui->pushButton_12->setVisible(true);

}

void Roulette::on_pushButton_3_clicked()
{
    ui->label_3->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);
    ui->pushButton_6->setVisible(true);
    ui->pushButton_7->setVisible(true);

}

void Roulette::on_pushButton_4_clicked()
{
    int luckyNumber = rand()%36+1;
    float n = betamount;
    if(luckyNumber>=1 && luckyNumber<=18)
    {
        qmb = QMessageBox::information(this,"You Won!","You won 10% of the betted money! i.e. "+QString::number(0.1*n));
        betamount += (int) ceil(0.1*n);
    }
    else {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 10% of the betted money! i.e. "+QString::number(0.1*n));
        betamount -= int(ceil(0.1*n));
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
}

void Roulette::on_pushButton_8_clicked()
{
    QMessageBox::StandardButton qmb;
    betamount = ui->lineEdit->text().toInt();
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
    ui->label_4->setVisible(true);
    if(betamount>amount) {
        qmb = QMessageBox::critical(this,"You don't have enough money","You don't have enough money to bet! kindly select between 1-"+QString::number(amount));
        }
    else {
        amount -= betamount;
        ui->label_3->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->label_5->setVisible(false);
        ui->pushButton_8->setVisible(false);
        ui->lineEdit->setVisible(false);
    }

}

void Roulette::on_pushButton_7_clicked()
{
    int luckyNumber = rand()%36+1;
    float n = betamount;
    if(luckyNumber>=19 && luckyNumber<=36)
    {
        qmb = QMessageBox::information(this,"You Won!","You won 10% of the betted money! i.e. "+QString::number(0.1*n));
        betamount += (int) ceil(0.1*n);
    }
    else {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 10% of the betted money! i.e. "+QString::number(0.1*n)+ "\nNumber was "+QString::number(luckyNumber));
        betamount -= (int) ceil(0.1*n);
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
}

void Roulette::on_pushButton_6_clicked()
{
    ui->pushButton_13->setVisible(true);
    ui->pushButton_14->setVisible(true);
}

void Roulette::on_pushButton_13_clicked()
{
    int luckynumber = rand()%36+1;
    float n = betamount;
    if(luckynumber==1 ||luckynumber==3 ||luckynumber==5 ||luckynumber==7 ||luckynumber==9 ||luckynumber==12 ||luckynumber==14 ||luckynumber==16 ||luckynumber==18 ||luckynumber==21 ||luckynumber==23 ||luckynumber==25 ||luckynumber==27 ||luckynumber==28 ||luckynumber==30 ||luckynumber==32 ||luckynumber==36 ||luckynumber==34) {

            qmb = QMessageBox::information(this,"You Won!","You won 20% of the betted money! i.e. "+QString::number(0.2*n));
            betamount += (int) ceil(0.2*n);

    }
    else {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 20% of the betted money! i.e. "+QString::number(0.2*n)+"\nNumber was black");
        betamount -= (int) ceil(0.2*n);
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
    ui->pushButton_13->setVisible(false);
    ui->pushButton_14->setVisible(false);
}

void Roulette::on_pushButton_14_clicked()
{
    int luckynumber = rand()%36+1;
    float n = betamount;
    if(luckynumber==1 ||luckynumber==3 ||luckynumber==5 ||luckynumber==7 ||luckynumber==9 ||luckynumber==12 ||luckynumber==14 ||luckynumber==16 ||luckynumber==18 ||luckynumber==21 ||luckynumber==23 ||luckynumber==25 ||luckynumber==27 ||luckynumber==28 ||luckynumber==30 ||luckynumber==32 ||luckynumber==36 ||luckynumber==34) {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 20% of the betted money! i.e. "+QString::number(0.2*n)+"\nNumber was Red");
        betamount -= (int) ceil(0.2*n);

    }

    else {
        qmb = QMessageBox::information(this,"You Won!","You won 20% of the betted money! i.e. "+QString::number(0.2*n));
        betamount += (int) ceil(0.2*n);
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
    ui->pushButton_13->setVisible(false);
    ui->pushButton_14->setVisible(false);
}

void Roulette::on_pushButton_5_clicked()
{
    ui->pushButton_17->setVisible(true);
    ui->pushButton_18->setVisible(true);
    ui->pushButton_19->setVisible(true);

}

void Roulette::on_pushButton_19_clicked()
{
    int luckyNumber = rand()%36+1;
    float n = betamount;
    if(luckyNumber>=1 && luckyNumber<=12)
    {
        qmb = QMessageBox::information(this,"You Won!","You won 20% of the betted money! i.e. "+QString::number(0.2*n));
        betamount += (int) ceil(0.2*n);
    }
    else {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 10% of the betted money! i.e. "+QString::number(0.2*n)+ "\nNumber was "+QString::number(luckyNumber));
        betamount -= (int) ceil(0.2*n);
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
    ui->pushButton_17->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_19->setVisible(false);
}

void Roulette::on_pushButton_18_clicked()
{
    int luckyNumber = rand()%36+1;
    float n = betamount;
    if(luckyNumber>=13 && luckyNumber<=24)
    {
        qmb = QMessageBox::information(this,"You Won!","You won 20% of the betted money! i.e. "+QString::number(0.2*n));
        betamount += (int) ceil(0.2*n);
    }
    else {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 10% of the betted money! i.e. "+QString::number(0.2*n)+ "\nNumber was "+QString::number(luckyNumber));
        betamount -= (int) ceil(0.2*n);
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
    ui->pushButton_17->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_19->setVisible(false);
}

void Roulette::on_pushButton_17_clicked()
{
    int luckyNumber = rand()%36+1;
    float n = betamount;
    if(luckyNumber>=25 && luckyNumber<=36)
    {
        qmb = QMessageBox::information(this,"You Won!","You won 20% of the betted money! i.e. "+QString::number(0.2*n));
        betamount += (int) ceil(0.2*n);
    }
    else {
        qmb = QMessageBox::critical(this,"You Lost!","You lost 10% of the betted money! i.e. "+QString::number(0.2*n)+ "\nNumber was "+QString::number(luckyNumber));
        betamount -= (int) ceil(0.2*n);
    }
    ui->label_4->setText("Amount Left: "+QString::number(betamount));
    ui->pushButton_17->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_19->setVisible(false);
}

void Roulette::on_pushButton_15_clicked()
{
    amount += betamount;
    QSqlDatabase sql;
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
