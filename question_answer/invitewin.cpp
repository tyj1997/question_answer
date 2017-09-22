#include "invitewin.h"
#include "ui_invitewin.h"
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QScrollBar>
#include <QMessageBox>
InviteWin::InviteWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InviteWin)
{
    ui->setupUi(this);
    QPalette palette;
    QPixmap pixmap("register.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
}

InviteWin::~InviteWin()
{
    delete ui;
}

void InviteWin::on_pushButton_clicked()
{
    if(ui->listWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->listWidget->currentIndex();
        QString info =ui->listWidget->item(index.row())->text();
        for(int i=0;i<user_vector.size();i++)
        {
            if(user_vector[i].get_user_id()==info)
            {
                user_vector[i].set_invite_list(ui->label_3->text());
                QMessageBox Fail(QMessageBox::NoIcon, "成功", "邀请成功!");
                QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
                Fail.exec();



                QFile InviteInfo(info+"_invite"+".txt");
                    if(! InviteInfo.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
                    {
                        std::cerr << "Cannot open file for writing" << std::endl;
                    }
                    QTextStream out(&InviteInfo);

                    out<<ui->label_3->text()<<endl;
                    InviteInfo.close();


                break;
            }
        }
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择邀请人!");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}
void InviteWin::print_invite_info(QString id)
{
    QStringList s;
    ui->listWidget->clear();
    for(int i=0;i<p->get_focus_list().size();i++)
    {
        s<<p->get_focus_list()[i];
    }
    ui->listWidget->addItems(s);
    ui->listWidget->show();
    ui->label_3->setText(id);
}


