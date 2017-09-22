#include "myfollower.h"
#include "ui_myfollower.h"
#include "data.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QMessageBox>
#include <QScrollBar>
using namespace  std;
static int nCurScroller=0; //翻页时的当时滑动条位置
static int pageValue = 12; // 一页显示条数
Myfollower::Myfollower(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Myfollower)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
   ui->tableWidget->setFont(QFont("微软雅黑", 10 ));
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList header;
    header<<tr("姓名")<<tr("id")<<tr("关注了");
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setShowGrid(false);
     ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
   ui->tableWidget->setStyleSheet("background-color:rgba(0,0,0,30)");
 //  ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
   //ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
    ui->tableWidget->show();
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    QPalette palette;
    QPixmap pixmap("focus.jpg");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);

}

Myfollower::~Myfollower()
{
    delete ui;
}
void Myfollower::print_follower_info()
{
    int k=0;
     ui->tableWidget->setRowCount(0);
    for(int i =0;i<p->get_focus_list().size();i++)
    {
        ui->tableWidget->setRowCount(k+1);
        for(int j=0;j<user_vector.size();j++)
        {
            if(p->get_focus_list()[i]==user_vector[j].get_user_id())
            {
                   ui->tableWidget->setItem(k,0,new QTableWidgetItem(user_vector[j].get_user_name()));
                   ui->tableWidget->setItem(k,1,new QTableWidgetItem(user_vector[j].get_user_id()));
                   ui->tableWidget->setItem(k,2,new QTableWidgetItem(QString::number(user_vector[j].get_focus_list().size())+"人"));
                   break;
            }
        }
        k++;
    }
    cout<<p->get_focus_list().size()<<endl;
}

void Myfollower::on_pushButton_2_clicked()
{
    this->close();
}

void Myfollower::on_pushButton_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {

        QMessageBox box (QMessageBox::NoIcon,tr("取消"),tr("确定取消关注?"),QMessageBox::Yes|QMessageBox::No,this);
        box.setStyleSheet("background-color:white");
        QIcon icon("out.ico");
        box.setWindowIcon(icon);
        box.setButtonText(QMessageBox::Yes,QString("确定"));
        box.setButtonText(QMessageBox::No,QString("取消"));
        if(box.exec()==QMessageBox::Yes)
        {

        QModelIndex index=ui->tableWidget->currentIndex();
        QString info =ui->tableWidget->item(index.row(),1)->text();
        QMessageBox Fail(QMessageBox::NoIcon, "成功", "取消关注成功");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    for(int i=0;i<p->get_focus_list().size();i++)
    {
        if(p->get_focus_list()[i]==info)
            p->delete_focus_list(p->get_focus_list_index(info));
            delete_follower();
    }
    }
    }
    else{
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择关注者");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
    print_follower_info();
}
void Myfollower::delete_follower()
{
    QFile UserFollower(p->get_user_id()+".txt");
    if(!UserFollower.open(QIODevice:: WriteOnly|QIODevice::Text))
    {
        std::cerr << "Cannot open file for 111reading" << std::endl;
    }
    QTextStream out(&UserFollower);
    for(int i=0;i<p->get_focus_list().size();i++)
    {
        out<<p->get_focus_list()[i]<<endl;
    }
    UserFollower.close();
}

void Myfollower::on_pushButton_3_clicked()
{
    int maxValue = ui->tableWidget->verticalScrollBar()->maximum();
       nCurScroller = ui->tableWidget->verticalScrollBar()->value();
       if(nCurScroller>0)
           ui->tableWidget->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
       else
           ui->tableWidget->verticalScrollBar()->setSliderPosition(maxValue);
}

void Myfollower::on_pushButton_4_clicked()
{
    int maxValue = ui->tableWidget->verticalScrollBar()->maximum();
            nCurScroller = ui->tableWidget->verticalScrollBar()->value(); //获得当前scroller值
            if(nCurScroller<maxValue)
                ui->tableWidget->verticalScrollBar()->setSliderPosition(pageValue+nCurScroller);
            else
                ui->tableWidget->verticalScrollBar()->setSliderPosition(0);
}

void Myfollower::on_pushButton_5_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->tableWidget->currentIndex();
        QString id =ui->tableWidget->item(index.row(),1)->text();
        followerInfo.print_follower_info(id);
        followerInfo.exec();
        print_follower_info();
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择关注者");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}
