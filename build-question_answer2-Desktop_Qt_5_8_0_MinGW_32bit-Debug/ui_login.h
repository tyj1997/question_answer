/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *id;
    QLineEdit *password;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1087, 628);
        Login->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 280, 61, 31));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_4 = new QLabel(Login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 360, 61, 41));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        id = new QLineEdit(Login);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(370, 280, 271, 31));
        id->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        password = new QLineEdit(Login);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(370, 360, 271, 31));
        password->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        password->setInputMethodHints(Qt::ImhHiddenText);
        pushButton_3 = new QPushButton(Login);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 450, 121, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_4 = new QPushButton(Login);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 450, 131, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        label_5 = new QLabel(Login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 170, 621, 61));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 32pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton_5 = new QPushButton(Login);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(730, 350, 121, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Login", "\346\263\250\345\206\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("Login", "\342\200\234\346\230\245\346\231\223\342\200\235\351\227\256\347\255\224\347\263\273\347\273\237\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Login", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
