#include "companynetwork.h"
#include "ui_companynetwork.h"

#include "companyjob.h"
#include "messagecomp.h"
#include "homecomp.h"

companynetwork::companynetwork(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::companynetwork)
{
    ui->setupUi(this);
    ui->linkedin->setStyleSheet("image: url(:/new/prefix1/linkde.png);");
    ui->search->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("image: url(:/new/prefix1/icons8-home-96.png);border: 0px;");
    ui->pushButton_2->setStyleSheet("background-color: rgb(230, 230, 230);image: url(:/new/prefix1/icons8-glyph-96.png);border: 0px;");
    ui->pushButton_3->setStyleSheet("image: url(:/new/prefix1/icons8-job-90.png);border: 0px;");
    ui->pushButton_4->setStyleSheet("image: url(:/new/prefix1/icons8-message-100.png);border: 0px;");
    ui->pushButton_5->setStyleSheet("image: url(:/new/prefix1/icons8-male-user-100.png);border: 0px;");
    ui->infoBox->hide();
    ui->label_2->setStyleSheet("background-color: rgb(230, 230, 230);");
}

companynetwork::~companynetwork()
{
    delete ui;
}

void companynetwork::on_pushButton_3_clicked()
{
    this->close();
    companyjob *job = new companyjob;
    job->showMaximized();
}


void companynetwork::on_pushButton_4_clicked()
{
    this->close();
    messagecomp *mesg = new messagecomp;
    mesg->showMaximized();

}

void companynetwork::on_pushButton_clicked()
{
    this->close();
    homecomp *Home = new homecomp;
    Home->showMaximized();
}
