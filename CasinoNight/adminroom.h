#ifndef ADMINROOM_H
#define ADMINROOM_H

#include <QWidget>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include<QDebug>

namespace Ui {
class AdminRoom;
}

class AdminRoom : public QWidget
{
    Q_OBJECT

public:
    explicit AdminRoom(QWidget *parent = nullptr);
    ~AdminRoom();
    void reload();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AdminRoom *ui;
    QSqlDatabase sql;
};

#endif // ADMINROOM_H
