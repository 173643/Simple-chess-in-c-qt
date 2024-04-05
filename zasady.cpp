#include "zasady.h"

zasady::zasady() {}


bool zasady::sprawdz_biale(int indeks, int gdzie)
{
    for(int i=0; i<64; i++){
        wektor[i] = Szachy::tablica[i];
    }
    int pom = wektor[indeks];
    wektor[indeks] = 0;
    wektor[gdzie] = pom;

    return !szach_b(wektor);
}

bool zasady::sprawdz_czarne(int indeks, int gdzie)
{
    for(int i=0; i<64; i++){
        wektor[i] = Szachy::tablica[i];
    }
    int pom = wektor[indeks];
    wektor[indeks] = 0;
    wektor[gdzie] = pom;

    return (!szach_c(wektor));
}


bool zasady::szach_b(std::vector<int> wektor)
{
    int indeks=-1;
    for(int i=63; i>=0; i--){
        if(wektor[i]==6){
            indeks=i;
            break;
        }
    }

    bool szach=0;
    //VVV
    for(int i=indeks+8; i<64; i=i+8){
        if(wektor[i]==8 || wektor[i]==11)
            szach=1;
        else if(wektor[i]!=0)
            break;
    }

    //^^^
    for(int i=indeks-8; i>=0; i-=8){
        if(wektor[i]==8 || wektor[i]==11)
            szach=1;
        else if(wektor[i]!=0)
            break;
    }

    //<<<
    if(indeks%8!=0)
        for(int i=indeks-1; i%8!=7; i--){
            if(wektor[i]==8 || wektor[i]==11)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //>>>
    if(indeks%8!=7)
        for(int i=indeks+1; i%8!=0; i++){
            if(wektor[i]==8 || wektor[i]==11)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }


    //<<<^^^
    if(indeks%8!=0 && indeks>7)
        for(int i=indeks-9; (i%8!=7 && i>=0); i=i-9){
            if(wektor[i]==10 || wektor[i]==11)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //^^^>>>
    if(indeks%8!=7 && indeks>7)
        for(int i=indeks-7; (i%8!=0 && i>0); i=i-7){
            if(wektor[i]==10 || wektor[i]==11)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }


    //<<<VVV
    if(indeks%8!=0 && indeks<56)
        for(int i=indeks+7; (i%8!=7 && i>=0); i=i+7){
            if(wektor[i]==10 || wektor[i]==11)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //VVV>>>
    if(indeks%8!=7 && indeks<56)
        for(int i=indeks+9; (i%8!=0 && i>0); i=i+9){
            if(wektor[i]==10 || wektor[i]==11)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //pionek lewo
    if(indeks%8!=0 && indeks>7 && wektor[indeks-9]==7)
        szach=1;

    //pionek prawo
    if(indeks%8!=7 && indeks>7 && wektor[indeks-7]==7)
        szach=1;

    //konik ^^^
    if(indeks%8!=7 && indeks<47 && wektor[indeks+17]==9)
        szach=1;

    if(indeks%8!=0 && indeks<48 && wektor[indeks+15]==9)
        szach=1;

    //konik vvv
    if(indeks%8!=7 && indeks>15 && wektor[indeks-15]==9)
        szach=1;

    if(indeks%8!=0 && indeks>16 && wektor[indeks-17]==9)
        szach=1;


    //konik <<<
    if(indeks%8>1 && indeks>7 && wektor[indeks-10]==9)
        szach=1;

    if(indeks%8>1 && indeks<56 && wektor[indeks+6]==9)
        szach=1;

    //konik >>>
    if(indeks%8<6 && indeks>7 && wektor[indeks-6]==9)
        szach=1;

    if(indeks%8<6 && indeks<56 && wektor[indeks+10]==9)
        szach=1;


    //krol ^^^
    if(indeks>7){
        if(wektor[indeks-8]==12)
            szach=1;
        if(indeks%8>0 && wektor[indeks-9]==12)
            szach=1;
        if(indeks%8<7 && wektor[indeks-7]==12)
            szach=1;
    }

    //krol vvv
    if(indeks<56){
        if(wektor[indeks+8]==12)
            szach=1;
        if(indeks%8>0 && wektor[indeks+7]==12)
            szach=1;
        if(indeks%8<7 && wektor[indeks+9]==12)
            szach=1;
    }

    //krol <<
    if(indeks%8>0 && wektor[indeks-1]==12)
        szach=1;

    //krol >>
    if(indeks%8<7 && wektor[indeks+1]==12)
        szach=1;



    return szach;

}

bool zasady::szach_c(std::vector<int> wektor)
{
    int indeks=-1;
    for(int i=63; i>=0; i--){
        if(wektor[i]==12){
            indeks=i;
            break;
        }
    }


    bool szach=0;
    //VVV
    for(int i=indeks+8; i<64; i=i+8){
        if(wektor[i]==2 || wektor[i]==5)
            szach=1;
        else if(wektor[i]!=0)
            break;
    }

    //^^^
    for(int i=indeks-8; i>=0; i-=8){
        if(wektor[i]==2 || wektor[i]==5)
            szach=1;
        else if(wektor[i]!=0)
            break;
    }

    //<<<
    if(indeks%8!=0)
        for(int i=indeks-1; i%8!=7; i--){
            if(wektor[i]==2 || wektor[i]==5)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //>>>
    if(indeks%8!=7)
        for(int i=indeks+1; i%8!=0; i++){
            if(wektor[i]==2 || wektor[i]==5)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }


    //<<<^^^
    if(indeks%8!=0 && indeks>7)
        for(int i=indeks-9; (i%8!=7 && i>=0); i=i-9){
            if(wektor[i]==4 || wektor[i]==5)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //^^^>>>
    if(indeks%8!=7 && indeks>7)
        for(int i=indeks-7; (i%8!=0 && i>0); i=i-7){
            if(wektor[i]==4 || wektor[i]==5)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }


    //<<<VVV
    if(indeks%8!=0 && indeks<56)
        for(int i=indeks+7; (i%8!=7 && i>=0); i=i+7){
            if(wektor[i]==4 || wektor[i]==5)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //VVV>>>
    if(indeks%8!=7 && indeks<56)
        for(int i=indeks+9; (i%8!=0 && i>0); i=i+9){
            if(wektor[i]==4 || wektor[i]==5)
                szach=1;
            else if(wektor[i]!=0)
                break;
        }

    //pionek lewo
    if(indeks%8!=0 && indeks<56 && wektor[indeks+7]==1)
        szach=1;

    //pionek prawo
    if(indeks%8!=7 && indeks<56 && wektor[indeks+9]==1)
        szach=1;

    //konik ^^^
    if(indeks%8!=7 && indeks<47 && wektor[indeks+17]==3)
        szach=1;

    if(indeks%8!=0 && indeks<48 && wektor[indeks+15]==3)
        szach=1;

    //konik vvv
    if(indeks%8!=7 && indeks>15 && wektor[indeks-15]==3)
        szach=1;

    if(indeks%8!=0 && indeks>16 && wektor[indeks-17]==3)
        szach=1;


    //konik <<<
    if(indeks%8>1 && indeks>7 && wektor[indeks-10]==3)
        szach=1;

    if(indeks%8>1 && indeks<56 && wektor[indeks+6]==3)
        szach=1;

    //konik >>>
    if(indeks%8<6 && indeks>7 && wektor[indeks-6]==3)
        szach=1;

    if(indeks%8<6 && indeks<56 && wektor[indeks+10]==3)
        szach=1;



    //krol ^^^
    if(indeks>7){
        if(wektor[indeks-8]==6)
            szach=1;
        if(indeks%8>0 && wektor[indeks-9]==6)
            szach=1;
        if(indeks%8<7 && wektor[indeks-7]==6)
            szach=1;
    }

    //krol vvv
    if(indeks<56){
        if(wektor[indeks+8]==6)
            szach=1;
        if(indeks%8>0 && wektor[indeks+7]==6)
            szach=1;
        if(indeks%8<7 && wektor[indeks+9]==6)
            szach=1;
    }

    //krol <<
    if(indeks%8>0 && wektor[indeks-1]==6)
        szach=1;

    //krol >>
    if(indeks%8<7 && wektor[indeks+1]==6)
        szach=1;




    return szach;
}


void zasady::pat_mat(bool strona)
{
    if(strona)
    {
        licznik=0;
        czy_biale();

        if(licznik>0)
            return;

        akcje akcyja;
        if(akcyja.szach_bialy(Szachy::tablica))
            koniec=2;

        Szachy::koniec=true;

    }
    else
    {
        licznik=0;
        czy_czarne();

        if(licznik>0)
            return;


        akcje akcyja;
        if(akcyja.szach_czarny(Szachy::tablica))
            koniec=1;

        Szachy::koniec=true;
    }
}


void zasady::czy_biale(void)
{
    for(int i=0; i<64; i++){
        if(licznik>0)
            break;
        if(Szachy::tablica[i]!=0 && Szachy::tablica[i]<7){
            switch(Szachy::tablica[i]){
            case 1:
                pionek2(0, i);
                break;
            case 2:
                wieza2(0, i);
                break;
            case 3:
                kon2(0, i);
                break;
            case 4:
                laufer2(0, i);
                break;
            case 5:
                dama2(0, i);
                break;
            case 6:
                krol2(0, i);
                break;
            }
        }
    }

}

void zasady::czy_czarne(void)
{
    for(int i=0; i<64; i++){
        if(licznik>0)
            break;
        if(Szachy::tablica[i]!=0 && Szachy::tablica[i]>6){
            switch(Szachy::tablica[i]){
            case 7:
                pionek2(1, i);
                break;
            case 8:
                wieza2(1, i);
                break;
            case 9:
                kon2(1, i);
                break;
            case 10:
                laufer2(1, i);
                break;
            case 11:
                dama2(1, i);
                break;
            case 12:
                krol2(1, i);
                break;
            }
        }
    }

}


void zasady::wieza2(bool kolei, int wybor)
{
    if(!kolei){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6)){
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor-8))
                licznik++;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]>6) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_biale(wybor, wybor-16))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor-16))
                    licznik++;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]>6) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_biale(wybor, wybor-24))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor-24))
                        licznik++;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]>6) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_biale(wybor, wybor-32))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor-32))
                            licznik++;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]>6) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_biale(wybor, wybor-40))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor-40))
                                licznik++;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]>6) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_biale(wybor, wybor-48))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor-48))
                                    licznik++;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]>6) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_biale(wybor, wybor-56))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor-56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6)){
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_biale(wybor, wybor+8))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor+8))
                licznik++;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]>6) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_biale(wybor, wybor+16))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor+16))
                    licznik++;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]>6) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_biale(wybor, wybor+24))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor+24))
                        licznik++;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]>6) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_biale(wybor, wybor+32))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor+32))
                            licznik++;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]>6) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_biale(wybor, wybor+40))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor+40))
                                licznik++;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]>6) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_biale(wybor, wybor+48))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor+48))
                                    licznik++;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]>6) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_biale(wybor, wybor+56))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor+56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6)){
            if(Szachy::tablica[wybor-1]==0 && zasady::sprawdz_biale(wybor, wybor-1))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor-1))
                licznik++;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]>6) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_biale(wybor, wybor-2))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor-2))
                    licznik++;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]>6) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_biale(wybor, wybor-3))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor-3))
                        licznik++;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]>6) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_biale(wybor, wybor-4))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor-4))
                            licznik++;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]>6) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_biale(wybor, wybor-5))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor-5))
                                licznik++;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_biale(wybor, wybor-6))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor-6))
                                    licznik++;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_biale(wybor, wybor-7))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor-7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6)){
            if(Szachy::tablica[wybor+1]==0 && zasady::sprawdz_biale(wybor, wybor+1))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor+1))
                licznik++;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]>6) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_biale(wybor, wybor+2))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor+2))
                    licznik++;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]>6) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_biale(wybor, wybor+3))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor+3))
                        licznik++;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]>6) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_biale(wybor, wybor+4))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor+4))
                            licznik++;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]>6) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_biale(wybor, wybor+5))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor+5))
                                licznik++;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_biale(wybor, wybor+6))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor+6))
                                    licznik++;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_biale(wybor, wybor+7))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor+7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }


    }
    else if(kolei){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7)){
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_czarne(wybor, wybor-8))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor-8))
                licznik++;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]<7) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_czarne(wybor, wybor-16))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor-16))
                    licznik++;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]<7) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_czarne(wybor, wybor-24))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor-24))
                        licznik++;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]<7) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_czarne(wybor, wybor-32))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor-32))
                            licznik++;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]<7) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_czarne(wybor, wybor-40))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor-40))
                                licznik++;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]<7) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_czarne(wybor, wybor-48))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor-48))
                                    licznik++;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]<7) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_czarne(wybor, wybor-56))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7)){
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_czarne(wybor, wybor+8))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor+8))
                licznik++;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]<7) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_czarne(wybor, wybor+16))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor+16))
                    licznik++;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]<7) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_czarne(wybor, wybor+24))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor+24))
                        licznik++;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]<7) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_czarne(wybor, wybor+32))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor+32))
                            licznik++;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]<7) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_czarne(wybor, wybor+40))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor+40))
                                licznik++;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]<7) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_czarne(wybor, wybor+48))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor+48))
                                    licznik++;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]<7) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_czarne(wybor, wybor+56))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7)){
            if(Szachy::tablica[wybor-1]==0 && zasady::sprawdz_czarne(wybor, wybor-1))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor-1))
                licznik++;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]<7) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_czarne(wybor, wybor-2))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor-2))
                    licznik++;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]<7) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_czarne(wybor, wybor-3))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor-3))
                        licznik++;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]<7) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_czarne(wybor, wybor-4))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor-4))
                            licznik++;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]<7) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_czarne(wybor, wybor-5))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor-5))
                                licznik++;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_czarne(wybor, wybor-6))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor-6))
                                    licznik++;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_czarne(wybor, wybor-7))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7)){
            if(Szachy::tablica[wybor+1]==0 && zasady::sprawdz_czarne(wybor, wybor+1))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor+1))
                licznik++;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]<7) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_czarne(wybor, wybor+2))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor+2))
                    licznik++;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]<7) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_czarne(wybor, wybor+3))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor+3))
                        licznik++;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]<7) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_czarne(wybor, wybor+4))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor+4))
                            licznik++;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]<7) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_czarne(wybor, wybor+5))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor+5))
                                licznik++;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_czarne(wybor, wybor+6))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor+6))
                                    licznik++;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_czarne(wybor, wybor+7))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

    }

}

