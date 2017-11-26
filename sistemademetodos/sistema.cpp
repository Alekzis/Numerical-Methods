#include "sistema.h"
#include "ui_sistema.h"

sistema::sistema(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sistema)
{
    //equalization of each method with the function of its corresponding class



    ui->setupUi(this);
   Regmult = new regmult();
   Punto = new punto();
   Newton = new newton();
   Lagrange = new lagrange();
   euler = new Euler();
   Regresion = new regresion();
   Eligau = new eligau();
   Integracion = new integracion();
   Diferenciacion = new diferenciacion();
   Gauss = new gauss();
   Runge = new runge();


//button connection

    connect(ui->dif,SIGNAL(clicked()),this,SLOT(dif()));
    connect(ui->newt,SIGNAL(clicked()),this,SLOT(newt()));
    connect(ui->reg,SIGNAL(clicked()),this,SLOT(reg()));
    connect(ui->rem,SIGNAL(clicked()),this,SLOT(rem()));
    connect(ui->lag,SIGNAL(clicked()),this,SLOT(lag()));
    connect(ui->gau,SIGNAL(clicked()),this,SLOT(gau()));
    connect(ui->eli,SIGNAL(clicked()),this,SLOT(eli()));
    connect(ui->eu,SIGNAL(clicked()),this,SLOT(eu()));
    connect(ui->punt,SIGNAL(clicked()),this,SLOT(punt()));
    connect(ui->inte,SIGNAL(clicked()),this,SLOT(inte()));
    connect(ui->rug,SIGNAL(clicked()),this,SLOT(rug()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

sistema::~sistema()
{
    delete ui;
}

//the methods are shown when calling from the button


void sistema::dif(){
    Diferenciacion->show();
}

void sistema::newt(){
    Newton->show();
}

void sistema::reg(){
    Regresion->show();
}
void sistema::rem(){
    Regmult->show();
}
void sistema::eu(){
    euler->show();
}
void sistema::eli(){
    Eligau->show();
}
void sistema::inte(){
    Integracion->show();
}
void sistema::lag(){
    Lagrange->show();
}
void sistema::punt(){
    Punto->show();
}
void sistema::gau(){
    Gauss->show();
}
void sistema::rug(){
    Runge->show();
}

//the methods are closed when you press the exit button

void sistema::Salir(){
    delete Diferenciacion;
    delete Newton;
    delete Integracion;
    delete Gauss;
    delete Eligau;
    delete Regresion;
    delete Regmult;
    delete Punto;
    delete Lagrange;
    delete euler;
    delete Runge;
    close();
}

