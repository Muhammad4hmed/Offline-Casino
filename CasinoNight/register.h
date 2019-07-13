#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include<QtSql>
#include "userroom.h"
namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Register *ui;
    QSqlDatabase sql;
    UserRoom *ur = new UserRoom;
};

#endif // REGISTER_H
