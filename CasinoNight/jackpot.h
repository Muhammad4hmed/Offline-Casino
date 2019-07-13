#ifndef JACKPOT_H
#define JACKPOT_H

#include <QWidget>
#include<QtSql>

namespace Ui {
class Jackpot;
}

class Jackpot : public QWidget
{
    Q_OBJECT

public:
    explicit Jackpot(QWidget *parent = nullptr);
    ~Jackpot();

private slots:
    void on_pushButton_clicked();

    void generateResults(int randA,int randB,int randC);

    void on_pushButton_2_clicked();

public slots:
    void start(QString name,QString username,int );
private:
    Ui::Jackpot *ui;
    QString name,username;
    int amount=0;
    QSqlDatabase sql;
    QString pics[12] = {"E:/O2/Jackpot Pics/1 teF2BfJWP1n5b3Js-Y_TZA.png","‪‪E:/O2/Jackpot Pics/wc-swift.jpg","E:/O2/Jackpot Pics/58481791cef1014c0b5e4994.png","E:/O2/Jackpot Pics/68747470733a2f2f646576656c6f7065722e6665646f726170726f6a6563742e6f72672f7374617469632f6c6f676f2f6373686172702e706e67.png","E:/O2/Jackpot Pics/a2zcourse.com-C-programing-language-from-beginners-to-expert.png","E:/O2/Jackpot Pics/cpp_logo.png","E:/O2/Jackpot Pics/java-logo-vector-768x768.png","E:/O2/Jackpot Pics/Python-Logo-PNG-Image.png","E:/O2/Jackpot Pics/Ruby-Logo.png","‪E:/O2/Jackpot Pics/objective-c","E:/O2/Jackpot Pics/wc-swift.jpg"};
};

#endif // JACKPOT_H
