#include "adminroom.h"
#include "ui_adminroom.h"

AdminRoom::AdminRoom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminRoom)
{
    ui->setupUi(this);
    ui->tableView->horizontalHeader()->setStyleSheet("color: black");
    reload();
}

AdminRoom::~AdminRoom()
{
    delete ui;
}
void AdminRoom::reload() {
    sql = QSqlDatabase::addDatabase("QSQLITE","SQLITE");
    sql.setDatabaseName("/E:/O2/userdata.db");
    if(sql.open()) {
      qDebug() << "Database connected";
    }
    else {
     qDebug() << "Error in connecting";
    }
   QSqlQueryModel *model = new QSqlQueryModel();
   QSqlQuery *qsq = new QSqlQuery(sql);
   qsq->prepare("SELECT * from Data");
   qsq->exec();
   model->setQuery(*qsq);
   ui->tableView->setModel(model);
}

void AdminRoom::on_pushButton_clicked()
{
    QSqlQuery *qsq = new QSqlQuery(sql);
    qsq->prepare("Delete FROM Data where Email = :email");
    qsq->bindValue(":email",ui->lineEdit->text());
    qsq->exec();
    reload();
}

void AdminRoom::on_pushButton_2_clicked()
{
    reload();
}
