#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>
#include <list>
#include <QDateTime>
#include <cmath>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iterator>
#include <sstream>
#include <QString>
#include <exception>
#include <map>
#include <string>
#include<QTextStream>
#include <fstream>
class User;
class Answer;
class Question;
#include "user.h"
#include "question.h"
#include "answer.h"
using namespace std;
extern User *p;
extern vector<Question>  ques_info;
extern vector <User> user_vector;
extern vector<Answer>  answer_info;
extern QDateTime t;
extern QTextStream& operator <<(QTextStream& out, Answer& ans);

extern QTextStream& operator <<(QTextStream& out, User& user);

extern QTextStream& operator <<(QTextStream& out, Question& ques);

extern QTextStream& operator >>(QTextStream& in, Answer& ans);

extern QTextStream& operator >>(QTextStream& in, User& user);

extern QTextStream& operator >>(QTextStream& in, Question& ques);
