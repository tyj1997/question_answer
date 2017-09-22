#ifndef QUESTIONCLASS_H
#define QUESTIONCLASS_H
#include <QString>
#include <basicinfo.h>
#include <QDialog>
#include <data.h>
#include <mainwindow.h>

class Questionclass :private BasicInfo
{


public:

    Questionclass(const QString & question_id,const QString &creater_id,const QString &title,const QString &content,const QString &create_time);
        virtual void create_question();
        virtual QString get_info();
        QString get_title(){return this->title;}
        void set_title(QString title){this->title=title;}
        QString get_creater_id(){return this->creater_id;}
        QString get_id(){return this->question_id;}
        QString  get_content(){return this->content;}
        QString  get_time(){return this->create_time;}
       //  vector<Question>  get_question_list(){return this->question_list;}
private:
        QString title;
};


#endif // QUESTIONCLASS_H
