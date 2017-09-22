#include "answersheet.h"
#include "ui_answersheet.h"
#include "QMessageBox"
#include <QFile>
#include <iostream>
#include <QTextStream>
AnswerSheet::AnswerSheet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnswerSheet)
{
    ui->setupUi(this);
}

AnswerSheet::~AnswerSheet()
{
    delete ui;
}

void AnswerSheet::on_pushButton_clicked()
{
    QString contents=ui->textEdit->toPlainText();
    if(contents.length()<5)
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "回复内容请大于5个字");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
    else
    {
        QString
    }
}
