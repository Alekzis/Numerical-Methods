#ifndef SISTEMA_H
#define SISTEMA_H

//Classes of all methods are included



#include <QMainWindow>
#include "punto.h"
#include "diferenciacion.h"
#include "integracion.h"
#include "euler.h"
#include "regresion.h"
#include "regmult.h"
#include "gauss.h"
#include "eligau.h"
#include "newton.h"
#include "lagrange.h"
#include "runge.h"

namespace Ui {
class sistema;
}

class sistema : public QMainWindow
{
    Q_OBJECT

    //called of each method and its class


public:
    explicit sistema(QWidget *parent = 0);
    ~sistema();
    punto * Punto;
    regmult*Regmult;
    newton*Newton;
    lagrange*Lagrange;
    Euler*euler;
    regresion*Regresion;
    eligau* Eligau;
    integracion *Integracion;
    diferenciacion *Diferenciacion;
    gauss *Gauss;
    runge * Runge;


private:
    Ui::sistema *ui;

    //Declaration of button variables

public slots:
    void eu();
    void dif();
    void rem();
    void reg();
    void lag();
    void newt();
    void eli();
    void gau();
    void inte();
    void punt();
    void Salir();
    void rug();
};

#endif // SISTEMA_H
