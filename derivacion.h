#ifndef DERIVACION_H
#define DERIVACION_H

#include <QMainWindow>

namespace Ui {
class derivacion;
}

class derivacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit derivacion(QWidget *parent = 0);
    ~derivacion();
private slots://se crean las funciones que se utilizaran en el programa
              //the functions they use in the program are created
    void calcular();
    void borrar();
private:
    Ui::derivacion *ui;
};

#endif // DERIVACION_H
