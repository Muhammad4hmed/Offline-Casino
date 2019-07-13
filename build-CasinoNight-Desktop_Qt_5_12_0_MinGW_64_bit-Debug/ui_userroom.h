/********************************************************************************
** Form generated from reading UI file 'userroom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERROOM_H
#define UI_USERROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserRoom
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QWidget *UserRoom)
    {
        if (UserRoom->objectName().isEmpty())
            UserRoom->setObjectName(QString::fromUtf8("UserRoom"));
        UserRoom->resize(663, 740);
        UserRoom->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 29, 29);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 18pt \"Segoe UI Black\";"));
        label = new QLabel(UserRoom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 591, 311));
        label->setPixmap(QPixmap(QString::fromUtf8("../casino-logo-02.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(UserRoom);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 390, 611, 91));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 43, 4);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 28pt \"Segoe UI Black\";"));
        pushButton_2 = new QPushButton(UserRoom);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 500, 611, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 43, 4);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 28pt \"Segoe UI Black\";"));
        pushButton_3 = new QPushButton(UserRoom);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 610, 611, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 43, 4);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 28pt \"Segoe UI Black\";"));
        label_2 = new QLabel(UserRoom);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 335, 591, 41));

        retranslateUi(UserRoom);

        QMetaObject::connectSlotsByName(UserRoom);
    } // setupUi

    void retranslateUi(QWidget *UserRoom)
    {
        UserRoom->setWindowTitle(QApplication::translate("UserRoom", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("UserRoom", "Jackpot", nullptr));
        pushButton_2->setText(QApplication::translate("UserRoom", "Roulette", nullptr));
        pushButton_3->setText(QApplication::translate("UserRoom", "Betting Game", nullptr));
        label_2->setText(QApplication::translate("UserRoom", "Welcome, ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserRoom: public Ui_UserRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERROOM_H
