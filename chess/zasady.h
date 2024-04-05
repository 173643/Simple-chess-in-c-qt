#ifndef ZASADY_H
#define ZASADY_H

#include "szachy.h"
#include "akcje.h"

class zasady: public QMainWindow
{
public:
    zasady();
    static bool sprawdz_biale(int indeks, int gdzie);
    static bool sprawdz_czarne(int indeks, int gdzie);

    static bool szach_b(std::vector<int> wektor);
    static bool szach_c(std::vector<int> wektor);

    static void pat_mat(bool strona);

    static void czy_biale(void);
    static void czy_czarne(void);

    static void pionek2(bool kolei, int wybor);
    static void wieza2(bool kolei, int wybor);
    static void kon2(bool kolei, int wybor);
    static void laufer2(bool kolei, int wybor);
    static void dama2(bool kolei, int wybor);
    static void krol2(bool kolei, int wybor);

    static std::vector<int> wektor;

    static int licznik;
    static int koniec;

};

#endif // ZASADY_H
