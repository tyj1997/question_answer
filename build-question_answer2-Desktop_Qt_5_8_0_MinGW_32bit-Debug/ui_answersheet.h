/********************************************************************************
** Form generated from reading UI file 'answersheet.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERSHEET_H
#define UI_ANSWERSHEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AnswerSheet
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *AnswerSheet)
    {
        if (AnswerSheet->objectName().isEmpty())
            AnswerSheet->setObjectName(QStringLiteral("AnswerSheet"));
        AnswerSheet->resize(873, 626);
        label = new QLabel(AnswerSheet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 161, 71));
        label->setStyleSheet(QString::fromUtf8("font: 25 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
""));
        pushButton = new QPushButton(AnswerSheet);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 570, 93, 28));
        textEdit = new QTextEdit(AnswerSheet);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(230, 100, 431, 371));

        retranslateUi(AnswerSheet);

        QMetaObject::connectSlotsByName(AnswerSheet);
    } // setupUi

    void retranslateUi(QDialog *AnswerSheet)
    {
        AnswerSheet->setWindowTitle(QApplication::translate("AnswerSheet", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AnswerSheet", "\345\233\236\345\244\215\345\206\205\345\256\271:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AnswerSheet", "\345\233\236\345\244\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnswerSheet: public Ui_AnswerSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERSHEET_H
