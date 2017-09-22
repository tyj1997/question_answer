#include "login.h"
#include "ui_login.h"

#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include "user.h"
using namespace std;
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    this->setWindowTitle(tr("登录"));
    ui->password->setEchoMode(QLineEdit::Password);
    QPalette palette;
    QPixmap pixmap("login.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_3_clicked()
{
    QString CurrentId = ui->id->text();
    QString CurrentPassWord = ui->password->text();
    for (int i=0;i<user_vector.size();i++)
        {
            if(user_vector[i].get_user_id()==CurrentId)
            {
                if(user_vector[i].get_user_password()==CurrentPassWord)
                {
                    accept();
                    p=&user_vector[i];
                   // cout<<&p<<endl;
                   // cout<<p->get_user_id().toStdString()<<endl;
                   // cout<<p->get_user_name().toStdString()<<endl;
                   // cout<<p->get_user_password().toStdString()<<endl;
                    ui->id->clear();
                    ui->password->clear();
                    this->hide();
                    return;
                }
                else
                {
                    ui->password->clear();
                    QMessageBox Fail(QMessageBox::NoIcon, "失败", "密码错误");
                    QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
                    Fail.exec();
                    return;

                }
            }
        }
        ui->password->clear();
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "账号不存在");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        return;



}
void Login::AddUser()
{
    QFile UserInfo("user_info.txt");
    try{
    if(!UserInfo.open(QIODevice::ReadOnly))
    {
        throw runtime_error("Read");
     }
    }
        catch(runtime_error &r)
      {
        std::cerr << "Cannot open file for reading" << std::endl;
        cout<<r.what()<<endl;
    }
    QTextStream in(&UserInfo);
    QString s[3];
    while(!in.atEnd())
        {
        for(int i = 0;i <=2;i++)
            s[i] = in.readLine();
        User user(s[0],s[1],s[2]);
        user_vector.push_back(user);


        QFile UserFollower(s[1]+".txt");
        try
        {
        if(!UserFollower.open(QIODevice:: ReadWrite))
        {
            throw runtime_error("Write");
         }
        }
            catch(runtime_error &r)
          {
            std::cerr << "Cannot open file for 111reading" << std::endl;
            cout<<r.what()<<endl;
        }
        QTextStream in1(&UserFollower);
            while(!in1.atEnd())
           user_vector[user_vector.size()-1].set_focus_list(in1.readLine());
            UserFollower.close();



            QFile UserPraise(s[1]+"_praiselist"+".txt");
            try{
            if(!UserPraise.open(QIODevice:: ReadWrite))
            {
                throw runtime_error("Write");
             }
            }
                catch(runtime_error &r)
              {
                std::cerr << "Cannot open file for 111reading" << std::endl;
                return;
            }
            QTextStream in2(&UserPraise);
                while(!in2.atEnd())
                    user_vector[user_vector.size()-1].set_praise_list(in2.readLine());
          UserPraise.close();

          QFile UserInvite(s[1]+"_invite"+".txt");
          try{
          if(!UserInvite.open(QIODevice:: ReadWrite))
          {
              throw runtime_error("Write");

           }
          }
              catch(runtime_error &r)
            {
              std::cerr << "Cannot open file for 111reading" << std::endl;
              return;
          }
          QTextStream in3(&UserInvite);
              while(!in3.atEnd())
                  user_vector[user_vector.size()-1].set_invite_list(in3.readLine());
         UserInvite.close();



        }

    UserInfo.close();

}

void Login::on_pushButton_4_clicked()
{
    registerWin.exec();
}

void Login::on_pushButton_5_clicked()
{
    changepassword.exec();
}
