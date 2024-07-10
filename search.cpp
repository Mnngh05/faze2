#include "search.h"
#include "ui_search.h"
#include "home.h"
#include "homecomp.h"
#include "page2.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "page1.h"

search::search(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();

    ui->searchline->setStyleSheet("image: url(:/new/prefix1/icons8-search-100.png);");
    ui->groupBox->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->searchBox->setStyleSheet("background-color: rgba(183, 216, 217, 176);");
    ui->pushButton->setStyleSheet("image: url(:/new/prefix1/icons8-back-50.png);border: 0px;");
    ui->searchText->setText(result);
    ui->searchText->setEnabled(false);
    QSqlQuery q;
    q.exec("SELECT id , name FROM user WHERE name LIKE '%"+result+"%'");
    QSqlQueryModel *qm = new QSqlQueryModel;
    qm->setQuery(q);
    ui->tableView->setModel(qm);
    ui->tableView->maximumSize();
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_clicked()
{
    if(isUser == true)
    {
        this->close();
        home *h = new home;
        h->showMaximized();
    }
    else
    {
        this->close();
        homecomp *hc = new homecomp;
        hc->showMaximized();
    }

}

