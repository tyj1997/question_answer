#include "user.h"

User::User(const QString & user_name,const QString & user_id,const QString & user_password)
{
    this->user_name=user_name;
    this->user_id=user_id;
    this->user_password=user_password;
    this->get_focus_list().clear();
    this->get_praise_list().clear();
}
User::User()
{

}
