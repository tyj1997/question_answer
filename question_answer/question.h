
#ifndef QUESTION_H
#define QUESTION_H
#include <QString>
#include <basicinfo.h>
#include <QDialog>
#include <data.h>
#include <QTextStream>

class Question : private BasicInfo
{

public:

    Question(const QString & question_id,const QString &creater_id,const QString &title,const QString &content,const QString &create_time);
    Question();
        virtual void create_question(QString quest_id,QString id,QString title,QString contents,QString time);
        virtual QString get_info();
        QString get_title(){return this->title;}
        void set_title(QString title){this->title=title;}
        QString get_creater_id(){return this->creater_id;}
        QString get_id(){return this->question_id;}
        QString  get_content(){return this->content;}
        QString  get_time(){return this->create_time;}
        void set_answer_num(int answer_num){this->answer_num=answer_num;}
        int get_answer_num(){return this->answer_num;}


        void set_creater_id(QString creater_id){this->creater_id=creater_id;}
        void set_id(QString id){this->question_id=id;}
        void set_content(QString content){this->content=content;}
        void set_time(QString create_time){this->create_time=create_time;}

private:
        QString title;
        int answer_num=0;

};

#endif // QUESTION_H





