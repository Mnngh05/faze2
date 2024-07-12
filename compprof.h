#ifndef COMPPROF_H
#define COMPPROF_H

#include <QMainWindow>

namespace Ui {
class compprof;
}

class compprof : public QMainWindow
{
    Q_OBJECT

public:
    explicit compprof(QWidget *parent = nullptr);
    ~compprof();

private slots:


private:
    Ui::compprof *ui;
};

#endif // COMPPROF_H
