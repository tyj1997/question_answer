#include "followerinfo.h"
#include "ui_followerinfo.h"
#include <QMessageBox>
#include <QScrollBar>
#include <QTextStream>
#include <QFile>
using namespace std;
static int nCurScroller=0; //翻页时的当时滑动条位置
static int pageValue = 7; // 一页显示条数
FollowerInfo::FollowerInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FollowerInfo)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
   ui->tableWidget->setFont(QFont("微软雅黑", 10));
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList header;
    header<<tr("问题")<<tr("提问者id")<<tr("回答数")<<tr("发表时间")<<tr("问题ID");
   ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setShowGrid(false);
     ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
   ui->tableWidget->setStyleSheet("background-color:rgba(0,0,0,30)");
 //  ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
  // ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
    ui->tableWidget->show();


    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setColumnCount(6);
    ui->tableWidget_2->verticalHeader()->setDefaultSectionSize(50);
   ui->tableWidget_2->setFont(QFont("微软雅黑", 10));
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList header2;
    header2<<tr("回复")<<tr("回复者id")<<tr("问题")<<tr("发表时间")<<tr("问题ID")<<tr("回复ID");
   ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_2->setHorizontalHeaderLabels(header2);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setShowGrid(false);
     ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
   ui->tableWidget_2->setStyleSheet("background-color:rgba(0,0,0,30)");
 //  ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
  // ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
    ui->tableWidget_2->show();

    QPalette palette;
    QPixmap pixmap("follow.jpg");
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    ui->listWidget->hide();
}

FollowerInfo::~FollowerInfo()
{
    delete ui;
}
void FollowerInfo::print_follower_info(QString id)
{
    for(int i=0;i<user_vector.size();i++)
    {
        if(user_vector[i].get_user_id()==id)
        {
            ui->label_4->setText(user_vector[i].get_user_id());
            ui->label_5->setText(user_vector[i].get_user_name());
            ui->label_6->setText(QString::number(user_vector[i].get_focus_list().size())+"人");
            break;

        }
    }
    int k=0;
   // cout<<ques_info.size()<<endl;
     ui->tableWidget->setRowCount(0);
    for(int i=0;i<ques_info.size();i++)
    {
        if(ques_info[i].get_creater_id()==id)
        {
        ui->tableWidget->setRowCount(k+1);
        ui->tableWidget->setItem(k,0,new QTableWidgetItem(ques_info[i].get_title()));
        ui->tableWidget->setItem(k,1,new QTableWidgetItem(ques_info[i].get_creater_id()));
        ui->tableWidget->setItem(k,2,new QTableWidgetItem(QString::number(ques_info[i].get_answer_num())));
        ui->tableWidget->setItem(k,3,new QTableWidgetItem(ques_info[i].get_time()));
        ui->tableWidget->setItem(k,4,new QTableWidgetItem(ques_info[i].get_id()));
        k++;
        }

    }

    k=0;
   // cout<<ques_info.size()<<endl;
     ui->tableWidget_2->setRowCount(0);
    for(int i=0;i<answer_info.size();i++)
    {
        if(answer_info[i].get_creater_id()==id)
        {
        ui->tableWidget_2->setRowCount(k+1);
        ui->tableWidget_2->setItem(k,0,new QTableWidgetItem(answer_info[i].get_content()));
        ui->tableWidget_2->setItem(k,1,new QTableWidgetItem(answer_info[i].get_creater_id()));
        for(int j=0;j<ques_info.size();j++)
        {
            if(ques_info[j].get_id()==answer_info[i].get_id())
            {
            ui->tableWidget_2->setItem(k,2,new QTableWidgetItem(ques_info[j].get_title()));
            ui->tableWidget_2->setItem(k,4,new QTableWidgetItem(ques_info[j].get_id()));
            break;
            }
        }
        ui->tableWidget_2->setItem(k,3,new QTableWidgetItem(answer_info[i].get_time()));
        ui->tableWidget_2->setItem(k,5,new QTableWidgetItem(answer_info[i].get_answer_id()));
        k++;
        }

    }
}

void FollowerInfo::on_pushButton_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->tableWidget->currentIndex();
        QString info =ui->tableWidget->item(index.row(),4)->text();
        questioninfo.print_question_info(info);
        questioninfo.print_answer_info();
        questioninfo.exec();
        print_follower_info(ui->label_4->text());
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择问题");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}

void FollowerInfo::on_pushButton_2_clicked()
{
       QStringList s;
       ui->listWidget->clear();
       for(int i=0;i<user_vector.size();i++)
       {
           if(user_vector[i].get_user_id()==ui->label_4->text())
           {
               for(int j=0;j<user_vector[i].get_focus_list().size();j++)
                   s<<user_vector[i].get_focus_list()[j];
               break;
           }
       }
       ui->listWidget->addItems(s);
       ui->listWidget->show();
}

