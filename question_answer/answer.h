#ifndef ANSWER_H
#define ANSWER_H
#include <QString>
#include "basicinfo.h"
#include "data.h"
#include <QTextStream>
class Answer:private BasicInfo
{
public:
    Answer(const QString &creater_id,const QString &ques_id,const QString &answer_id,const QString &content,const QString &create_time);
    Answer();
    virtual void create_answer(QString creater_id,QString ques_id,QString answer_id,QString content,QString create_time) ;
    virtual QString get_info();
    void set_praiseNum(int praiseNum){this->praiseNum=praiseNum;}
     int get_praiseNum(){return this->praiseNum;}
     QString get_creater_id(){return this->creater_id;}
     QString get_id(){return this->question_id;}
     QString get_answer_id(){return this->answer_id;}
     QString  get_content(){return this->content;}
     QString  get_time(){return this->create_time;}
     void set_answer_id(QString answer_id){this->answer_id=answer_id;}
     void set_id(QString id){this->question_id=id;}
     void set_content(QString content){this->content=content;}
     void set_time(QString create_time){this->create_time=create_time;}
     void set_creater_id(QString creater_id){this->creater_id=creater_id;}

private:
    int praiseNum;
    QString answer_id;
};

#endif // ANSWER_H
