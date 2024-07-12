#include "addjob.h"
#include "ui_addjob.h"
#include <QMessageBox>
#include "companysign.h"
#include <QDateTime>
#include "companyjob.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

addJob::addJob(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addJob)
{
    ui->setupUi(this);


    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();

    QStringList workplaceType = (QStringList()
                        <<"On site"
                        <<"Remote"
                        <<"Hybrid");
    ui->workpalce->addItems(workplaceType);

    QStringList jobTyp = (QStringList()
                        <<"Full-time"
                        <<"Part-time"
                        <<"Contract"
                        <<"Temporary"
                         <<"Other"
                         <<"Volunteer"
                         <<"Internship");
     ui->jobType->addItems(jobTyp);
}

addJob::~addJob()
{
    delete ui;
}

void addJob::on_pushButton_clicked()
{
    QSqlQuery q;
    QString title, loc, company, workplaceT, jobT , id;
    QDateTime currentTime = QDateTime::currentDateTime();
//    int now = currentTime.currentDateTime();
    id = globalCampId;
    title = ui->title->text();
    loc = ui->loc->text();
    company = ui->company->text();
    workplaceT = ui->workpalce->currentText();
    jobT = ui->jobType->currentText();
    q.exec("INSERT INTO company(id, title , location , company, workplaceType, jobType , time1)VALUES('"+id+"','"+title+"' , '"+loc+"' , '"+company+"', '"+workplaceT+"', '"+jobT+"', datetime('now'))");
    //q.exec("INSERT INTO company SET title = '"+title+"',location = '"+loc+"',company = '"+company+"',workplaceType = '"+workplaceT+"',jobType = '"+jobT+"',time1 = datetime('now') WHERE id = '"+id+"'");
    QMessageBox::information(this,"Successful","Information completion was successful");
    companyjob *s = new companyjob;
    s->close();
    companyjob *r = new companyjob;
    r->showMaximized();
    this->close();

}

