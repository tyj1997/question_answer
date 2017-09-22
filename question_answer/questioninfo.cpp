#include "questioninfo.h"
#include "ui_questioninfo.h"
#include "QMessageBox"
#include <QFile>
#include <iostream>
#include <QTextStream>
#include "answer.h"
QuestionInfo::QuestionInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionInfo)
{
    ui->setupUi(this);
    ui->textEdit_2->setReadOnly(true);
    ui->textEdit_3->setReadOnly(true);
    QPalette palette;
    QPixmap pixmap("ques.jpg");

    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);

}

QuestionInfo::~QuestionInfo()
{
    delete ui;
}
void QuestionInfo::print_question_info(QString info)
{
   for (int i=0;i<ques_info.size();i++)
   {
       if(info==ques_info[i].get_id())
       {
           ui->label_6->setText(ques_info[i].get_title());
           ui->label_4->setText(ques_info[i].get_creater_id());
           ui->label_2->setText(ques_info[i].get_id());
            ui->textEdit_3->setText(ques_info[i].get_content());

       }
   }
   if(p->get_focus_list().contains( ui->label_4->text()))
   ui->pushButton->setText("取消关注");
   else
       ui->pushButton->setText("关注提问者");
}

void QuestionInfo::on_pushButton_clicked()
{
    if(!(p->get_focus_list().contains(ui->label_4->text())))
        {
        if(ui->label_4->text()!=p->get_user_id())
        {
        QString id=ui->label_4->text();
    p->set_focus_list(ui->label_4->text());
    QMessageBox Success(QMessageBox::NoIcon, "成功", "关注成功");
    QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
    Success.exec();

        ui->pushButton->setText("取消关注");
    QFile FollowerInfo(p->get_user_id()+".txt");
    if(!FollowerInfo.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        std::cerr << "Cannot open file for writing" << std::endl;
    }
    QTextStream out(&FollowerInfo);
    out<<id<<endl;
    FollowerInfo.close();
    }
        else
        {
            QMessageBox Fail(QMessageBox::NoIcon, "失败", "你不能关注自己");
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            Fail.exec();
        }

    }
    else
    {


        if(p->get_focus_list_index(ui->label_4->text())!=-1)
        {
            QMessageBox Success(QMessageBox::NoIcon, "成功", "取消关注成功");
            QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
            Success.exec();
            ui->pushButton->setText("关注提问者");
            p->delete_focus_list(p->get_focus_list_index(ui->label_4->text()));
            QFile FollowerInfo(p->get_user_id()+".txt");
            if(!FollowerInfo.open(QIODevice::WriteOnly|QIODevice::Text))
            {
                std::cerr << "Cannot open file for writing" << std::endl;
            }
            QTextStream out(&FollowerInfo);
            for(int i=0;i<p->get_focus_list().size();i++)
            out<<p->get_focus_list()[i]<<endl;
            FollowerInfo.close();

        }
    }

}

void QuestionInfo::on_pushButton_4_clicked()
{
    QString title= ui->label_6->text();
    QString content=ui->textEdit->toPlainText();
      QString id= ui->label_2->text();
    if(content.length()<5)
        {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "回复内容请在五个字以上");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
    else
    {
        QMessageBox Success(QMessageBox::NoIcon, "成功", "回复成功");
        QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
        Success.exec();
        ui->textEdit->clear();
        QFile Answer_id("answer_id.txt");
        try{
        if(! Answer_id.open(QIODevice::ReadOnly))
        {
            throw runtime_error("Write");
         }
        }
            catch(runtime_error &r)
          {
            std::cerr << "Cannot open file for writing" << std::endl;
        }
        QTextStream in(& Answer_id);
        QString Ans_id=in.readLine();
        Answer_id.close();

        QFile Answer_i("answer_id.txt");
        if(! Answer_i.open(QIODevice::WriteOnly))
        {
            std::cerr << "Cannot open file for writing" << std::endl;
        }
        QTextStream out(&Answer_i);
        out<<QString::number(Ans_id.toInt()+1)<<endl;
        Answer_i.close();
        for(int i=0;i<ques_info.size();i++)
        {
            if(ques_info[i].get_id()==ui->label_2->text())
            {
                ques_info[i].set_answer_num(ques_info[i].get_answer_num()+1);
            }
        }
        QString time=t.currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
        Answer answer(p->get_user_id(),id,Ans_id,content,time);
        answer.create_answer(p->get_user_id(),id,Ans_id,content,time);
        print_answer_info();
    }
}
void QuestionInfo::print_answer_info()
{
    int count=0;
    int flag=0;
    ui->listWidget->clear();
     QStringList s;
    QString id= ui->label_2->text();
    for(int i=0;i<answer_info.size();i++)
    {
        if(answer_info[i].get_id()==id)
        {
            flag=1;
            count++;
        }
    }
    if(flag=1)
    {
    for(int i=1;i<=count;i++)
    {
        s<<QString::number(i);
    }
    ui->listWidget->addItems(s);
    }
    ui->label_11->setText("无");
    ui->label_13->setText("无");
    ui->label_15->setText("0");
    ui->label_18->setText("无");
    ui->pushButton_3->setText("关注回答者");
    ui->textEdit_2->clear();


}

