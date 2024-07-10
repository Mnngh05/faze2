#ifndef HOMECOMP_H
#define HOMECOMP_H

#include <QMainWindow>

namespace Ui {
class homecomp;
}

class homecomp : public QMainWindow
{
    Q_OBJECT

public:
    explicit homecomp(QWidget *parent = nullptr);
    ~homecomp();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();
    void on_searchText_returnPressed();

private:
    Ui::homecomp *ui;
};

#endif // HOMECOMP_H
