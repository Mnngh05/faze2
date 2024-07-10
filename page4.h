#ifndef PAGE4_H
#define PAGE4_H

#include <QMainWindow>
extern QString expert;
extern QString locat;
extern QString phone;
namespace Ui {
class page4;
}

class page4 : public QMainWindow
{
    Q_OBJECT
    friend class Dialog;

public:
    explicit page4(QWidget *parent = nullptr);
    ~page4();

private slots:
    void on_pushButton_clicked();

    void on_signOutPushButton_clicked();

private:
    Ui::page4 *ui;

};

#endif // PAGE4_H
