/********************************************************************************
** Form generated from reading UI file 'myinvite.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINVITE_H
#define UI_MYINVITE_H

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

class Ui_Myinvite
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Myinvite)
    {
        if (Myinvite->objectName().isEmpty())
            Myinvite->setObjectName(QStringLiteral("Myinvite"));
        Myinvite->resize(1035, 689);
        tableWidget = new QTableWidget(Myinvite);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(70, 130, 841, 461));
        pushButton = new QPushButton(Myinvite);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 620, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;\n"
"\n"
"\n"
""));
        label = new QLabel(Myinvite);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 20, 351, 81));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 32pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        retranslateUi(Myinvite);

        QMetaObject::connectSlotsByName(Myinvite);
    } // setupUi

    void retranslateUi(QDialog *Myinvite)
    {
        Myinvite->setWindowTitle(QApplication::translate("Myinvite", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Myinvite", "\346\237\245\347\234\213\351\227\256\351\242\230", Q_NULLPTR));
        label->setText(QApplication::translate("Myinvite", "\346\210\221\346\224\266\345\210\260\347\232\204\351\202\200\350\257\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Myinvite: public Ui_Myinvite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINVITE_H
