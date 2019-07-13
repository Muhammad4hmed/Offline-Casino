/********************************************************************************
** Form generated from reading UI file 'jackpot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JACKPOT_H
#define UI_JACKPOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Jackpot
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_8;

    void setupUi(QWidget *Jackpot)
    {
        if (Jackpot->objectName().isEmpty())
            Jackpot->setObjectName(QString::fromUtf8("Jackpot"));
        Jackpot->resize(626, 905);
        Jackpot->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 18pt \"Segoe UI Black\";"));
        label = new QLabel(Jackpot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, -20, 541, 351));
        label->setPixmap(QPixmap(QString::fromUtf8("../JMS-Pink-550x348.f69943d.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(Jackpot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 270, 331, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(10);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(false);
        horizontalLayoutWidget = new QWidget(Jackpot);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 320, 561, 281));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 97, 91);"));
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(Jackpot);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 380, 171, 201));
        label_5 = new QLabel(Jackpot);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 380, 171, 201));
        label_6 = new QLabel(Jackpot);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(410, 380, 161, 201));
        label_7 = new QLabel(Jackpot);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 330, 321, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(123, 5, 134);\n"
"background-color: rgb(148, 113, 6);"));
        label_7->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Jackpot);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(254, 610, 102, 102));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"alternate-background-color: rgb(247, 12, 255);\n"
"font: 87 35pt \"Segoe UI Black\";\n"
"background-color: rgb(255, 14, 18);\n"
"color: rgb(255, 255, 255);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:50px;\n"
" border-color: red;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(Jackpot);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 610, 141, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 38, 115);\n"
"color: rgb(255, 255, 255);"));
        label_8 = new QLabel(Jackpot);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 620, 221, 71));
        label_8->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Segoe UI Black\";"));

        retranslateUi(Jackpot);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(Jackpot);
    } // setupUi

    void retranslateUi(QWidget *Jackpot)
    {
        Jackpot->setWindowTitle(QApplication::translate("Jackpot", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Jackpot", "TRY YOUR LUCK!!", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("Jackpot", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("Jackpot", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("Jackpot", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("Jackpot", "Play Game", nullptr));
        pushButton->setText(QApplication::translate("Jackpot", "GO!", nullptr));
        pushButton_2->setText(QApplication::translate("Jackpot", "End Game", nullptr));
        label_8->setText(QApplication::translate("Jackpot", "Current \n"
"Balance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Jackpot: public Ui_Jackpot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JACKPOT_H
