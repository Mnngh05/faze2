#include "jobs.h"
#include "ui_jobs.h"
#include "messages.h"
#include "network.h"
#include "home.h"
#include "page2.h"
#include "page4.h"
#include "userprof.h"
#include "search.h"
#include "page1.h"

jobs::jobs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jobs)
{
    ui->setupUi(this);

    ui->linkedin->setStyleSheet("image: url(:/new/prefix1/linkde.png);");
    ui->search->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("image: url(:/new/prefix1/icons8-home-96.png);border: 0px;");
    ui->pushButton_2->setStyleSheet("image: url(:/new/prefix1/icons8-glyph-96.png);border: 0px;");
    ui->pushButton_3->setStyleSheet("background-color: rgb(230, 230, 230);image: url(:/new/prefix1/icons8-job-90.png);border: 0px;");
    ui->pushButton_4->setStyleSheet("image: url(:/new/prefix1/icons8-message-100.png);border: 0px;");
    ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/icons8-male-user-100.png);border: 0px;");
    ui->infoBox->hide();
    ui->label_4->setStyleSheet("background-color: rgb(230, 230, 230);");

//    ui->nameLable->setText(globalName);
//    ui->expertiseLable->setText(expert);
//    ui->countryLable->setText(locat);
}

jobs::~jobs()
{
    delete ui;
}

void jobs::on_pushButton_4_clicked()
{
    this->close();
    messages *mesg = new messages;
    mesg->showMaximized();

}

void jobs::on_pushButton_2_clicked()
{
    this->close();
    network *net = new network;
    net->showMaximized();

}

void jobs::on_pushButton_clicked()
{
    this->close();
    home *Home = new home;
    Home->showMaximized();
}

void jobs::on_pushButton_5_clicked()
{
    this->close();
    userprof *p = new userprof;
    p->showMaximized();
}

void jobs::on_searchText_returnPressed()
{
    result = ui->searchText->text();
    isUser = true;
    this->close();
    search *ser = new search;
    ser->show();
}
