/********************************************************************************
** Form generated from reading UI file 'myfollower.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFOLLOWER_H
#define UI_MYFOLLOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Myfollower
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Myfollower)
    {
        if (Myfollower->objectName().isEmpty())
            Myfollower->setObjectName(QStringLiteral("Myfollower"));
        Myfollower->resize(946, 749);
        label = new QLabel(Myfollower);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 20, 231, 91));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 32pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        tableWidget = new QTableWidget(Myfollower);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(170, 150, 641, 461));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton = new QPushButton(Myfollower);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 330, 121, 51));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_2 = new QPushButton(Myfollower);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 490, 121, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_3 = new QPushButton(Myfollower);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 650, 121, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_4 = new QPushButton(Myfollower);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(580, 650, 121, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_5 = new QPushButton(Myfollower);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 170, 111, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(Myfollower);

        QMetaObject::connectSlotsByName(Myfollower);
    } // setupUi

    void retranslateUi(QDialog *Myfollower)
    {
        Myfollower->setWindowTitle(QApplication::translate("Myfollower", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Myfollower", "\346\210\221\347\232\204\345\205\263\346\263\250", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Myfollower", "\345\217\226\346\266\210\345\205\263\346\263\250", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Myfollower", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Myfollower", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Myfollower", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Myfollower", "\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Myfollower: public Ui_Myfollower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFOLLOWER_H
