#ifndef ROULETTE_H
#define ROULETTE_H
#include<QMessageBox>
#include <QWidget>

namespace Ui {
class Roulette;
}

class Roulette : public QWidget
{
    Q_OBJECT

public:
    explicit Roulette(QWidget *parent = nullptr);
    ~Roulette();

public slots:
    void startRoulette(QString name,QString username,int amount);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::Roulette *ui;
    QString name;
    QString username;
    int amount,betamount;
    QMessageBox::StandardButton qmb;
};

#endif // ROULETTE_H
