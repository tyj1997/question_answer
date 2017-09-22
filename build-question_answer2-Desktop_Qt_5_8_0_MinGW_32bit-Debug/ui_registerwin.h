/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

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

class Ui_RegisterWin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QStringLiteral("RegisterWin"));
        RegisterWin->resize(510, 680);
        label = new QLabel(RegisterWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 50, 171, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 32pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_2 = new QLabel(RegisterWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 200, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_3 = new QLabel(RegisterWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 290, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_4 = new QLabel(RegisterWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 380, 91, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_5 = new QLabel(RegisterWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 460, 81, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        lineEdit = new QLineEdit(RegisterWin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 200, 201, 31));
        lineEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        lineEdit_2 = new QLineEdit(RegisterWin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 290, 201, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        lineEdit_3 = new QLineEdit(RegisterWin);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 450, 201, 31));
        lineEdit_3->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        lineEdit_4 = new QLineEdit(RegisterWin);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 370, 201, 31));
        lineEdit_4->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        pushButton = new QPushButton(RegisterWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 550, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QDialog *RegisterWin)
    {
        RegisterWin->setWindowTitle(QApplication::translate("RegisterWin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RegisterWin", "\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegisterWin", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegisterWin", "\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegisterWin", "\351\207\215\345\244\215\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("RegisterWin", "\345\247\223\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RegisterWin", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
