#ifndef SZACHY_H
#define SZACHY_H

#include <QMainWindow>
#include <QMouseEvent>
#include <iostream>
#include <vector>
#include "figury.h"
#include "akcje.h"
#include "zasady.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Szachy;
}
QT_END_NAMESPACE

class Szachy : public QMainWindow
{
    Q_OBJECT

public:
    Szachy(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void rysujPlansze(void);
    void rysujFigury(void);
    void rysujZaznacz(void);

    void mousePressEvent(QMouseEvent *event);


    void wieza(bool kolor, int Posx, int Posy);
    void kon(bool kolor, int Posx, int Posy);
    void laufer(bool kolor, int Posx, int Posy);
    void dama(bool kolor, int Posx, int Posy);
    void krol(bool kolor, int Posx, int Posy);
    void pionek(bool kolor, int Posx, int Posy);

    void lista(void);
    void pionek_dotarl(void);
    void ustaw_za_pionek(int co);

    void rezultat(void);

    static std::vector<int> tablica;
    static std::vector<int> zbite;
    static bool kolei;
    //static bool szach;
    static bool koniec;
    static int wybor;
    bool wlacz_liste=false;
    int wybrana_figure=0;

    ~Szachy();

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();

private:
    Ui::Szachy *ui;
};
#endif // SZACHY_H
