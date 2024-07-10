#include "companyjob.h"
#include "ui_companyjob.h"
#include "homecomp.h"
#include "companynetwork.h"
#include "messagecomp.h"
companyjob::companyjob(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::companyjob)
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

}

companyjob::~companyjob()
{
    delete ui;
}

void companyjob::on_pushButton_4_clicked()
{
    this->close();
    messagecomp *mesg = new messagecomp;
    mesg->showMaximized();

}

void companyjob::on_pushButton_2_clicked()
{
    this->close();
    companynetwork *net = new companynetwork;
    net->showMaximized();

}

void companyjob::on_pushButton_clicked()
{
    this->close();
    homecomp *Home = new homecomp;
    Home->showMaximized();
}
