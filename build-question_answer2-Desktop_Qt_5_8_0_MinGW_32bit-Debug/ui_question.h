/********************************************************************************
** Form generated from reading UI file 'question.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTION_H
#define UI_QUESTION_H

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

class Ui_Question
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Question)
    {
        if (Question->objectName().isEmpty())
            Question->setObjectName(QStringLiteral("Question"));
        Question->resize(868, 626);
        label = new QLabel(Question);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 170, 101, 41));
        label->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_2 = new QLabel(Question);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 220, 101, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        lineEdit = new QLineEdit(Question);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 170, 541, 31));
        lineEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        textEdit = new QTextEdit(Question);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 230, 541, 281));
        textEdit->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label_3 = new QLabel(Question);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 0, 491, 111));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        pushButton = new QPushButton(Question);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 560, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_4 = new QLabel(Question);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 110, 71, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_5 = new QLabel(Question);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 110, 451, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));

        retranslateUi(Question);

        QMetaObject::connectSlotsByName(Question);
    } // setupUi

    void retranslateUi(QDialog *Question)
    {
        Question->setWindowTitle(QApplication::translate("Question", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Question", "\346\240\207\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("Question", "\345\206\205\345\256\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("Question", "          \345\206\231\344\270\213\344\275\240\347\232\204\351\227\256\351\242\230\n"
"\346\217\217\350\277\260\347\262\276\347\241\256\347\232\204\351\227\256\351\242\230\346\233\264\346\230\223\345\276\227\345\210\260\350\247\243\347\255\224", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Question", "\346\217\220\351\227\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("Question", "\345\217\221\345\270\203\350\200\205", Q_NULLPTR));
        label_5->setText(QApplication::translate("Question", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Question: public Ui_Question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTION_H
