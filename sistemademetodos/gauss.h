#ifndef GAUSS_H
#define GAUSS_H

#include <QMainWindow>

namespace Ui {
class gauss;
}

class gauss : public QMainWindow
{
    Q_OBJECT

public:
    explicit gauss(QWidget *parent = 0);
    ~gauss();

private:
    Ui::gauss *ui;
public slots:
    void ejecutar();//slot to execute
    void borrar();//slot to clean

};
#endif // GAUSS_H
