#ifndef PAGE3COMP_H
#define PAGE3COMP_H

#include <QMainWindow>

namespace Ui {
class page3comp;
}

class page3comp : public QMainWindow
{
    Q_OBJECT

public:
    explicit page3comp(QWidget *parent = nullptr);
    ~page3comp();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
private:
    Ui::page3comp *ui;
};

#endif // PAGE3COMP_H
