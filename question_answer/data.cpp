#include <vector>
#include "QString"
#include <QFile>
#include <QTextStream>
#include "data.h"
class Question;
class User;
class Answer;
vector<Question> ques_info;
User *p=NULL;
vector <User> user_vector;
QDateTime t=QDateTime::currentDateTime();
vector<Answer>  answer_info;

QTextStream& operator <<(QTextStream& out, Answer& ans)
  {
      out<<ans.get_creater_id()<<endl;
      out<<ans.get_id()<<endl;
      out<<ans.get_answer_id()<<endl;
      out<<ans.get_content()<<endl;
      out<<ans.get_time()<<endl;
      out<<ans.get_praiseNum()<<endl;
      return out;
  }
QTextStream& operator <<(QTextStream& out, User& user)
  {
      out<<user.get_user_name()<<endl;
      out<<user.get_user_id()<<endl;
      out<<user.get_user_password()<<endl;
      return out;
  }

QTextStream& operator <<(QTextStream& out, Question& ques)
  {

      out<<ques.get_id()<<endl;
      out<<ques.get_creater_id()<<endl;
      out<<ques.get_title()<<endl;
      out<<ques.get_content()<<endl;
      out<<ques.get_time()<<endl;
      return out;
  }
QTextStream& operator >>(QTextStream& in, Answer & ans)
  {
      ans.set_creater_id(in.readLine());
      ans.set_id(in.readLine());
      ans.set_answer_id(in.readLine());
      ans.set_content(in.readLine());
      ans.set_time(in.readLine());
      ans.set_praiseNum(in.readLine().toInt());
      return in;
  }
QTextStream& operator >>(QTextStream& in, User& user)
  {

      user.set_user_name(in.readLine());
      user.set_user_id(in.readLine());
      user.set_user_password(in.readLine());
      return in;
  }
QTextStream& operator >>(QTextStream& in, Question& ques)
  {

      ques.set_id(in.readLine());
      ques.set_creater_id(in.readLine());
      ques.set_title(in.readLine());
      ques.set_content(in.readLine());
      ques.set_time(in.readLine());
      return in;
  }
