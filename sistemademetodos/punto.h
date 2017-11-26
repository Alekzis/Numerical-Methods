#ifndef PUNTO_H
#define PUNTO_H

#include <QMainWindow>

namespace Ui {
class punto;
}

class punto : public QMainWindow
{
    Q_OBJECT

public:
    explicit punto(QWidget *parent = 0);
    ~punto();
    double funcion(double c);  //Function that returns the drag function of a parachute//

private:
        Ui::punto *ui;

    public slots:
        void operacion(); //Slot that performs the bisection method
         void borrar(); //Slot that erases the contents of the spinbox and text
        };
#endif // PUNTO_H