void zasady::kon2(bool kolei, int wybor)
{
    if(!kolei){
        if(wybor>15){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor-17]==0 || Szachy::tablica[wybor-17]>6) && zasady::sprawdz_biale(wybor, wybor-17)){
                if(Szachy::tablica[wybor-17]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-17]>6)
                    licznik++;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor-15]==0 || Szachy::tablica[wybor-15]>6) && zasady::sprawdz_biale(wybor, wybor-15)){
                if(Szachy::tablica[wybor-15]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-15]>6)
                    licznik++;
            }
        }

        if(wybor<48){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor+15]==0 || Szachy::tablica[wybor+15]>6) && zasady::sprawdz_biale(wybor, wybor+15)){
                if(Szachy::tablica[wybor+15]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+15]>6)
                    licznik++;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor+17]==0 || Szachy::tablica[wybor+17]>6) && zasady::sprawdz_biale(wybor, wybor+17)){
                if(Szachy::tablica[wybor+17]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+17]>6)
                    licznik++;
            }
        }

        if(wybor%8>1){
            if(wybor>8 && (Szachy::tablica[wybor-10]==0 || Szachy::tablica[wybor-10]>6) && zasady::sprawdz_biale(wybor, wybor-10)){
                if(Szachy::tablica[wybor-10]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-10]>6)
                    licznik++;
            }

            if(wybor<56 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && zasady::sprawdz_biale(wybor, wybor+6)){
                if(Szachy::tablica[wybor+6]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+6]>6)
                    licznik++;
            }
        }

        if(wybor%8<6){
            if(wybor>8 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && zasady::sprawdz_biale(wybor, wybor-6)){
                if(Szachy::tablica[wybor-6]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-6]>6)
                    licznik++;
            }

            if(wybor<56 && (Szachy::tablica[wybor+10]==0 || Szachy::tablica[wybor+10]>6) && zasady::sprawdz_biale(wybor, wybor+10)){
                if(Szachy::tablica[wybor+10]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+10]>6)
                    licznik++;
            }
        }

    }
    else if(kolei){
        if(wybor>15){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor-17]==0 || Szachy::tablica[wybor-17]<7) && zasady::sprawdz_czarne(wybor, wybor-17)){
                if(Szachy::tablica[wybor-17]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-17]<7)
                    licznik++;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor-15]==0 || Szachy::tablica[wybor-15]<7) && zasady::sprawdz_czarne(wybor, wybor-15)){
                if(Szachy::tablica[wybor-15]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-15]<7)
                    licznik++;
            }
        }

        if(wybor<48){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor+15]==0 || Szachy::tablica[wybor+15]<7) && zasady::sprawdz_czarne(wybor, wybor+15)){
                if(Szachy::tablica[wybor+15]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+15]<7)
                    licznik++;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor+17]==0 || Szachy::tablica[wybor+17]<7) && zasady::sprawdz_czarne(wybor, wybor+17)){
                if(Szachy::tablica[wybor+17]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+17]<7)
                    licznik++;
            }
        }

        if(wybor%8>1){
            if(wybor>8 && (Szachy::tablica[wybor-10]==0 || Szachy::tablica[wybor-10]<7) && zasady::sprawdz_czarne(wybor, wybor-10)){
                if(Szachy::tablica[wybor-10]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-10]<7)
                    licznik++;
            }

            if(wybor<56 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && zasady::sprawdz_czarne(wybor, wybor+6)){
                if(Szachy::tablica[wybor+6]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+6]<7)
                    licznik++;
            }
        }

        if(wybor%8<6){
            if(wybor>8 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && zasady::sprawdz_czarne(wybor, wybor-6)){
                if(Szachy::tablica[wybor-6]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-6]<7)
                    licznik++;
            }

            if(wybor<56 && (Szachy::tablica[wybor+10]==0 || Szachy::tablica[wybor+10]<7) && zasady::sprawdz_czarne(wybor, wybor+10)){
                if(Szachy::tablica[wybor+10]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+10])
                    licznik++;
            }
        }

    }
}

