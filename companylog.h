#ifndef COMPANYLOG_H
#define COMPANYLOG_H

#include <QMainWindow>

namespace Ui {
class companylog;
}

class companylog : public QMainWindow
{
    Q_OBJECT

public:
    explicit companylog(QWidget *parent = nullptr);
    ~companylog();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
private:
    Ui::companylog *ui;
};

#endif // COMPANYLOG_H
