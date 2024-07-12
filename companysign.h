#ifndef COMPANYSIGN_H
#define COMPANYSIGN_H

#include <QMainWindow>
extern QString globalCampId;
namespace Ui {
class companySign;
}

class companySign : public QMainWindow
{
    Q_OBJECT

public:
    explicit companySign(QWidget *parent = nullptr);
    ~companySign();
private slots:
      void on_pushButton_clicked();
      void on_enterNumLineEdit_textEdited(const QString &arg1);
      void on_logpushButton_clicked();

      void on_pushButton_3_clicked();

      void on_pushButton_2_clicked();

private:
    Ui::companySign *ui;
};

#endif // COMPANYSIGN_H