void zasady::laufer2(bool kolei, int wybor)
{
    if(!kolei){
        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6)){
            if(Szachy::tablica[wybor-9]==0 && zasady::sprawdz_biale(wybor, wybor-9))
                licznik++;
            else if(Szachy::tablica[wybor-9]>6 && zasady::sprawdz_biale(wybor, wybor-9))
                licznik++;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]>6) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_biale(wybor, wybor-18))
                    licznik++;
                else if(Szachy::tablica[wybor-18]>6 && zasady::sprawdz_biale(wybor, wybor-18))
                    licznik++;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]>6)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_biale(wybor, wybor-27))
                        licznik++;
                    else if(Szachy::tablica[wybor-27]>6 && zasady::sprawdz_biale(wybor, wybor-27))
                        licznik++;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]>6)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_biale(wybor, wybor-36))
                            licznik++;
                        else if(Szachy::tablica[wybor-36]>6 && zasady::sprawdz_biale(wybor, wybor-36))
                            licznik++;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]>6)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_biale(wybor, wybor-45))
                                licznik++;
                            else if(Szachy::tablica[wybor-45]>6 && zasady::sprawdz_biale(wybor, wybor-45))
                                licznik++;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]>6)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_biale(wybor, wybor-54))
                                    licznik++;
                                else if(Szachy::tablica[wybor-54]>6 && zasady::sprawdz_biale(wybor, wybor-54))
                                    licznik++;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]>6)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_biale(wybor, wybor-63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-63]>6 && zasady::sprawdz_biale(wybor, wybor-63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6)){
            if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_biale(wybor, wybor-7))
                licznik++;
            else if(Szachy::tablica[wybor-7]>6 && zasady::sprawdz_biale(wybor, wybor-7))
                licznik++;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]>6)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_biale(wybor, wybor-14))
                    licznik++;
                else if(Szachy::tablica[wybor-14]>6 && zasady::sprawdz_biale(wybor, wybor-14))
                    licznik++;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]>6)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_biale(wybor, wybor-21))
                        licznik++;
                    else if(Szachy::tablica[wybor-21]>6 && zasady::sprawdz_biale(wybor, wybor-21))
                        licznik++;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]>6)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_biale(wybor, wybor-28))
                            licznik++;
                        else if(Szachy::tablica[wybor-28]>6 && zasady::sprawdz_biale(wybor, wybor-28))
                            licznik++;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]>6)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_biale(wybor, wybor-35))
                                licznik++;
                            else if(Szachy::tablica[wybor-35]>6 && zasady::sprawdz_biale(wybor, wybor-35))
                                licznik++;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]>6)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_biale(wybor, wybor-42))
                                    licznik++;
                                else if(Szachy::tablica[wybor-42]>6 && zasady::sprawdz_biale(wybor, wybor-42))
                                    licznik++;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]>6)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_biale(wybor, wybor-49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-49]>6 && zasady::sprawdz_biale(wybor, wybor-49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6)){
            if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_biale(wybor, wybor+7))
                licznik++;
            else if(Szachy::tablica[wybor+7]>6 && zasady::sprawdz_biale(wybor, wybor+7))
                licznik++;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]>6)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_biale(wybor, wybor+14))
                    licznik++;
                else if(Szachy::tablica[wybor+14]>6 && zasady::sprawdz_biale(wybor, wybor+14))
                    licznik++;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]>6)&& Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_biale(wybor, wybor+21))
                        licznik++;
                    else if(Szachy::tablica[wybor+21]>6 && zasady::sprawdz_biale(wybor, wybor+21))
                        licznik++;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]>6)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_biale(wybor, wybor+28))
                            licznik++;
                        else if(Szachy::tablica[wybor+28]>6 && zasady::sprawdz_biale(wybor, wybor+28))
                            licznik++;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]>6)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_biale(wybor, wybor+35))
                                licznik++;
                            else if(Szachy::tablica[wybor+35]>6 && zasady::sprawdz_biale(wybor, wybor+35))
                                licznik++;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]>6)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_biale(wybor, wybor+42))
                                    licznik++;
                                else if(Szachy::tablica[wybor+42]>6 && zasady::sprawdz_biale(wybor, wybor+42))
                                    licznik++;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]>6)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_biale(wybor, wybor+49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+49]>6 && zasady::sprawdz_biale(wybor, wybor+49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6)){
            if(Szachy::tablica[wybor+9]==0 && zasady::sprawdz_biale(wybor, wybor+9))
                licznik++;
            else if(Szachy::tablica[wybor+9]>6 && zasady::sprawdz_biale(wybor, wybor+9))
                licznik++;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]>6)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_biale(wybor, wybor+18))
                    licznik++;
                else if(Szachy::tablica[wybor+18]>6 && zasady::sprawdz_biale(wybor, wybor+18))
                    licznik++;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]>6)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_biale(wybor, wybor+27))
                        licznik++;
                    else if(Szachy::tablica[wybor+27]>6 && zasady::sprawdz_biale(wybor, wybor+27))
                        licznik++;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]>6)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_biale(wybor, wybor+36))
                            licznik++;
                        else if(Szachy::tablica[wybor+36]>6 && zasady::sprawdz_biale(wybor, wybor+36))
                            licznik++;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]>6)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_biale(wybor, wybor+45))
                                licznik++;
                            else if(Szachy::tablica[wybor+45]>6 && zasady::sprawdz_biale(wybor, wybor+45))
                                licznik++;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]>6)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_biale(wybor, wybor+54))
                                    licznik++;
                                else if(Szachy::tablica[wybor+54]>6 && zasady::sprawdz_biale(wybor, wybor+54))
                                    licznik++;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]>6)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_biale(wybor, wybor+63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+63]>6 && zasady::sprawdz_biale(wybor, wybor+63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }



    }
    else if(kolei){

        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7)){
            if(Szachy::tablica[wybor-9]==0 && zasady::sprawdz_czarne(wybor, wybor-9))
                licznik++;
            else if(Szachy::tablica[wybor-9]<7 && zasady::sprawdz_czarne(wybor, wybor-9))
                licznik++;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]<7) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_czarne(wybor, wybor-18))
                    licznik++;
                else if(Szachy::tablica[wybor-18]<7 && zasady::sprawdz_czarne(wybor, wybor-18))
                    licznik++;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]<7)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_czarne(wybor, wybor-27))
                        licznik++;
                    else if(Szachy::tablica[wybor-27]<7 && zasady::sprawdz_czarne(wybor, wybor-27))
                        licznik++;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]<7)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_czarne(wybor, wybor-36))
                            licznik++;
                        else if(Szachy::tablica[wybor-36]<7 && zasady::sprawdz_czarne(wybor, wybor-36))
                            licznik++;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]<7)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_czarne(wybor, wybor-45))
                                licznik++;
                            else if(Szachy::tablica[wybor-45]<7 && zasady::sprawdz_czarne(wybor, wybor-45))
                                licznik++;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]<7)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    licznik++;
                                else if(Szachy::tablica[wybor-54]<7 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    licznik++;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]<7)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-63]<7 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7)){
            if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_czarne(wybor, wybor-7))
                licznik++;
            else if(Szachy::tablica[wybor-7]<7 && zasady::sprawdz_czarne(wybor, wybor-7))
                licznik++;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]<7)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_czarne(wybor, wybor-14))
                    licznik++;
                else if(Szachy::tablica[wybor-14]<7 && zasady::sprawdz_czarne(wybor, wybor-14))
                    licznik++;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]<7)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_czarne(wybor, wybor-21))
                        licznik++;
                    else if(Szachy::tablica[wybor-21]<7 && zasady::sprawdz_czarne(wybor, wybor-21))
                        licznik++;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]<7)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_czarne(wybor, wybor-28))
                            licznik++;
                        else if(Szachy::tablica[wybor-28]<7 && zasady::sprawdz_czarne(wybor, wybor-28))
                            licznik++;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]<7)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_czarne(wybor, wybor-35))
                                licznik++;
                            else if(Szachy::tablica[wybor-35]<7 && zasady::sprawdz_czarne(wybor, wybor-35))
                                licznik++;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]<7)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    licznik++;
                                else if(Szachy::tablica[wybor-42]<7 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    licznik++;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]<7)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-49]<7 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7)){
            if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_czarne(wybor, wybor+7))
                licznik++;
            else if(Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                licznik++;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]<7)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_czarne(wybor, wybor+14))
                    licznik++;
                else if(Szachy::tablica[wybor+14]<7 && zasady::sprawdz_czarne(wybor, wybor+14))
                    licznik++;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]<7) && Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_czarne(wybor, wybor+21))
                        licznik++;
                    else if(Szachy::tablica[wybor+21]<7 && zasady::sprawdz_czarne(wybor, wybor+21))
                        licznik++;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]<7)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_czarne(wybor, wybor+28))
                            licznik++;
                        else if(Szachy::tablica[wybor+28]<7 && zasady::sprawdz_czarne(wybor, wybor+28))
                            licznik++;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]<7)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_czarne(wybor, wybor+35))
                                licznik++;
                            else if(Szachy::tablica[wybor+35]<7 && zasady::sprawdz_czarne(wybor, wybor+35))
                                licznik++;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]<7)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    licznik++;
                                else if(Szachy::tablica[wybor+42]<7 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    licznik++;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]<7)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+49]<7 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7)){
            if(Szachy::tablica[wybor+9]==0 && zasady::sprawdz_czarne(wybor, wybor+9))
                licznik++;
            else if(Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                licznik++;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]<7)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_czarne(wybor, wybor+18))
                    licznik++;
                else if(Szachy::tablica[wybor+18]<7 && zasady::sprawdz_czarne(wybor, wybor+18))
                    licznik++;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]<7)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_czarne(wybor, wybor+27))
                        licznik++;
                    else if(Szachy::tablica[wybor+27]<7 && zasady::sprawdz_czarne(wybor, wybor+27))
                        licznik++;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]<7)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_czarne(wybor, wybor+36))
                            licznik++;
                        else if(Szachy::tablica[wybor+36]<7 && zasady::sprawdz_czarne(wybor, wybor+36))
                            licznik++;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]<7)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_czarne(wybor, wybor+45))
                                licznik++;
                            else if(Szachy::tablica[wybor+45]<7 && zasady::sprawdz_czarne(wybor, wybor+45))
                                licznik++;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]<7)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    licznik++;
                                else if(Szachy::tablica[wybor+54]<7 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    licznik++;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]<7)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+63]<7 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

    }
}

