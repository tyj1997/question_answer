
#include "question.h"
#include "ui_question.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "user.h"
#include "login.h"
#include <iostream>
using namespace std;
Question::Question(const QString & question_id,const QString &creater_id,const QString &title,const QString &content,const QString &create_time)
{
    this->question_id=question_id;
    this->creater_id=creater_id;
    this->title=title;
    this->content=content;
    this->create_time=create_time;

}
Question::Question()
{

}

void Question::create_question(QString quest_id,QString id,QString titles,QString contents,QString time)
{

    Question question(quest_id,id,titles,contents,time);
    ques_info.insert( ques_info.begin(),question);

    QFile NewQuestion("question.txt");
    if(!NewQuestion.open(QIODevice::Text|QIODevice::WriteOnly|QIODevice::Append))
    {
        std::cerr << "Cannot open file for writing" << std::endl;
    }
    QTextStream out(&NewQuestion);
    out<<question;
    NewQuestion.close();


}
QString Question::get_info()
{
        return p->get_user_id();
}
