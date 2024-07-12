#include "home.h"
#include "ui_home.h"
#include "jobs.h"
#include "messages.h"
#include "network.h"
#include "page2.h"
#include "page4.h"
#include <QMouseEvent>
#include "search.h"
#include "userprof.h"
#include "addpost.h"

QString result;
bool isUser;
home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);

    ui->linkedin->setStyleSheet("image: url(:/new/prefix1/linkde.png);");
    ui->search->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("background-color: rgb(230, 230, 230);image: url(:/new/prefix1/icons8-home-96.png);border: 0px;");
    ui->pushButton_2->setStyleSheet("image: url(:/new/prefix1/icons8-glyph-96.png);border: 0px;");
    ui->pushButton_3->setStyleSheet("image: url(:/new/prefix1/icons8-job-90.png);border: 0px;");
    ui->pushButton_4->setStyleSheet("image: url(:/new/prefix1/icons8-message-100.png);border: 0px;");
    ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/icons8-male-user-100.png);border: 0px;");
    ui->label->setStyleSheet("background-color: rgb(230, 230, 230);");
    ui->pict->setStyleSheet("image: url(:/new/prefix1/img-GDjVceTrFFVOkwzEICxl3.jpeg);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/new/prefix1/icons8-male-user-50.png);");

    QLabel *label1 = new QLabel("<hr>Hi <br><br> I am Joy <br> Im a programing <br> please send to me posts about it   <br><br> thanks <br> bye<hr>");
    QLabel *label2 = new QLabel("<hr>hello guys <br><br> who can help me? <br> Im a fullstack <br> if you can help me <br> please send message to me <br><br> tnx <br> !<hr>");
    QLabel *label3 = new QLabel("<hr>im a developer <br><br> i search for finf a job <br> who can help me? <br><br><br><br> i cant find a good joooob<hr>");
    QLabel *label4 = new QLabel("<hr>who want come to make a security and hacking group? <br><hr>");
    QLabel *label = new QLabel("<br><br><br><br><br><br><br>");

    label1->setFixedWidth(561);
    label2->setFixedWidth(561);
    label3->setFixedWidth(561);
    label4->setFixedWidth(561);

    ui->pushButton_7->setText("start a post");
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label1);
    layout->addWidget(label);
    layout->addWidget(label2);
    layout->addWidget(label);
    layout->addWidget(label3);
    layout->addWidget(label);
    layout->addWidget(label4);
    layout->addWidget(label);


    QWidget *widget = new QWidget;
    widget->setLayout(layout);

    ui->scrollcontents->setWidget(widget);
}

home::~home()
{
    delete ui;
}

void home::on_pushButton_2_clicked()
{
    network *net = new network;
    net->showMaximized();
    this->close();


}


void home::on_pushButton_3_clicked()
{
    this->close();
    jobs *job = new jobs;
    job->showMaximized();
}


void home::on_pushButton_4_clicked()
{
    this->close();
    messages *mesg = new messages;
    mesg->showMaximized();

}



void home::on_searchText_returnPressed()
{
    result = ui->searchText->text();
    isUser = true;
    this->close();
    search *ser = new search;
    ser->show();
}


void home::on_pushButton_5_clicked()
{
    this->close();
    userprof *p = new userprof;
    p->showMaximized();
}


void home::on_pushButton_7_clicked()
{
    addPost *POST = new addPost;
    POST->show();
}