void zasady::dama2(bool kolei, int wybor)
{
    if(!kolei){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6)){
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor-8))
                licznik++;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]>6) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_biale(wybor, wybor-16))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor-16))
                    licznik++;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]>6) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_biale(wybor, wybor-24))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor-24))
                        licznik++;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]>6) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_biale(wybor, wybor-32))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor-32))
                            licznik++;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]>6) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_biale(wybor, wybor-40))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor-40))
                                licznik++;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]>6) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_biale(wybor, wybor-48))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor-48))
                                    licznik++;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]>6) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_biale(wybor, wybor-56))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor-56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6)){
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_biale(wybor, wybor+8))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor+8))
                licznik++;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]>6) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_biale(wybor, wybor+16))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor+16))
                    licznik++;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]>6) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_biale(wybor, wybor+24))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor+24))
                        licznik++;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]>6) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_biale(wybor, wybor+32))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor+32))
                            licznik++;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]>6) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_biale(wybor, wybor+40))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor+40))
                                licznik++;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]>6) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_biale(wybor, wybor+48))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor+48))
                                    licznik++;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]>6) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_biale(wybor, wybor+56))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor+56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6)){
            if(Szachy::tablica[wybor-1]==0 && zasady::sprawdz_biale(wybor, wybor-1))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor-1))
                licznik++;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]>6) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_biale(wybor, wybor-2))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor-2))
                    licznik++;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]>6) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_biale(wybor, wybor-3))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor-3))
                        licznik++;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]>6) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_biale(wybor, wybor-4))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor-4))
                            licznik++;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]>6) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_biale(wybor, wybor-5))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor-5))
                                licznik++;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_biale(wybor, wybor-6))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor-6))
                                    licznik++;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_biale(wybor, wybor-7))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor-7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6)){
            if(Szachy::tablica[wybor+1]==0 && zasady::sprawdz_biale(wybor, wybor+1))
                licznik++;
            else if(zasady::sprawdz_biale(wybor, wybor+1))
                licznik++;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]>6) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_biale(wybor, wybor+2))
                    licznik++;
                else if(zasady::sprawdz_biale(wybor, wybor+2))
                    licznik++;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]>6) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_biale(wybor, wybor+3))
                        licznik++;
                    else if(zasady::sprawdz_biale(wybor, wybor+3))
                        licznik++;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]>6) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_biale(wybor, wybor+4))
                            licznik++;
                        else if(zasady::sprawdz_biale(wybor, wybor+4))
                            licznik++;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]>6) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_biale(wybor, wybor+5))
                                licznik++;
                            else if(zasady::sprawdz_biale(wybor, wybor+5))
                                licznik++;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_biale(wybor, wybor+6))
                                    licznik++;
                                else if(zasady::sprawdz_biale(wybor, wybor+6))
                                    licznik++;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_biale(wybor, wybor+7))
                                        licznik++;
                                    else if(zasady::sprawdz_biale(wybor, wybor+7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6)){
            if(Szachy::tablica[wybor-9]==0 && zasady::sprawdz_biale(wybor, wybor-9))
                licznik++;
            else if(Szachy::tablica[wybor-9]>6 && zasady::sprawdz_biale(wybor, wybor-9))
                licznik++;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]>6) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_biale(wybor, wybor-18))
                    licznik++;
                else if(Szachy::tablica[wybor-18]>6 && zasady::sprawdz_biale(wybor, wybor-18))
                    licznik++;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]>6)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_biale(wybor, wybor-27))
                        licznik++;
                    else if(Szachy::tablica[wybor-27]>6 && zasady::sprawdz_biale(wybor, wybor-27))
                        licznik++;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]>6)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_biale(wybor, wybor-36))
                            licznik++;
                        else if(Szachy::tablica[wybor-36]>6 && zasady::sprawdz_biale(wybor, wybor-36))
                            licznik++;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]>6)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_biale(wybor, wybor-45))
                                licznik++;
                            else if(Szachy::tablica[wybor-45]>6 && zasady::sprawdz_biale(wybor, wybor-45))
                                licznik++;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]>6)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_biale(wybor, wybor-54))
                                    licznik++;
                                else if(Szachy::tablica[wybor-54]>6 && zasady::sprawdz_biale(wybor, wybor-54))
                                    licznik++;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]>6)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_biale(wybor, wybor-63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-63]>6 && zasady::sprawdz_biale(wybor, wybor-63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6)){
            if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_biale(wybor, wybor-7))
                licznik++;
            else if(Szachy::tablica[wybor-7]>6 && zasady::sprawdz_biale(wybor, wybor-7))
                licznik++;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]>6)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_biale(wybor, wybor-14))
                    licznik++;
                else if(Szachy::tablica[wybor-14]>6 && zasady::sprawdz_biale(wybor, wybor-14))
                    licznik++;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]>6)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_biale(wybor, wybor-21))
                        licznik++;
                    else if(Szachy::tablica[wybor-21]>6 && zasady::sprawdz_biale(wybor, wybor-21))
                        licznik++;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]>6)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_biale(wybor, wybor-28))
                            licznik++;
                        else if(Szachy::tablica[wybor-28]>6 && zasady::sprawdz_biale(wybor, wybor-28))
                            licznik++;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]>6)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_biale(wybor, wybor-35))
                                licznik++;
                            else if(Szachy::tablica[wybor-35]>6 && zasady::sprawdz_biale(wybor, wybor-35))
                                licznik++;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]>6)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_biale(wybor, wybor-42))
                                    licznik++;
                                else if(Szachy::tablica[wybor-42]>6 && zasady::sprawdz_biale(wybor, wybor-42))
                                    licznik++;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]>6)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_biale(wybor, wybor-49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-49]>6 && zasady::sprawdz_biale(wybor, wybor-49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6)){
            if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_biale(wybor, wybor+7))
                licznik++;
            else if(Szachy::tablica[wybor+7]>6 && zasady::sprawdz_biale(wybor, wybor+7))
                licznik++;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]>6)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_biale(wybor, wybor+14))
                    licznik++;
                else if(Szachy::tablica[wybor+14]>6 && zasady::sprawdz_biale(wybor, wybor+14))
                    licznik++;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]>6)&& Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_biale(wybor, wybor+21))
                        licznik++;
                    else if(Szachy::tablica[wybor+21]>6 && zasady::sprawdz_biale(wybor, wybor+21))
                        licznik++;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]>6)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_biale(wybor, wybor+28))
                            licznik++;
                        else if(Szachy::tablica[wybor+28]>6 && zasady::sprawdz_biale(wybor, wybor+28))
                            licznik++;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]>6)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_biale(wybor, wybor+35))
                                licznik++;
                            else if(Szachy::tablica[wybor+35]>6 && zasady::sprawdz_biale(wybor, wybor+35))
                                licznik++;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]>6)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_biale(wybor, wybor+42))
                                    licznik++;
                                else if(Szachy::tablica[wybor+42]>6 && zasady::sprawdz_biale(wybor, wybor+42))
                                    licznik++;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]>6)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_biale(wybor, wybor+49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+49]>6 && zasady::sprawdz_biale(wybor, wybor+49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6)){
            if(Szachy::tablica[wybor+9]==0 && zasady::sprawdz_biale(wybor, wybor+9))
                licznik++;
            else if(Szachy::tablica[wybor+9]>6 && zasady::sprawdz_biale(wybor, wybor+9))
                licznik++;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]>6)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_biale(wybor, wybor+18))
                    licznik++;
                else if(Szachy::tablica[wybor+18]>6 && zasady::sprawdz_biale(wybor, wybor+18))
                    licznik++;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]>6)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_biale(wybor, wybor+27))
                        licznik++;
                    else if(Szachy::tablica[wybor+27]>6 && zasady::sprawdz_biale(wybor, wybor+27))
                        licznik++;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]>6)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_biale(wybor, wybor+36))
                            licznik++;
                        else if(Szachy::tablica[wybor+36]>6 && zasady::sprawdz_biale(wybor, wybor+36))
                            licznik++;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]>6)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_biale(wybor, wybor+45))
                                licznik++;
                            else if(Szachy::tablica[wybor+45]>6 && zasady::sprawdz_biale(wybor, wybor+45))
                                licznik++;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]>6)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_biale(wybor, wybor+54))
                                    licznik++;
                                else if(Szachy::tablica[wybor+54]>6 && zasady::sprawdz_biale(wybor, wybor+54))
                                    licznik++;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]>6)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_biale(wybor, wybor+63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+63]>6 && zasady::sprawdz_biale(wybor, wybor+63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }


    }
    else if(kolei){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7)){
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_czarne(wybor, wybor-8))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor-8))
                licznik++;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]<7) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_czarne(wybor, wybor-16))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor-16))
                    licznik++;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]<7) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_czarne(wybor, wybor-24))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor-24))
                        licznik++;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]<7) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_czarne(wybor, wybor-32))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor-32))
                            licznik++;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]<7) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_czarne(wybor, wybor-40))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor-40))
                                licznik++;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]<7) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_czarne(wybor, wybor-48))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor-48))
                                    licznik++;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]<7) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_czarne(wybor, wybor-56))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7)){
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_czarne(wybor, wybor+8))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor+8))
                licznik++;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]<7) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_czarne(wybor, wybor+16))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor+16))
                    licznik++;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]<7) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_czarne(wybor, wybor+24))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor+24))
                        licznik++;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]<7) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_czarne(wybor, wybor+32))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor+32))
                            licznik++;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]<7) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_czarne(wybor, wybor+40))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor+40))
                                licznik++;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]<7) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_czarne(wybor, wybor+48))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor+48))
                                    licznik++;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]<7) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_czarne(wybor, wybor+56))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+56))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7)){
            if(Szachy::tablica[wybor-1]==0 && zasady::sprawdz_czarne(wybor, wybor-1))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor-1))
                licznik++;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]<7) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_czarne(wybor, wybor-2))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor-2))
                    licznik++;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]<7) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_czarne(wybor, wybor-3))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor-3))
                        licznik++;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]<7) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_czarne(wybor, wybor-4))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor-4))
                            licznik++;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]<7) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_czarne(wybor, wybor-5))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor-5))
                                licznik++;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_czarne(wybor, wybor-6))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor-6))
                                    licznik++;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_czarne(wybor, wybor-7))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7)){
            if(Szachy::tablica[wybor+1]==0 && zasady::sprawdz_czarne(wybor, wybor+1))
                licznik++;
            else if(zasady::sprawdz_czarne(wybor, wybor+1))
                licznik++;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]<7) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_czarne(wybor, wybor+2))
                    licznik++;
                else if(zasady::sprawdz_czarne(wybor, wybor+2))
                    licznik++;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]<7) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_czarne(wybor, wybor+3))
                        licznik++;
                    else if(zasady::sprawdz_czarne(wybor, wybor+3))
                        licznik++;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]<7) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_czarne(wybor, wybor+4))
                            licznik++;
                        else if(zasady::sprawdz_czarne(wybor, wybor+4))
                            licznik++;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]<7) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_czarne(wybor, wybor+5))
                                licznik++;
                            else if(zasady::sprawdz_czarne(wybor, wybor+5))
                                licznik++;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_czarne(wybor, wybor+6))
                                    licznik++;
                                else if(zasady::sprawdz_czarne(wybor, wybor+6))
                                    licznik++;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_czarne(wybor, wybor+7))
                                        licznik++;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+7))
                                        licznik++;

                                }
                            }
                        }
                    }
                }
            }
        }

        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7)){
            if(Szachy::tablica[wybor-9]==0 && zasady::sprawdz_czarne(wybor, wybor-9))
                licznik++;
            else if(Szachy::tablica[wybor-9]<7 && zasady::sprawdz_czarne(wybor, wybor-9))
                licznik++;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]<7) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_czarne(wybor, wybor-18))
                    licznik++;
                else if(Szachy::tablica[wybor-18]<7 && zasady::sprawdz_czarne(wybor, wybor-18))
                    licznik++;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]<7)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_czarne(wybor, wybor-27))
                        licznik++;
                    else if(Szachy::tablica[wybor-27]<7 && zasady::sprawdz_czarne(wybor, wybor-27))
                        licznik++;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]<7)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_czarne(wybor, wybor-36))
                            licznik++;
                        else if(Szachy::tablica[wybor-36]<7 && zasady::sprawdz_czarne(wybor, wybor-36))
                            licznik++;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]<7)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_czarne(wybor, wybor-45))
                                licznik++;
                            else if(Szachy::tablica[wybor-45]<7 && zasady::sprawdz_czarne(wybor, wybor-45))
                                licznik++;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]<7)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    licznik++;
                                else if(Szachy::tablica[wybor-54]<7 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    licznik++;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]<7)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-63]<7 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7)){
            if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_czarne(wybor, wybor-7))
                licznik++;
            else if(Szachy::tablica[wybor-7]<7 && zasady::sprawdz_czarne(wybor, wybor-7))
                licznik++;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]<7)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_czarne(wybor, wybor-14))
                    licznik++;
                else if(Szachy::tablica[wybor-14]<7 && zasady::sprawdz_czarne(wybor, wybor-14))
                    licznik++;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]<7)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_czarne(wybor, wybor-21))
                        licznik++;
                    else if(Szachy::tablica[wybor-21]<7 && zasady::sprawdz_czarne(wybor, wybor-21))
                        licznik++;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]<7)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_czarne(wybor, wybor-28))
                            licznik++;
                        else if(Szachy::tablica[wybor-28]<7 && zasady::sprawdz_czarne(wybor, wybor-28))
                            licznik++;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]<7)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_czarne(wybor, wybor-35))
                                licznik++;
                            else if(Szachy::tablica[wybor-35]<7 && zasady::sprawdz_czarne(wybor, wybor-35))
                                licznik++;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]<7)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    licznik++;
                                else if(Szachy::tablica[wybor-42]<7 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    licznik++;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]<7)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor-49]<7 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7)){
            if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_czarne(wybor, wybor+7))
                licznik++;
            else if(Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                licznik++;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]<7)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_czarne(wybor, wybor+14))
                    licznik++;
                else if(Szachy::tablica[wybor+14]<7 && zasady::sprawdz_czarne(wybor, wybor+14))
                    licznik++;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]<7) && Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_czarne(wybor, wybor+21))
                        licznik++;
                    else if(Szachy::tablica[wybor+21]<7 && zasady::sprawdz_czarne(wybor, wybor+21))
                        licznik++;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]<7)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_czarne(wybor, wybor+28))
                            licznik++;
                        else if(Szachy::tablica[wybor+28]<7 && zasady::sprawdz_czarne(wybor, wybor+28))
                            licznik++;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]<7)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_czarne(wybor, wybor+35))
                                licznik++;
                            else if(Szachy::tablica[wybor+35]<7 && zasady::sprawdz_czarne(wybor, wybor+35))
                                licznik++;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]<7)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    licznik++;
                                else if(Szachy::tablica[wybor+42]<7 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    licznik++;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]<7)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+49]<7 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7)){
            if(Szachy::tablica[wybor+9]==0 && zasady::sprawdz_czarne(wybor, wybor+9))
                licznik++;
            else if(Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                licznik++;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]<7)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_czarne(wybor, wybor+18))
                    licznik++;
                else if(Szachy::tablica[wybor+18]<7 && zasady::sprawdz_czarne(wybor, wybor+18))
                    licznik++;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]<7)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_czarne(wybor, wybor+27))
                        licznik++;
                    else if(Szachy::tablica[wybor+27]<7 && zasady::sprawdz_czarne(wybor, wybor+27))
                        licznik++;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]<7)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_czarne(wybor, wybor+36))
                            licznik++;
                        else if(Szachy::tablica[wybor+36]<7 && zasady::sprawdz_czarne(wybor, wybor+36))
                            licznik++;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]<7)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_czarne(wybor, wybor+45))
                                licznik++;
                            else if(Szachy::tablica[wybor+45]<7 && zasady::sprawdz_czarne(wybor, wybor+45))
                                licznik++;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]<7)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    licznik++;
                                else if(Szachy::tablica[wybor+54]<7 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    licznik++;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]<7)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        licznik++;
                                    else if(Szachy::tablica[wybor+63]<7 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        licznik++;
                                }

                            }

                        }

                    }

                }

            }

        }

    }

}

