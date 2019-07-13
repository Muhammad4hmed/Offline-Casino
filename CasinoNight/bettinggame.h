#ifndef BETTINGGAME_H
#define BETTINGGAME_H

#include <QWidget>

namespace Ui {
class BettingGame;
}

class BettingGame : public QWidget
{
    Q_OBJECT

public:
    explicit BettingGame(QWidget *parent = nullptr);
    ~BettingGame();

public slots:
    void getUser(QString,QString);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::BettingGame *ui;
    QString user,username;
    int amount=0,betamount;
};

#endif // BETTINGGAME_H
