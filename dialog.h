#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "page2.h"
#include "page1.h"
#include "page4.h"
#include <QComboBox>
#include "QMessageBox"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr,page2 *page2 = nullptr);
    ~Dialog();
private slots:
    void on_pushButton_clicked();

    void on_signOutPushButton_clicked();
private:
    Ui::Dialog *ui;
    page2 *page2;
};

#endif // DIALOG_H
