/********************************************************************************
** Form generated from reading UI file 'askquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKQUESTION_H
#define UI_ASKQUESTION_H

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

class Ui_AskQuestion
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLabel *label_3;

    void setupUi(QDialog *AskQuestion)
    {
        if (AskQuestion->objectName().isEmpty())
            AskQuestion->setObjectName(QStringLiteral("AskQuestion"));
        AskQuestion->resize(827, 639);
        AskQuestion->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label = new QLabel(AskQuestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 170, 81, 31));
        label->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_2 = new QLabel(AskQuestion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 240, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        pushButton = new QPushButton(AskQuestion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 580, 93, 28));
        lineEdit = new QLineEdit(AskQuestion);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 170, 571, 31));
        lineEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        textEdit = new QTextEdit(AskQuestion);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 240, 571, 291));
        textEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label_3 = new QLabel(AskQuestion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 30, 441, 111));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));

        retranslateUi(AskQuestion);

        QMetaObject::connectSlotsByName(AskQuestion);
    } // setupUi

    void retranslateUi(QDialog *AskQuestion)
    {
        AskQuestion->setWindowTitle(QApplication::translate("AskQuestion", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AskQuestion", "\346\240\207\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("AskQuestion", "\345\206\205\345\256\271", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AskQuestion", "\346\217\220\351\227\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("AskQuestion", "           \345\206\231\344\270\213\344\275\240\347\232\204\351\227\256\351\242\230\n"
"\346\217\217\350\277\260\347\262\276\347\241\256\347\232\204\351\227\256\351\242\230\346\233\264\346\230\223\345\276\227\345\210\260\350\247\243\347\255\224", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AskQuestion: public Ui_AskQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKQUESTION_H
