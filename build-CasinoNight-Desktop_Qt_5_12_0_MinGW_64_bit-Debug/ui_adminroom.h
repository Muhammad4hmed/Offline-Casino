/********************************************************************************
** Form generated from reading UI file 'adminroom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINROOM_H
#define UI_ADMINROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminRoom
{
public:
    QLabel *label;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *AdminRoom)
    {
        if (AdminRoom->objectName().isEmpty())
            AdminRoom->setObjectName(QString::fromUtf8("AdminRoom"));
        AdminRoom->resize(642, 534);
        AdminRoom->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 18pt \"Segoe UI Black\";"));
        label = new QLabel(AdminRoom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 621, 171));
        label->setPixmap(QPixmap(QString::fromUtf8("../Admin-designstyle-candy-m.png")));
        label->setScaledContents(true);
        tableView = new QTableView(AdminRoom);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 210, 421, 291));
        tableView->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";\n"
"background-color: rgb(11, 72, 145);\n"
"font: 75 10pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));
        formLayoutWidget = new QWidget(AdminRoom);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(440, 210, 191, 291));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 15, 157);"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 227, 11);"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit);


        retranslateUi(AdminRoom);

        QMetaObject::connectSlotsByName(AdminRoom);
    } // setupUi

    void retranslateUi(QWidget *AdminRoom)
    {
        AdminRoom->setWindowTitle(QApplication::translate("AdminRoom", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("AdminRoom", "Enter Username \n"
"to Delete", nullptr));
        pushButton->setText(QApplication::translate("AdminRoom", "Delete", nullptr));
        pushButton_2->setText(QApplication::translate("AdminRoom", "Reload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminRoom: public Ui_AdminRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINROOM_H
