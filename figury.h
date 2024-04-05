#ifndef FIGURY_H
#define FIGURY_H

#include <QMainWindow>
#include <QPainter>
#include <QPainterPath>
#include <vector>
#include "szachy.h"

class Figury: public QMainWindow
{
public:
    Figury();

    void wieza(bool kolei, int wybor);
    void kon(bool kolei, int wybor);
    void laufer(bool kolei, int wybor);
    void dama(bool kolei, int wybor);
    void krol(bool kolei, int wybor);
    void pionek(bool kolei, int wybor);

    void wyzeruj();
    void coijak();

    static std::vector<int> atak;
};

#endif // FIGURY_H
