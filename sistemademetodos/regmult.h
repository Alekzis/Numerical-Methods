#ifndef REGMULT_H
#define REGMULT_H

#include <QMainWindow>

namespace Ui {
class regmult;
}

class regmult : public QMainWindow
{
    Q_OBJECT

public:
    explicit regmult(QWidget *parent = 0);
    ~regmult();

private:
    Ui::regmult *ui;
public slots:
void procesar();
void reinicio();
};
#endif // REGMULT_H
