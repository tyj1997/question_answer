#ifndef BASICINFO_H
#define BASICINFO_H
#include <QString>

class BasicInfo
{
public:
    BasicInfo();
    virtual ~BasicInfo();
    virtual QString get_info()=0;
    virtual void create_question(QString question_id,QString creater_id,QString content,QString create_time){}
    virtual void create_answer(QString creater_id,QString ques_id,QString content,QString create_time){}
    QString question_id;
    QString creater_id;
    QString create_time;
    QString content;
};

#endif // BASICINFO_H
