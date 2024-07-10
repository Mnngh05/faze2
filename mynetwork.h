#ifndef MYNETWORK_H
#define MYNETWORK_H

#include <QMainWindow>

namespace Ui {
class myNetwork;
}

class myNetwork : public QMainWindow
{
    Q_OBJECT

public:
    explicit myNetwork(QWidget *parent = nullptr);
    ~myNetwork();

private:
    Ui::myNetwork *ui;
};

#endif // MYNETWORK_H
