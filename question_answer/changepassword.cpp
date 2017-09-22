#include "changepassword.h"
#include "ui_changepassword.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
ChangePassword::ChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    QPalette palette;
    QPixmap pixmap("register.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
}

ChangePassword::~ChangePassword()
{
    delete ui;
}


void ChangePassword::on_pushButton_clicked()
{
    QString id=ui->lineEdit->text();
    QString old_password=ui->lineEdit_2->text();
    QString new_password=ui->lineEdit_3->text();
    if(id==""||old_password==""||new_password=="")
    {

        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请填写完整信息");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        return;
    }
    int i=0;
    for(i=0;i<user_vector.size();i++){
        if(user_vector[i].get_user_id()==id)
        {
            if(user_vector[i].get_user_password()!=old_password){
                QMessageBox Fail(QMessageBox::NoIcon, "失败", "原密码错误");
                QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
                Fail.exec();
              return;
        }
            else
                break;
      }
    }
    if(i==user_vector.size()){
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "改账号不存在");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
        return;
    }
        QMessageBox Success(QMessageBox::NoIcon, "成功", "修改密码成功");
        QPushButton *btn_sure =Success.addButton("确定", QMessageBox::AcceptRole);
        user_vector[i].set_user_password(new_password);
        Success.exec();
        QFile UserInfo("user_info.txt");
        if(!UserInfo.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            std::cerr << "Cannot open file for writing" << std::endl;
        }
        QTextStream out(&UserInfo);

            for(int i=0;i<user_vector.size();i++)
            {
            out<<user_vector[i];
            }
        UserInfo.close();

}