void zasady::krol2(bool kolei, int wybor)
{
    if(!kolei){

        if(wybor>7){
            if((Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6) && zasady::sprawdz_biale(wybor, wybor-8)){
                if(Szachy::tablica[wybor-8]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-8]>6)
                    licznik++;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6) && zasady::sprawdz_biale(wybor, wybor-9)){
                if(Szachy::tablica[wybor-9]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-9]>6)
                    licznik++;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && zasady::sprawdz_biale(wybor, wybor-7)){
                if(Szachy::tablica[wybor-7]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-7]>6)
                    licznik++;
            }

        }

        if(wybor<56){
            if((Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6) && zasady::sprawdz_biale(wybor, wybor+8)){
                if(Szachy::tablica[wybor+8]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+8]>6)
                    licznik++;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && zasady::sprawdz_biale(wybor, wybor+7)){
                if(Szachy::tablica[wybor+7]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+7]>6)
                    licznik++;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6) && zasady::sprawdz_biale(wybor, wybor+9)){
                if(Szachy::tablica[wybor+9]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+9]>6)
                    licznik++;
            }



        }

        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6) && zasady::sprawdz_biale(wybor, wybor-1))
        {
            if(Szachy::tablica[wybor-1]==0)
                licznik++;
            else if(Szachy::tablica[wybor-1]>6)
                licznik++;
        }

        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6) && zasady::sprawdz_biale(wybor, wybor+1))
        {
            if(Szachy::tablica[wybor+1]==0)
                licznik++;
            else if(Szachy::tablica[wybor+1]>6)
                licznik++;
        }

    }
    else if(kolei){
        if(wybor>7){
            if((Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7) && zasady::sprawdz_czarne(wybor, wybor-8)){
                if(Szachy::tablica[wybor-8]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-8]<7)
                    licznik++;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7) && zasady::sprawdz_czarne(wybor, wybor-9)){
                if(Szachy::tablica[wybor-9]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-9]<7)
                    licznik++;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && zasady::sprawdz_czarne(wybor, wybor-7)){
                if(Szachy::tablica[wybor-7]==0)
                    licznik++;
                else if(Szachy::tablica[wybor-7]<7)
                    licznik++;
            }

        }

        if(wybor<56){
            if((Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7) && zasady::sprawdz_czarne(wybor, wybor+8)){
                if(Szachy::tablica[wybor+8]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+8]<7)
                    licznik++;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && zasady::sprawdz_czarne(wybor, wybor+7)){
                if(Szachy::tablica[wybor+7]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+7]<7)
                    licznik++;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7) && zasady::sprawdz_czarne(wybor, wybor+9)){
                if(Szachy::tablica[wybor+9]==0)
                    licznik++;
                else if(Szachy::tablica[wybor+9]<7)
                    licznik++;
            }



        }

        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7) && zasady::sprawdz_czarne(wybor, wybor-1))
        {
            if(Szachy::tablica[wybor-1]==0)
                licznik++;
            else if(Szachy::tablica[wybor-1]<7)
                licznik++;
        }

        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7) && zasady::sprawdz_czarne(wybor, wybor+1))
        {
            if(Szachy::tablica[wybor+1]==0)
                licznik++;
            else if(Szachy::tablica[wybor+1]<7)
                licznik++;
        }

    }
}

