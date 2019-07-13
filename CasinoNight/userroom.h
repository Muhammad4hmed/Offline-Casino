#ifndef USERROOM_H
#define USERROOM_H

#include <QWidget>

namespace Ui {
class UserRoom;
}

class UserRoom : public QWidget
{
    Q_OBJECT

public:
    explicit UserRoom(QWidget *parent = nullptr);
    ~UserRoom();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


public slots:
    void getUser(QString,QString);

private:
    Ui::UserRoom *ui;
    QString user,username;
};

#endif // USERROOM_H
