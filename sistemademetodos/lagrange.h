#ifndef LAGRANGE_H
#define LAGRANGE_H

#include <QMainWindow>

namespace Ui {
class lagrange;
}

class lagrange : public QMainWindow
{
    Q_OBJECT

public:
    explicit lagrange(QWidget *parent = 0);
    ~lagrange();
    double x[5];//array for x's rows
    double fx[5];//array for y's rows


private:
    Ui::lagrange *ui;

public slots:
    void ejecutar();
    void borrar();

};
#endif // LAGRANGE_H
