/********************************************************************************
** Form generated from reading UI file 'bettinggame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BETTINGGAME_H
#define UI_BETTINGGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BettingGame
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QPushButton *pushButton_3;

    void setupUi(QWidget *BettingGame)
    {
        if (BettingGame->objectName().isEmpty())
            BettingGame->setObjectName(QString::fromUtf8("BettingGame"));
        BettingGame->resize(585, 801);
        BettingGame->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 29, 29);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 18pt \"Segoe UI Black\";"));
        label = new QLabel(BettingGame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 491, 271));
        label->setPixmap(QPixmap(QString::fromUtf8("../BIG3D-4000x_0.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(BettingGame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(46, 300, 501, 41));
        label_3 = new QLabel(BettingGame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 355, 331, 31));
        lineEdit = new QLineEdit(BettingGame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 350, 161, 41));
        pushButton = new QPushButton(BettingGame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 392, 161, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 0, 3);\n"
"font: 87 16pt \"Segoe UI Black\";"));
        label_4 = new QLabel(BettingGame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 300, 341, 51));
        lineEdit_2 = new QLineEdit(BettingGame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 360, 351, 31));
        label_5 = new QLabel(BettingGame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 390, 341, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        lineEdit_3 = new QLineEdit(BettingGame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 450, 351, 31));
        pushButton_2 = new QPushButton(BettingGame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 490, 91, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 15, 36);"));
        label_6 = new QLabel(BettingGame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 550, 351, 41));
        pushButton_3 = new QPushButton(BettingGame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(404, 630, 151, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 2);"));

        retranslateUi(BettingGame);

        QMetaObject::connectSlotsByName(BettingGame);
    } // setupUi

    void retranslateUi(QWidget *BettingGame)
    {
        BettingGame->setWindowTitle(QApplication::translate("BettingGame", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("BettingGame", "Initially you have: ", nullptr));
        label_3->setText(QApplication::translate("BettingGame", "How much you want to bet:", nullptr));
        pushButton->setText(QApplication::translate("BettingGame", "BET", nullptr));
        label_4->setText(QApplication::translate("BettingGame", "Select a number in range 0-9", nullptr));
        label_5->setText(QApplication::translate("BettingGame", "Amount you want to bet on this:", nullptr));
        pushButton_2->setText(QApplication::translate("BettingGame", "BET!", nullptr));
        label_6->setText(QApplication::translate("BettingGame", "Amount Left:", nullptr));
        pushButton_3->setText(QApplication::translate("BettingGame", "END GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BettingGame: public Ui_BettingGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BETTINGGAME_H
