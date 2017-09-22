#ifndef USER_H
#define USER_H
#include <string>
#include <QString>
#include <QList>
#include<vector>
#include "data.h"
class User
{
public:
    User(const QString & user_name,const QString & user_id,const QString & user_password);
    User();
    QString get_user_name(){return this->user_name;}
    QString get_user_id(){return this->user_id;}
    QString get_user_password(){return this->user_password;}
    QList<QString> get_focus_list(){return this->focus_list;}
    QList<QString> get_praise_list(){return this->praise_list;}
    void set_user_name(QString user_name){this->user_name=user_name;}
    void set_user_id(QString user_id){this->user_id=user_id;}
    void set_user_password(QString user_password){this->user_name=user_password;}
    void delete_focus_list(int index){this->focus_list.removeAt(index);}
    void set_focus_list(QString id){this->focus_list.append(id);}
    int get_focus_list_index(QString id){return this->focus_list.indexOf(id);}

    void delete_praise_list(int index){this->praise_list.removeAt(index);}
    void set_praise_list(QString id){this->praise_list.append(id);}
    int get_praise_list_index(QString id){return this->praise_list.indexOf(id);}
    void set_invite_list(QString id){this->invite_list.append(id);}
    QList<QString> get_invite_list(){return this->invite_list;}

private:
    QString user_id;
    QString user_name;
    QString user_password;
    QList<QString> focus_list;
    QList<QString>praise_list;
     QList<QString>invite_list;

};

#endif // USER_H
