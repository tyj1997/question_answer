#include "questionclass.h"

Questionclass::Questionclass(const QString & question_id,const QString &creater_id,const QString &title,const QString &content,const QString &create_time)
{
    this->question_id=question_id;
    this->creater_id=creater_id;
    this->title=title;
    this->content=content;
    this->create_time=create_time;

}