void QuestionInfo::on_listWidget_doubleClicked(const QModelIndex &index)
{
    int count=1;
    int num=ui->listWidget->item(index.row())->text().toInt();

    QFile AnswerInfo(ui->label_2->text()+".txt");
        if(! AnswerInfo.open(QIODevice::ReadOnly))
        {
            std::cerr << "Cannot open file for writing" << std::endl;
        }
        QTextStream in2(&AnswerInfo);
        while(!in2.atEnd())
        {
        Answer answer;
        in2>>answer;
        if(count==num)
        {
            ui->textEdit_2->setText(answer.get_content());
            ui->label_11->setText(answer.get_creater_id());
            ui->label_13->setText(answer.get_time());
            ui->label_18->setText(answer.get_answer_id());
            ui->label_15->setText(QString::number(answer.get_praiseNum()));
            break;
        }
            count++;
        }
        AnswerInfo.close();
        if((p->get_focus_list().contains(ui->label_11->text())))
          ui->pushButton_3->setText("取消关注");
        else
        {
             ui->pushButton_3->setText("关注回答者");
        }

        if((p->get_praise_list().contains(ui->label_18->text())))
          ui->pushButton_2->setText("取消点赞");
        else
        {
             ui->pushButton_2->setText("赞");
        }
    }



void QuestionInfo::on_pushButton_3_clicked()
{
    if(ui->label_13->text()!="无")
    {
    if(!(p->get_focus_list().contains(ui->label_11->text())))
        {
        QString id=ui->label_11->text();
    p->set_focus_list(ui->label_11->text());
    QMessageBox Success(QMessageBox::NoIcon, "成功", "关注成功");
    QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
    Success.exec();
    ui->pushButton_3->setText("取消关注");

    QFile FollowerInfo(p->get_user_id()+".txt");
    if(!FollowerInfo.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        std::cerr << "Cannot open file for writing" << std::endl;
    }
    QTextStream out(&FollowerInfo);
    out<<id<<endl;
    FollowerInfo.close();


    }
    else
    {


        if(p->get_focus_list_index(ui->label_11->text())!=-1)
        {
            QMessageBox Success(QMessageBox::NoIcon, "成功", "取消关注成功");
            QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
            Success.exec();
             ui->pushButton_3->setText("关注回答者");
            p->delete_focus_list(p->get_focus_list_index(ui->label_11->text()));
            QFile FollowerInfo(p->get_user_id()+".txt");
            if(!FollowerInfo.open(QIODevice::WriteOnly|QIODevice::Text))
            {
                std::cerr << "Cannot open file for writing" << std::endl;
            }
            QTextStream out(&FollowerInfo);
            for(int i=0;i<p->get_focus_list().size();i++)
            out<<p->get_focus_list()[i]<<endl;
            FollowerInfo.close();
        }
    }
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请先选择回答");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}

void QuestionInfo::on_pushButton_2_clicked()
{
    if(ui->label_13->text()!="无")
    {
        if(!(p->get_praise_list().contains(ui->label_18->text())))
        {
            int i=0;
           QString ques_id=ui->label_2->text();
           QString ans_id=ui->label_18->text();
           for(i=0;i<answer_info.size();i++)
           {
               if(answer_info[i].get_answer_id()==ans_id)
               {

                   answer_info[i].set_praiseNum(answer_info[i].get_praiseNum()+1);
                    ui->label_15->setText(QString::number(answer_info[i].get_praiseNum()));
                   break;
               }
           }
           p->set_praise_list(ui->label_18->text());
           QMessageBox Success(QMessageBox::NoIcon, "成功", "点赞成功");

           QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
           Success.exec();
           ui->pushButton_2->setText("取消点赞");

            }
        else
        {
            int i=0;
           QString ques_id=ui->label_2->text();
           QString ans_id=ui->label_18->text();
           for(i=0;i<answer_info.size();i++)
           {
               if(answer_info[i].get_answer_id()==ans_id)
               {

                   answer_info[i].set_praiseNum(answer_info[i].get_praiseNum()-1);
                    ui->label_15->setText(QString::number(answer_info[i].get_praiseNum()));
                   break;
               }
           }
           p->delete_praise_list(p->get_praise_list_index(ui->label_18->text()));
           QMessageBox Success(QMessageBox::NoIcon, "成功", "取消点赞成功");
           QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
           Success.exec();
           ui->pushButton_2->setText("赞");
        }
           QFile AnswerInfo(ui->label_2->text()+".txt");
               if(! AnswerInfo.open(QIODevice::WriteOnly|QIODevice::Text))
               {
                   std::cerr << "Cannot open file for writing" << std::endl;
               }
               QTextStream out(&AnswerInfo);
               QString s2[10];
               for(int j=0;j<answer_info.size();j++)
               {
                   if(answer_info[j].get_id()==ui->label_2->text())
                   {

                             out<<answer_info[j];
                   }
               }
               AnswerInfo.close();

                       QFile PraiseInfo(p->get_user_id()+"_praiselist"".txt");
                       if(!PraiseInfo.open(QIODevice::WriteOnly|QIODevice::Text))
                       {
                           std::cerr << "Cannot open file for writing" << std::endl;
                       }
                       QTextStream outs(&PraiseInfo);
                       for(int i=0;i<p->get_praise_list().size();i++)
                       outs<<p->get_praise_list()[i]<<endl;
                       PraiseInfo.close();
            }
    else{
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请先选择回答");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }

}

void QuestionInfo::on_pushButton_5_clicked()
{
    this->close();
}

void QuestionInfo::on_pushButton_6_clicked()
{
    invitewin.print_invite_info(ui->label_2->text());
    invitewin.exec();
}
