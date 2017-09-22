#include "registerwin.h"
#include "ui_registerwin.h"
#include <QMessageBox>
#include <QFile>
#include<QTextStream>
RegisterWin::RegisterWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    QPalette palette;
    QPixmap pixmap("register.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}
void RegisterWin::Addperson()
{
    QString id=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    QString password2=ui->lineEdit_4->text();
    QString name=ui->lineEdit_3->text();
    if(id==""||password==""||password2==""||name=="")
    {

        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请填写完整信息");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        return;
    }
    for(int i=0;i<user_vector.size();i++){
        if(user_vector[i].get_user_id()==id)
        {
            QMessageBox Fail(QMessageBox::NoIcon, "失败", "该ID已存在");
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            Fail.exec();
            return;
        }
    if(password!=password2){
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "两次密码请输入一致");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        return;
    }
    else{
        QMessageBox Success(QMessageBox::NoIcon, "成功", "注册成功");
        QPushButton *btn_sure =Success.addButton("确定", QMessageBox::AcceptRole);
        Success.exec();
        QFile UserInfo("user_info.txt");
        if(!UserInfo.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
        {
            std::cerr << "Cannot open file for writing" << std::endl;
        }
        QTextStream out(&UserInfo);
            User user(name,id,password);
            out<<user;
            QFile UserFollower(id+".txt");
            if(!UserFollower.open(QIODevice:: ReadWrite))
            {
                std::cerr << "Cannot open file for 111writing" << std::endl;
            }
            QTextStream in1(&UserInfo);
                while(!in1.atEnd())
                    user.get_focus_list().push_back(in1.readLine());
            user_vector.push_back(user);
             UserInfo.close();
             this->close();
            return;

            }

    }
}

void RegisterWin::on_pushButton_clicked()
{
    Addperson();
}
