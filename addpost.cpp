#include "addpost.h"
#include "ui_addpost.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "page2.h"
int ra;
addPost::addPost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addPost)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();

    ui->setupUi(this);
    ui->labelProf->setStyleSheet("image: url(:/new/prefix1/icons8-male-user-100.png);");
    ui->labelName->setText(globalId);



}

addPost::~addPost()
{
    delete ui;
}

void addPost::on_pushButton_clicked()
{
    QString r = QString::number(ra);
    QSqlQuery q;
    QString cap;
    cap = ui->lineEdit->text();
    q.exec("INSERT INTO post(caption,id,postId)VALUES('"+cap+"', '"+globalId+"', '"+r+"')");

    ra= ra+1;
    this->close();
}