void FollowerInfo::on_pushButton_3_clicked()
{
    this->close();
}
void FollowerInfo::closeEvent(QCloseEvent *event)
{
    ui->listWidget->hide();

}

void FollowerInfo::on_pushButton_4_clicked()
{
    if(ui->tableWidget->currentIndex().row()!=-1)
    {
        QModelIndex index=ui->tableWidget_2->currentIndex();
        QString info =ui->tableWidget_2->item(index.row(),5)->text();
        questioninfo.print_question_info(info);
        questioninfo.print_answer_info();
        questioninfo.exec();
        print_follower_info(ui->label_4->text());
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择回复");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}

void FollowerInfo::on_pushButton_5_clicked()
{
    int maxValue = ui->tableWidget->verticalScrollBar()->maximum();
    nCurScroller = ui->tableWidget->verticalScrollBar()->value();
    if(nCurScroller>0)
        ui->tableWidget->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
    else
        ui->tableWidget->verticalScrollBar()->setSliderPosition(maxValue);
}

void FollowerInfo::on_pushButton_6_clicked()
{
    int maxValue = ui->tableWidget->verticalScrollBar()->maximum();
    nCurScroller = ui->tableWidget->verticalScrollBar()->value(); //获得当前scroller值
    if(nCurScroller<maxValue)
       ui->tableWidget->verticalScrollBar()->setSliderPosition(pageValue+nCurScroller);
    else
       ui->tableWidget->verticalScrollBar()->setSliderPosition(0);
}

void FollowerInfo::on_pushButton_7_clicked()
{
    int maxValue = ui->tableWidget_2->verticalScrollBar()->maximum();
    nCurScroller = ui->tableWidget_2->verticalScrollBar()->value();
    if(nCurScroller>0)
        ui->tableWidget_2->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
    else
        ui->tableWidget_2->verticalScrollBar()->setSliderPosition(maxValue);
}

void FollowerInfo::on_pushButton_8_clicked()
{
    int maxValue = ui->tableWidget_2->verticalScrollBar()->maximum();
    nCurScroller = ui->tableWidget_2->verticalScrollBar()->value(); //获得当前scroller值
    if(nCurScroller<maxValue)
       ui->tableWidget_2->verticalScrollBar()->setSliderPosition(pageValue+nCurScroller);
    else
       ui->tableWidget_2->verticalScrollBar()->setSliderPosition(0);
}



void FollowerInfo::on_pushButton_9_clicked()
{
    if(ui->listWidget->currentIndex().row()!=-1)
    {
    QString temp=ui->listWidget->item(ui->listWidget->currentIndex().row())->text();
    if(!(p->get_focus_list().contains(temp)))
        {
        ui->pushButton_9->setText("关注");
        if(temp!=p->get_user_id())
        {
        QString id=temp;
    p->set_focus_list(temp);
    QMessageBox Success(QMessageBox::NoIcon, "成功", "关注成功");
    QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
    Success.exec();

        ui->pushButton_9->setText("取消关注");
    QFile FollowerInfo(p->get_user_id()+".txt");
    if(!FollowerInfo.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        std::cerr << "Cannot open file for writing" << std::endl;
    }
    QTextStream out(&FollowerInfo);
    out<<id<<endl;
    FollowerInfo.close();
    }
        else
        {
            QMessageBox Fail(QMessageBox::NoIcon, "失败", "你不能关注自己");
            QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
            Fail.exec();
        }

    }
    else
    {


        ui->pushButton_9->setText("取消关注");
        if(p->get_focus_list_index(temp)!=-1)
        {
            QMessageBox Success(QMessageBox::NoIcon, "成功", "取消关注成功");
            QPushButton *btn_sure = Success.addButton("确定", QMessageBox::AcceptRole);
            Success.exec();
            ui->pushButton_9->setText("关注提问者");
            p->delete_focus_list(p->get_focus_list_index(temp));
            QFile FollowerInfo(p->get_user_id()+".txt");
            if(!FollowerInfo.open(QIODevice::WriteOnly|QIODevice::Text))
            {
                std::cerr << "Cannot open file for writing" << std::endl;
            }
            QTextStream out(&FollowerInfo);
            for(int i=0;i<p->get_focus_list().size();i++)
            out<<p->get_focus_list()[i]<<endl;
            FollowerInfo.close();

        }
    }
    }
    else
    {
        QMessageBox Fail(QMessageBox::NoIcon, "失败", "请选择关注者");
        QPushButton *btn_sure = Fail.addButton("确定", QMessageBox::AcceptRole);
        Fail.exec();
    }
}

void FollowerInfo::on_listWidget_activated(const QModelIndex &index)
{
    QString s=ui->listWidget->item(index.row())->text();
    if(!(p->get_focus_list().contains(s)))
        {
        ui->pushButton_9->setText("关注");
    }
    else
    {
         ui->pushButton_9->setText("取消关注");
    }
}
