#ifndef RUNGE_H
#define RUNGE_H

#include <QMainWindow>

namespace Ui {
class runge;
}

class runge : public QMainWindow
{
    Q_OBJECT

public:
    explicit runge(QWidget *parent = 0);
    ~runge();
    double P(double x);
    double Q(double y);
    double xinit,yinit,x,h,f1,f2;
private:
    Ui::runge *ui;
public slots:
    void Procesar();
    void Reinicio();

};

#endif // RUNGE_H
