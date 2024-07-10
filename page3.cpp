#include "page3.h"
#include "ui_page3.h"
#include "page4.h"
#include "page1.h"
#include "homecomp.h"

#include "QMessageBox"
#include "dialog.h"
int n;
page3::page3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3)
{
    ui->setupUi(this);
    ui->pushButton->hide();
   n = rand()%9000 +1000;

}

page3::~page3()
{
    delete ui;
}

void page3::on_pushButton_clicked()
{

    if( QString::number(n) == ui->lineEdit->text()){
            page4 *w4 = new page4;
            this->close();
            w4->show();
            w4->setWindowTitle("Complete");

    }
    else
        QMessageBox::warning(this,"wrong","wrong input!","try again");
}


void page3::on_pushButton_2_clicked()
{
       QMessageBox::information(this,"code",QString::number(n));
       ui->pushButton->show();
}

