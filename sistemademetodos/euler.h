#ifndef EULER_H
#define EULER_H

#include <QMainWindow>

namespace Ui {
class Euler;
}

class Euler : public QMainWindow
{
    Q_OBJECT

public:
    explicit Euler(QWidget *parent = 0);
    ~Euler();
    //declaration of variables
    double P(double x);
    double Q(double y);
    double xinit,yinit,x;
private:
    Ui::Euler *ui;
    //statement of slots
public slots:
    void Procesar();
    void Reinicio();
};

#endif // EULER_H

