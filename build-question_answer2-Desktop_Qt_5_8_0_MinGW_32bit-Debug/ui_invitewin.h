/********************************************************************************
** Form generated from reading UI file 'invitewin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITEWIN_H
#define UI_INVITEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InviteWin
{
public:
    QListWidget *listWidget;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *InviteWin)
    {
        if (InviteWin->objectName().isEmpty())
            InviteWin->setObjectName(QStringLiteral("InviteWin"));
        InviteWin->resize(510, 680);
        listWidget = new QListWidget(InviteWin);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(110, 190, 231, 341));
        label_3 = new QLabel(InviteWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 140, 51, 31));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label = new QLabel(InviteWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 251, 81));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 32pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton = new QPushButton(InviteWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 590, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;\n"
"\n"
"\n"
""));
        label_2 = new QLabel(InviteWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 140, 51, 31));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        retranslateUi(InviteWin);

        QMetaObject::connectSlotsByName(InviteWin);
    } // setupUi

    void retranslateUi(QDialog *InviteWin)
    {
        InviteWin->setWindowTitle(QApplication::translate("InviteWin", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("InviteWin", "ID:", Q_NULLPTR));
        label->setText(QApplication::translate("InviteWin", "\351\202\200\350\257\267\345\233\236\347\255\224", Q_NULLPTR));
        pushButton->setText(QApplication::translate("InviteWin", "\351\202\200\350\257\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("InviteWin", "ID:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InviteWin: public Ui_InviteWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITEWIN_H
