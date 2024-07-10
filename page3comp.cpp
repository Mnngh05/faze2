#include "page3comp.h"
#include "ui_page3comp.h"
#include "QMessageBox"
#include "homecomp.h"
int no;
page3comp::page3comp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3comp)
{
    ui->setupUi(this);

    ui->pushButton->hide();
   no = rand()%9000 +1000;
}

page3comp::~page3comp()
{
    delete ui;
}

void page3comp::on_pushButton_clicked()
{

    if( QString::number(no) == ui->lineEdit->text()){
            homecomp *w4 = new homecomp;
            this->close();
            w4->show();

    }
    else
        QMessageBox::warning(this,"wrong","wrong input!","try again");
}


void page3comp::on_pushButton_2_clicked()
{
       QMessageBox::information(this,"code",QString::number(no));
       ui->pushButton->show();
}
