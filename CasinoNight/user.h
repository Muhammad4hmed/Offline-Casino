#ifndef USER_H
#define USER_H

#include <QWidget>
#include<QtSql/QSqlDatabase>
#include "userroom.h"
#include "register.h"
namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::User *ui;
    QSqlDatabase qdb;
    UserRoom *ur = new UserRoom;
    Register *r = new Register;
};

#endif // USER_H
