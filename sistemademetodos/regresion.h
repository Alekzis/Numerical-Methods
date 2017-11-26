#ifndef REGRESION_H
#define REGRESION_H

#include <QMainWindow>
namespace Ui {
class regresion;
}

class regresion : public QMainWindow
{
    Q_OBJECT

public:
    explicit regresion(QWidget *parent = 0);
    ~regresion();
    double x[7];//X's column
    double y[7];//Y's column

private:
    Ui::regresion *ui;

   public slots:
    void ejecutar();//declarates execute slot
    void borrar();//declaraes clean slot
};

#endif // REGRESION_H
