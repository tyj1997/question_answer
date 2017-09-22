#include "answer.h"
#include <iostream>
#include<QFile>
#include <QTextStream>
#include <exception>
Answer::Answer(const QString &creater_id,const QString &ques_id,const QString &answer_id,const QString &content,const QString &create_time)
{
    this->creater_id=creater_id;
    this->content=content;
    this->create_time=create_time;
    this->question_id=ques_id;
    this->answer_id=answer_id;
}
Answer:: Answer()
{

}

void Answer::create_answer(QString creater_id,QString ques_id,QString answer_id,QString content,QString create_time)
{
    Answer answer(creater_id,ques_id,answer_id, content,create_time);
    answer.set_praiseNum(0);
    answer_info.push_back(answer);
    QFile NewAnswer(ques_id+".txt");
    try
    {
    if(!NewAnswer.open(QIODevice::Text|QIODevice::WriteOnly|QIODevice::Append))
    throw runtime_error("Write");
    }
    catch(runtime_error &w)
    {
        std::cerr << "Cannot open file for writing" << std::endl;
        cout<<w.what()<<endl;
        return;
    }
    QTextStream out(&NewAnswer);
    out<<answer;
    NewAnswer.close();

}
QString Answer::get_info()
{

}

