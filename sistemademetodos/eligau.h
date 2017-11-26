#ifndef ELIGAU_H
#define ELIGAU_H


#include <QMainWindow>

namespace Ui {
class eligau;
}

class eligau: public QMainWindow
{
    Q_OBJECT

public:
    explicit eligau(QWidget *parent = 0);
    ~eligau();

private:
    Ui::eligau *ui;
public slots:
    void ejecutar();//slot to execute
    void borrar();//slot to clean

};
#endif // ELIGAU_H
