#ifndef COMPANYNETWORK_H
#define COMPANYNETWORK_H

#include <QMainWindow>

namespace Ui {
class companynetwork;
}

class companynetwork : public QMainWindow
{
    Q_OBJECT

public:
    explicit companynetwork(QWidget *parent = nullptr);
    ~companynetwork();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();
private:
    Ui::companynetwork *ui;
};

#endif // COMPANYNETWORK_H
