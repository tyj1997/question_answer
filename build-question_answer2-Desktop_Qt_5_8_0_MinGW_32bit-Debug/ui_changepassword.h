/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(510, 680);
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 330, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        lineEdit_2 = new QLineEdit(ChangePassword);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 320, 201, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label_4 = new QLabel(ChangePassword);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 430, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        lineEdit = new QLineEdit(ChangePassword);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 210, 201, 31));
        lineEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        lineEdit_3 = new QLineEdit(ChangePassword);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 420, 201, 31));
        lineEdit_3->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 210, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label = new QLabel(ChangePassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 80, 241, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 32pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton = new QPushButton(ChangePassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 570, 121, 51));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangePassword", "\345\216\237\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChangePassword", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangePassword", "\350\264\246\345\217\267", Q_NULLPTR));
        label->setText(QApplication::translate("ChangePassword", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangePassword", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
