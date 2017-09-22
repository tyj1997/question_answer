#include "questionwin.h"
#include "ui_questionwin.h"
#include "data.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <iostream>
QuestionWin::QuestionWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionWin)
{
    ui->setupUi(this);
    QPalette palette;
    QPixmap pixmap("ask.jpg");

    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    setWindowOpacity(0.9);
}

QuestionWin::~QuestionWin()
{
    delete ui;
}
void QuestionWin::create_info()
{
    QString titles=ui->lineEdit->text();
    QString contents=ui->textEdit->toPlainText();
    if(titles==""||contents=="")
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请输入完整信息");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
    else
    {
    QString time=t.currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString id=p->get_user_id();
    QFile Question_id("question_id.txt");
    if(! Question_id.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for writing" << std::endl;
    }
    QTextStream in(& Question_id);
    QString quest_id=in.readLine();
    Question_id.close();

    QFile Question_i("question_id.txt");
    if(! Question_i.open(QIODevice::WriteOnly))
    {
        std::cerr << "Cannot open file for writing" << std::endl;
    }
    QTextStream out(& Question_i);
    out<<QString::number(quest_id.toInt()+1)<<endl;
    Question_i.close();
    QString s=id;
    Question ques (quest_id,id,titles, contents, time);
    ques.create_question( quest_id,id,titles, contents, time);
    QMessageBox Fail(QMessageBox::NoIcon, "成功", "提问成功");
    QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
    ui->lineEdit->clear();
    ui->textEdit->clear();
    Fail.exec();
    this->close();
    }

}

void QuestionWin::on_pushButton_clicked()
{
    create_info();
}

void QuestionWin::print_id()
{
    ui->label_5->setText(p->get_user_id());
}

void QuestionWin::on_pushButton_2_clicked()
{
    this->close();
}
