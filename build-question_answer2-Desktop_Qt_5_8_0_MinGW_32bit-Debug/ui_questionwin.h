/********************************************************************************
** Form generated from reading UI file 'questionwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONWIN_H
#define UI_QUESTIONWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QuestionWin
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *QuestionWin)
    {
        if (QuestionWin->objectName().isEmpty())
            QuestionWin->setObjectName(QStringLiteral("QuestionWin"));
        QuestionWin->resize(1035, 689);
        label_3 = new QLabel(QuestionWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 30, 531, 111));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"font: 24pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_4 = new QLabel(QuestionWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 170, 71, 30));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        textEdit = new QTextEdit(QuestionWin);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(250, 300, 541, 281));
        textEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label = new QLabel(QuestionWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 240, 101, 30));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(QuestionWin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 240, 541, 30));
        lineEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label_5 = new QLabel(QuestionWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 170, 461, 30));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(QuestionWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 290, 61, 41));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(QuestionWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 610, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_2 = new QPushButton(QuestionWin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 607, 111, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(QuestionWin);

        QMetaObject::connectSlotsByName(QuestionWin);
    } // setupUi

    void retranslateUi(QDialog *QuestionWin)
    {
        QuestionWin->setWindowTitle(QApplication::translate("QuestionWin", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("QuestionWin", "             \345\206\231\344\270\213\344\275\240\347\232\204\351\227\256\351\242\230\n"
"\346\217\217\350\277\260\347\262\276\347\241\256\347\232\204\351\227\256\351\242\230\346\233\264\346\230\223\345\276\227\345\210\260\350\247\243\347\255\224", Q_NULLPTR));
        label_4->setText(QApplication::translate("QuestionWin", "\345\217\221\345\270\203\350\200\205", Q_NULLPTR));
        label->setText(QApplication::translate("QuestionWin", "\346\240\207\351\242\230", Q_NULLPTR));
        label_5->setText(QApplication::translate("QuestionWin", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("QuestionWin", "\345\206\205\345\256\271", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QuestionWin", "\346\217\220\351\227\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QuestionWin", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QuestionWin: public Ui_QuestionWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONWIN_H
