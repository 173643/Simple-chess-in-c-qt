#ifndef AKCJE_H
#define AKCJE_H

#include "szachy.h"

class akcje: public QMainWindow
{
public:
    akcje();

    bool szach_bialy(std::vector<int> wektor);
    bool szach_czarny(std::vector<int> wektor);

    static void uzupelnij_biale(void);
    static void uzupelnij_czarne(void);


    static void pionek(bool strona, int wybor);
    static void wieza(bool strona, int wybor);
    static void kon(bool strona, int wybor);
    static void laufer(bool strona, int wybor);
    static void dama(bool strona, int wybor);
    static void krol(bool strona, int wybor);

    //   bool szach = false;
    static std::vector<int> atak_bialy;
    static std::vector<int> atak_czarny;
};

#endif // AKCJE_H
