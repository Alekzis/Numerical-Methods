#ifndef NEWTON_H
#define NEWTON_H

#include <QMainWindow>

namespace Ui {
class newton;
}

class newton : public QMainWindow
{
    Q_OBJECT

public:
    explicit newton(QWidget *parent = 0);
    ~newton();
    double funcion0(double c);//function without deriving
    double funciond1(double c);//first derivative
    double funciond2(double c);//second derivative


private:
    Ui::newton *ui;
public slots:

    void procesar();//process function
    void borrar();//erase function

};

#endif // NEWTON_H
