#include "companysign.h"
#include "ui_companysign.h"
#include "companylog.h"
#include "page2.h"
#include "QMessageBox"
#include "page3comp.h"
#include "page1.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
int num;
//QString globalName;

companySign::companySign(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::companySign)
{
    ui->setupUi(this);
    isUser = false;
    ui->passlineEdit->setEchoMode(QLineEdit::Password);
    ui->logpushButton->setStyleSheet("font: 12pt 'MS Shell Dlg 2';color: rgb(255, 255, 255);background-color: rgb(6, 155, 255);");
    ui->pushButton_2->setEnabled(false);
    num = rand()%9000 +1000;
    ui->randlineEdit->setText(QString::number(num));
    ui->randlineEdit->setEnabled(false);
    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/icons8-refresh-48.png);");
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\info.db");
    database.open();
}

companySign::~companySign()
{
    delete ui;
}

void companySign::on_pushButton_clicked()
{
     num = rand()%9000 +1000;
     ui->randlineEdit->setText(QString::number(num));
     ui->randlineEdit->setEnabled(false);
}


void companySign::on_enterNumLineEdit_textEdited(const QString &arg1)
{
     ui->pushButton_2->setEnabled(true);
     ui->pushButton_2->setStyleSheet("font: 12pt 'MS Shell Dlg 2';color: rgb(255, 255, 255);background-color: rgb(6, 155, 255);");
}

void companySign::on_logpushButton_clicked()
{
    companylog *w5 = new companylog;
    w5->show();
    w5->setWindowTitle("Login");
    this->close();
}
void companySign::on_pushButton_3_clicked()
{

    this->close();
    page2 *w2 = new page2;
    w2->show();

}


void companySign::on_pushButton_2_clicked()
{
    QSqlQuery q;
    QString name,pass,id,loc, phone;
    id = ui->idlineEdit->text();
    name = ui->namelineEdit->text();
    pass = ui->passlineEdit->text();
    loc = ui->loclineEdit->text();
    phone = ui->phonelineEdit->text();
    globalId = id;
    q.exec("SELECT id FROM user WHERE id = '"+id+"'");
    bool isEmptyPass = true;
    bool isEmptyId = true;
    bool isEmptyName = true;
    bool isEmptyLoc = true;
    bool isEmptyphone = true;
    for (int i = 0; i < phone.length();i++ ) {
        if(name[i] != ' '){
            isEmptyphone = false;
            break;
        }
    }
    for (int i = 0; i < loc.length();i++ ) {
        if(name[i] != ' '){
            isEmptyLoc = false;
            break;
        }
    }
    for (int i = 0; i < name.length();i++ ) {
        if(name[i] != ' '){
            isEmptyName = false;
            break;
        }
    }
    for (int i = 0; i < id.length();i++ ) {
        if(id[i] != ' '){
            isEmptyId = false;
            break;
        }
    }
    for (int i = 0; i < pass.length();i++ ) {
        if(name[i] != ' '){
            isEmptyPass = false;
            break;
        }
    }
    if(ui->randlineEdit->text() != ui->enterNumLineEdit->text()) {
            QMessageBox::warning(this,"Incorrect", "Please enter the correct number","Try again");
        }
    else if(q.first()){
        QMessageBox::warning(this,"Invalid", "Please enter another name");
    }
    else if(isEmptyphone){
        QMessageBox::warning(this,"Null input", "Please enter your phone");
    }
    else if(isEmptyName){
        QMessageBox::warning(this,"Null input", "Please enter your name");
    }
    else if(isEmptyLoc){
        QMessageBox::warning(this,"Null input", "Please enter your loction");
    }
    else if(isEmptyPass){
        QMessageBox::warning(this,"Null input", "Please enter your password");
    }
    else if(isEmptyId){
        QMessageBox::warning(this,"Null input", "Please enter your id");
    }
    else if( ui->randlineEdit->text() == ui->enterNumLineEdit->text())
    {
        q.exec("INSERT INTO company(phone, companyName , pass , id , location)VALUES('"+phone+"', '"+name+"' , '"+pass+"' , '"+id+"', '"+loc+"')");

        page3comp *w3 = new page3comp;
        w3->show();
        this->close();

    }

    else
        QMessageBox::warning(this,"Invalid", "Please enter valid information");
}

