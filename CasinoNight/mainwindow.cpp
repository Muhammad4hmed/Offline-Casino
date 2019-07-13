#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMediaPlaylist>
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMediaPlaylist *player = new QMediaPlaylist;
    player->addMedia(QUrl("E:/O2/Casino_Night_Zone-dcd1c306-bc02-3e6b-8c23-b870126c48ca.mp3"));
    player->setPlaybackMode(QMediaPlaylist::Loop);
    QMediaPlayer *music = new QMediaPlayer;
    music->setPlaylist(player);
    music->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    al->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    u->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton qmb;
    qmb =  QMessageBox::information(this,"About US","Casino Night is built using some languages C++, SQL, CSS & XML\nMorever the Database(SQLite) is used to save user's data and the games can modify it.\nThe admin has only right to delete anyone's registration. ");
}