void zasady::pionek2(bool kolei, int wybor)
{
    if(!kolei){
        if(wybor>47 && wybor<56)
        {
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                licznik++;
            if(Szachy::tablica[wybor-8]==0 && Szachy::tablica[wybor-16]==0&& zasady::sprawdz_biale(wybor, wybor-16))
                licznik++;


            if(wybor%8!=0 && Szachy::tablica[wybor-9]>6 && Szachy::tablica[wybor-9]<13 && zasady::sprawdz_biale(wybor, wybor-9))
                licznik++;

            if(wybor%8!=7 && Szachy::tablica[wybor-7]>6 && Szachy::tablica[wybor-7]<13&& zasady::sprawdz_biale(wybor, wybor-7))
                licznik++;

        }
        else{
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                licznik++;
            if(wybor%8!=0 && Szachy::tablica[wybor-9]>6 && Szachy::tablica[wybor-9]<13 && zasady::sprawdz_biale(wybor, wybor-9))
                licznik++;

            if(wybor%8!=7 && Szachy::tablica[wybor-7]>6 && Szachy::tablica[wybor-7]<13 && zasady::sprawdz_biale(wybor, wybor-7))
                licznik++;

        }
    }
    else{
        if(wybor>7 && wybor<16)
        {
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_czarne(wybor, wybor+8))
                licznik++;
            if(Szachy::tablica[wybor+8]==0 && Szachy::tablica[wybor+16]==0 && zasady::sprawdz_czarne(wybor, wybor+16))
                licznik++;


            if(wybor%8!=7 && Szachy::tablica[wybor+9]>0 && Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                licznik++;

            if(wybor%8!=0 && Szachy::tablica[wybor+7]>0 && Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                licznik++;
        }
        else{
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_czarne(wybor, wybor+8))
                licznik++;

            if(wybor%8!=7 && Szachy::tablica[wybor+9]>0 && Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                licznik++;

            if(wybor%8!=0 && Szachy::tablica[wybor+7]>0 && Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                licznik++;
        }
    }
}



std::vector<int> zasady::wektor(64, 0);

int zasady::licznik=0;

int zasady::koniec = 0;
