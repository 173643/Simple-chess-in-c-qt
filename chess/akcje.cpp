#include "akcje.h"

akcje::akcje() {}



bool akcje::szach_bialy(std::vector<int> wektor)
{
    int indeks=-1;
    for(int i=63; i>=0; i--){
        if(Szachy::tablica[i]==6){
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


    return szach;
}

bool akcje::szach_czarny(std::vector<int> wektor)
{
    int indeks=-1;
    for(int i=63; i>=0; i--){
        if(Szachy::tablica[i]==12){
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

    return szach;
}


void akcje::uzupelnij_biale(void)
{
    for(int i=0; i<64; i++)
    {
        atak_bialy[i]=0;
    }

    for(int i=0; i<64; i++){
        if(Szachy::tablica[i]!=0 && Szachy::tablica[i]<7){
            switch(Szachy::tablica[i]){
            case 1:
                pionek(0, i);
                break;
            case 2:
                wieza(0, i);
                break;
            case 3:
                kon(0, i);
                break;
            case 4:
                laufer(0, i);
                break;
            case 5:
                dama(0, i);
                break;
            case 6:
                krol(0, i);
                break;
            }
        }
    }
}

void akcje::uzupelnij_czarne(void)
{
    for(int i=0; i<64; i++){
        atak_czarny[i]=0;
    }

    for(int i=0; i<64; i++){
        if(Szachy::tablica[i]!=0 && Szachy::tablica[i]>6){
            switch(Szachy::tablica[i]){
            case 7:
                pionek(1, i);
                break;
            case 8:
                wieza(1, i);
                break;
            case 9:
                kon(1, i);
                break;
            case 10:
                laufer(1, i);
                break;
            case 11:
                dama(1, i);
                break;
            case 12:
                krol(1, i);
                break;
            }
        }
    }
}

void akcje::pionek(bool strona, int wybor)
{
    if(!strona){
        if(wybor%8!=0 && Szachy::tablica[wybor-9]<7)
            atak_bialy[wybor-9]=2;

        if(wybor%8!=7 && Szachy::tablica[wybor-7]<7)
            atak_bialy[wybor-7]=2;

    }
    else{
        if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6))
                atak_czarny[wybor+9]=2;

        if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6))
                atak_czarny[wybor+7]=2;
        }

}

void akcje::wieza(bool strona, int wybor)
{
    if(!strona){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6)){
            if(Szachy::tablica[wybor-8]==0)
                atak_bialy[wybor-8]=1;
            else
                atak_bialy[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]>6) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0)
                    atak_bialy[wybor-16]=1;
                else
                    atak_bialy[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]>6) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0)
                        atak_bialy[wybor-24]=1;
                    else
                        atak_bialy[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]>6) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0)
                            atak_bialy[wybor-32]=1;
                        else
                            atak_bialy[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]>6) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0)
                                atak_bialy[wybor-40]=1;
                            else
                                atak_bialy[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]>6) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0)
                                    atak_bialy[wybor-48]=1;
                                else
                                    atak_bialy[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]>6) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0)
                                        atak_bialy[wybor-56]=1;
                                    else
                                        atak_bialy[wybor-56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6)){
            if(Szachy::tablica[wybor+8]==0)
                atak_bialy[wybor+8]=1;
            else
                atak_bialy[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]>6) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0)
                    atak_bialy[wybor+16]=1;
                else
                    atak_bialy[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]>6) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0)
                        atak_bialy[wybor+24]=1;
                    else
                        atak_bialy[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]>6) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0)
                            atak_bialy[wybor+32]=1;
                        else
                            atak_bialy[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]>6) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0)
                                atak_bialy[wybor+40]=1;
                            else
                                atak_bialy[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]>6) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0)
                                    atak_bialy[wybor+48]=1;
                                else
                                    atak_bialy[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]>6) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0)
                                        atak_bialy[wybor+56]=1;
                                    else
                                        atak_bialy[wybor+56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6)){
            if(Szachy::tablica[wybor-1]==0)
                atak_bialy[wybor-1]=1;
            else
                atak_bialy[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]>6) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0)
                    atak_bialy[wybor-2]=1;
                else
                    atak_bialy[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]>6) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0)
                        atak_bialy[wybor-3]=1;
                    else
                        atak_bialy[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]>6) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0)
                            atak_bialy[wybor-4]=1;
                        else
                            atak_bialy[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]>6) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0)
                                atak_bialy[wybor-5]=1;
                            else
                                atak_bialy[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0)
                                    atak_bialy[wybor-6]=1;
                                else
                                    atak_bialy[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0)
                                        atak_bialy[wybor-7]=1;
                                    else
                                        atak_bialy[wybor-7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6)){
            if(Szachy::tablica[wybor+1]==0)
                atak_bialy[wybor+1]=1;
            else
                atak_bialy[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]>6) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0)
                    atak_bialy[wybor+2]=1;
                else
                    atak_bialy[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]>6) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0)
                        atak_bialy[wybor+3]=1;
                    else
                        atak_bialy[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]>6) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0)
                            atak_bialy[wybor+4]=1;
                        else
                            atak_bialy[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]>6) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0)
                                atak_bialy[wybor+5]=1;
                            else
                                atak_bialy[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0)
                                    atak_bialy[wybor+6]=1;
                                else
                                    atak_bialy[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0)
                                        atak_bialy[wybor+7]=1;
                                    else
                                        atak_bialy[wybor+7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }


    }
    else if(strona){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7)){
            if(Szachy::tablica[wybor-8]==0)
                atak_czarny[wybor-8]=1;
            else
                atak_czarny[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]<7) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0)
                    atak_czarny[wybor-16]=1;
                else
                    atak_czarny[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]<7) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0)
                        atak_czarny[wybor-24]=1;
                    else
                        atak_czarny[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]<7) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0)
                            atak_czarny[wybor-32]=1;
                        else
                            atak_czarny[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]<7) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0)
                                atak_czarny[wybor-40]=1;
                            else
                                atak_czarny[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]<7) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0)
                                    atak_czarny[wybor-48]=1;
                                else
                                    atak_czarny[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]<7) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0)
                                        atak_czarny[wybor-56]=1;
                                    else
                                        atak_czarny[wybor-56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7)){
            if(Szachy::tablica[wybor+8]==0)
                atak_czarny[wybor+8]=1;
            else
                atak_czarny[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]<7) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0)
                    atak_czarny[wybor+16]=1;
                else
                    atak_czarny[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]<7) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0)
                        atak_czarny[wybor+24]=1;
                    else
                        atak_czarny[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]<7) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0)
                            atak_czarny[wybor+32]=1;
                        else
                            atak_czarny[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]<7) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0)
                                atak_czarny[wybor+40]=1;
                            else
                                atak_czarny[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]<7) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0)
                                    atak_czarny[wybor+48]=1;
                                else
                                    atak_czarny[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]<7) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0)
                                        atak_czarny[wybor+56]=1;
                                    else
                                        atak_czarny[wybor+56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7)){
            if(Szachy::tablica[wybor-1]==0)
                atak_czarny[wybor-1]=1;
            else
                atak_czarny[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]<7) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0)
                    atak_czarny[wybor-2]=1;
                else
                    atak_czarny[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]<7) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0)
                        atak_czarny[wybor-3]=1;
                    else
                        atak_czarny[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]<7) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0)
                            atak_czarny[wybor-4]=1;
                        else
                            atak_czarny[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]<7) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0)
                                atak_czarny[wybor-5]=1;
                            else
                                atak_czarny[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0)
                                    atak_czarny[wybor-6]=1;
                                else
                                    atak_czarny[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0)
                                        atak_czarny[wybor-7]=1;
                                    else
                                        atak_czarny[wybor-7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7)){
            if(Szachy::tablica[wybor+1]==0)
                atak_czarny[wybor+1]=1;
            else
                atak_czarny[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]<7) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0)
                    atak_czarny[wybor+2]=1;
                else
                    atak_czarny[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]<7) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0)
                        atak_czarny[wybor+3]=1;
                    else
                        atak_czarny[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]<7) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0)
                            atak_czarny[wybor+4]=1;
                        else
                            atak_czarny[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]<7) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0)
                                atak_czarny[wybor+5]=1;
                            else
                                atak_czarny[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0)
                                    atak_czarny[wybor+6]=1;
                                else
                                    atak_czarny[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0)
                                        atak_czarny[wybor+7]=1;
                                    else
                                        atak_czarny[wybor+7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

    }

}

void akcje::kon(bool strona, int wybor)
{
    if(!strona){
        if(wybor>15){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor-17]==0 || Szachy::tablica[wybor-17]>6)){
                if(Szachy::tablica[wybor-17]==0)
                    atak_bialy[wybor-17]=1;
                else if(Szachy::tablica[wybor-17]>6)
                    atak_bialy[wybor-17]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor-15]==0 || Szachy::tablica[wybor-15]>6)){
                if(Szachy::tablica[wybor-15]==0)
                    atak_bialy[wybor-15]=1;
                else if(Szachy::tablica[wybor-15]>6)
                    atak_bialy[wybor-15]=2;
            }
        }

        if(wybor<48){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor+15]==0 || Szachy::tablica[wybor+15]>6)){
                if(Szachy::tablica[wybor+15]==0)
                    atak_bialy[wybor+15]=1;
                else if(Szachy::tablica[wybor+15]>6)
                    atak_bialy[wybor+15]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor+17]==0 || Szachy::tablica[wybor+17]>6)){
                if(Szachy::tablica[wybor+17]==0)
                    atak_bialy[wybor+17]=1;
                else if(Szachy::tablica[wybor+17]>6)
                    atak_bialy[wybor+17]=2;
            }
        }

        if(wybor%8>1){
            if(wybor>8 && (Szachy::tablica[wybor-10]==0 || Szachy::tablica[wybor-10]>6)){
                if(Szachy::tablica[wybor-10]==0)
                    atak_bialy[wybor-10]=1;
                else if(Szachy::tablica[wybor-10]>6)
                    atak_bialy[wybor-10]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6)){
                if(Szachy::tablica[wybor+6]==0)
                    atak_bialy[wybor+6]=1;
                else if(Szachy::tablica[wybor+6]>6)
                    atak_bialy[wybor+6]=2;
            }
        }

        if(wybor%8<6){
            if(wybor>8 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6)){
                if(Szachy::tablica[wybor-6]==0)
                    atak_bialy[wybor-6]=1;
                else if(Szachy::tablica[wybor-6]>6)
                    atak_bialy[wybor-6]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+10]==0 || Szachy::tablica[wybor+10]>6)){
                if(Szachy::tablica[wybor+10]==0)
                    atak_bialy[wybor+10]=1;
                else if(Szachy::tablica[wybor+10]>6)
                    atak_bialy[wybor+10]=2;
            }
        }

    }
    else if(strona){
        if(wybor>15){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor-17]==0 || Szachy::tablica[wybor-17]<7)){
                if(Szachy::tablica[wybor-17]==0)
                    atak_czarny[wybor-17]=1;
                else if(Szachy::tablica[wybor-17]<7)
                    atak_czarny[wybor-17]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor-15]==0 || Szachy::tablica[wybor-15]<7)){
                if(Szachy::tablica[wybor-15]==0)
                    atak_czarny[wybor-15]=1;
                else if(Szachy::tablica[wybor-15]<7)
                    atak_czarny[wybor-15]=2;
            }
        }

        if(wybor<48){
            if(wybor%8!=0 && (Szachy::tablica[wybor+15]==0 || Szachy::tablica[wybor+15]<7)){
                if(Szachy::tablica[wybor+15]==0)
                    atak_czarny[wybor+15]=1;
                else if(Szachy::tablica[wybor+15]<7)
                    atak_czarny[wybor+15]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor+17]==0 || Szachy::tablica[wybor+17]<7)){
                if(Szachy::tablica[wybor+17]==0)
                    atak_czarny[wybor+17]=1;
                else if(Szachy::tablica[wybor+17]<7)
                    atak_czarny[wybor+17]=2;
            }
        }

        if(wybor%8>1){
            if(wybor>8 && (Szachy::tablica[wybor-10]==0 || Szachy::tablica[wybor-10]<7)){
                if(Szachy::tablica[wybor-10]==0)
                    atak_czarny[wybor-10]=1;
                else if(Szachy::tablica[wybor-10]<7)
                    atak_czarny[wybor-10]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7)){
                if(Szachy::tablica[wybor+6]==0)
                    atak_czarny[wybor+6]=1;
                else if(Szachy::tablica[wybor+6]<7)
                    atak_czarny[wybor+6]=2;
            }
        }

        if(wybor%8<6){
            if(wybor>8 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7)){
                if(Szachy::tablica[wybor-6]==0)
                    atak_czarny[wybor-6]=1;
                else if(Szachy::tablica[wybor-6]<7)
                    atak_czarny[wybor-6]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+10]==0 || Szachy::tablica[wybor+10]<7)){
                if(Szachy::tablica[wybor+10]==0)
                    atak_czarny[wybor+10]=1;
                else if(Szachy::tablica[wybor+10])
                    atak_czarny[wybor+10]=2;
            }
        }

    }
}

void akcje::laufer(bool strona, int wybor)
{
    if(!strona){
        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6)){
            if(Szachy::tablica[wybor-9]==0)
                atak_bialy[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]>6)
                atak_bialy[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]>6) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0)
                    atak_bialy[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]>6)
                    atak_bialy[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]>6)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0)
                        atak_bialy[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]>6)
                        atak_bialy[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]>6)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0)
                            atak_bialy[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]>6)
                            atak_bialy[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]>6)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0)
                                atak_bialy[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]>6)
                                atak_bialy[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]>6)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0)
                                    atak_bialy[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]>6)
                                    atak_bialy[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]>6)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0)
                                        atak_bialy[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]>6)
                                        atak_bialy[wybor-63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6)){
            if(Szachy::tablica[wybor-7]==0)
                atak_bialy[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]>6)
                atak_bialy[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]>6)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0)
                    atak_bialy[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]>6)
                    atak_bialy[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]>6)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0)
                        atak_bialy[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]>6)
                        atak_bialy[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]>6)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0)
                            atak_bialy[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]>6)
                            atak_bialy[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]>6)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0)
                                atak_bialy[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]>6)
                                atak_bialy[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]>6)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0)
                                    atak_bialy[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]>6)
                                    atak_bialy[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]>6)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0)
                                        atak_bialy[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]>6)
                                        atak_bialy[wybor-49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6)){
            if(Szachy::tablica[wybor+7]==0)
                atak_bialy[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]>6)
                atak_bialy[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]>6)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0)
                    atak_bialy[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]>6)
                    atak_bialy[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]>6)&& Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0)
                        atak_bialy[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]>6)
                        atak_bialy[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]>6)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0)
                            atak_bialy[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]>6)
                            atak_bialy[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]>6)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0)
                                atak_bialy[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]>6)
                                atak_bialy[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]>6)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0)
                                    atak_bialy[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]>6)
                                    atak_bialy[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]>6)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0)
                                        atak_bialy[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]>6)
                                        atak_bialy[wybor+49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6)){
            if(Szachy::tablica[wybor+9]==0)
                atak_bialy[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]>6)
                atak_bialy[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]>6)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0)
                    atak_bialy[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]>6)
                    atak_bialy[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]>6)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0)
                        atak_bialy[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]>6)
                        atak_bialy[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]>6)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0)
                            atak_bialy[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]>6)
                            atak_bialy[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]>6)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0)
                                atak_bialy[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]>6)
                                atak_bialy[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]>6)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0)
                                    atak_bialy[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]>6)
                                    atak_bialy[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]>6)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0)
                                        atak_bialy[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]>6)
                                        atak_bialy[wybor+63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }



    }
    else if(strona){

        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7)){
            if(Szachy::tablica[wybor-9]==0)
                atak_czarny[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]<7)
                atak_czarny[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]<7) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0)
                    atak_czarny[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]<7)
                    atak_czarny[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]<7)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0)
                        atak_czarny[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]<7)
                        atak_czarny[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]<7)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0)
                            atak_czarny[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]<7)
                            atak_czarny[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]<7)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0)
                                atak_czarny[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]<7)
                                atak_czarny[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]<7)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0)
                                    atak_czarny[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]<7)
                                    atak_czarny[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]<7)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0)
                                        atak_czarny[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]<7)
                                        atak_czarny[wybor-63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7)){
            if(Szachy::tablica[wybor-7]==0)
                atak_czarny[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]<7)
                atak_czarny[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]<7)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0)
                    atak_czarny[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]<7)
                    atak_czarny[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]<7)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0)
                        atak_czarny[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]<7)
                        atak_czarny[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]<7)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0)
                            atak_czarny[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]<7)
                            atak_czarny[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]<7)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0)
                                atak_czarny[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]<7)
                                atak_czarny[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]<7)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0)
                                    atak_czarny[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]<7)
                                    atak_czarny[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]<7)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0)
                                        atak_czarny[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]<7)
                                        atak_czarny[wybor-49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7)){
            if(Szachy::tablica[wybor+7]==0)
                atak_czarny[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]<7)
                atak_czarny[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]<7)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0)
                    atak_czarny[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]<7)
                    atak_czarny[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]<7) && Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0)
                        atak_czarny[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]<7)
                        atak_czarny[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]<7)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0)
                            atak_czarny[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]<7)
                            atak_czarny[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]<7)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0)
                                atak_czarny[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]<7)
                                atak_czarny[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]<7)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0)
                                    atak_czarny[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]<7)
                                    atak_czarny[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]<7)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0)
                                        atak_czarny[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]<7)
                                        atak_czarny[wybor+49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7)){
            if(Szachy::tablica[wybor+9]==0)
                atak_czarny[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]<7)
                atak_czarny[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]<7)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0)
                    atak_czarny[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]<7)
                    atak_czarny[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]<7)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0)
                        atak_czarny[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]<7)
                        atak_czarny[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]<7)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0)
                            atak_czarny[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]<7)
                            atak_czarny[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]<7)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0)
                                atak_czarny[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]<7)
                                atak_czarny[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]<7)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0)
                                    atak_czarny[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]<7)
                                    atak_czarny[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]<7)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0)
                                        atak_czarny[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]<7)
                                        atak_czarny[wybor+63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

    }
 }

void akcje::dama(bool strona, int wybor)
{
    if(!strona){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6)){
            if(Szachy::tablica[wybor-8]==0)
                atak_bialy[wybor-8]=1;
            else
                atak_bialy[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]>6) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0)
                    atak_bialy[wybor-16]=1;
                else
                    atak_bialy[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]>6) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0)
                        atak_bialy[wybor-24]=1;
                    else
                        atak_bialy[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]>6) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0)
                            atak_bialy[wybor-32]=1;
                        else
                            atak_bialy[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]>6) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0)
                                atak_bialy[wybor-40]=1;
                            else
                                atak_bialy[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]>6) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0)
                                    atak_bialy[wybor-48]=1;
                                else
                                    atak_bialy[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]>6) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0)
                                        atak_bialy[wybor-56]=1;
                                    else
                                        atak_bialy[wybor-56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6)){
            if(Szachy::tablica[wybor+8]==0)
                atak_bialy[wybor+8]=1;
            else
                atak_bialy[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]>6) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0)
                    atak_bialy[wybor+16]=1;
                else
                    atak_bialy[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]>6) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0)
                        atak_bialy[wybor+24]=1;
                    else
                        atak_bialy[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]>6) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0)
                            atak_bialy[wybor+32]=1;
                        else
                            atak_bialy[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]>6) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0)
                                atak_bialy[wybor+40]=1;
                            else
                                atak_bialy[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]>6) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0)
                                    atak_bialy[wybor+48]=1;
                                else
                                    atak_bialy[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]>6) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0)
                                        atak_bialy[wybor+56]=1;
                                    else
                                        atak_bialy[wybor+56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6)){
            if(Szachy::tablica[wybor-1]==0)
                atak_bialy[wybor-1]=1;
            else
                atak_bialy[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]>6) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0)
                    atak_bialy[wybor-2]=1;
                else
                    atak_bialy[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]>6) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0)
                        atak_bialy[wybor-3]=1;
                    else
                        atak_bialy[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]>6) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0)
                            atak_bialy[wybor-4]=1;
                        else
                            atak_bialy[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]>6) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0)
                                atak_bialy[wybor-5]=1;
                            else
                                atak_bialy[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0)
                                    atak_bialy[wybor-6]=1;
                                else
                                    atak_bialy[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0)
                                        atak_bialy[wybor-7]=1;
                                    else
                                        atak_bialy[wybor-7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6)){
            if(Szachy::tablica[wybor+1]==0)
                atak_bialy[wybor+1]=1;
            else
                atak_bialy[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]>6) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0)
                    atak_bialy[wybor+2]=1;
                else
                    atak_bialy[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]>6) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0)
                        atak_bialy[wybor+3]=1;
                    else
                        atak_bialy[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]>6) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0)
                            atak_bialy[wybor+4]=1;
                        else
                            atak_bialy[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]>6) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0)
                                atak_bialy[wybor+5]=1;
                            else
                                atak_bialy[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0)
                                    atak_bialy[wybor+6]=1;
                                else
                                    atak_bialy[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0)
                                        atak_bialy[wybor+7]=1;
                                    else
                                        atak_bialy[wybor+7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6)){
            if(Szachy::tablica[wybor-9]==0)
                atak_bialy[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]>6)
                atak_bialy[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]>6) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0)
                    atak_bialy[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]>6)
                    atak_bialy[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]>6)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0)
                        atak_bialy[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]>6)
                        atak_bialy[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]>6)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0)
                            atak_bialy[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]>6)
                            atak_bialy[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]>6)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0)
                                atak_bialy[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]>6)
                                atak_bialy[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]>6)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0)
                                    atak_bialy[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]>6)
                                    atak_bialy[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]>6)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0)
                                        atak_bialy[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]>6)
                                        atak_bialy[wybor-63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6)){
            if(Szachy::tablica[wybor-7]==0)
                atak_bialy[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]>6)
                atak_bialy[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]>6)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0)
                    atak_bialy[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]>6)
                    atak_bialy[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]>6)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0)
                        atak_bialy[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]>6)
                        atak_bialy[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]>6)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0)
                            atak_bialy[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]>6)
                            atak_bialy[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]>6)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0)
                                atak_bialy[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]>6)
                                atak_bialy[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]>6)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0)
                                    atak_bialy[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]>6)
                                    atak_bialy[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]>6)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0)
                                        atak_bialy[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]>6)
                                        atak_bialy[wybor-49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6)){
            if(Szachy::tablica[wybor+7]==0)
                atak_bialy[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]>6)
                atak_bialy[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]>6)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0)
                    atak_bialy[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]>6)
                    atak_bialy[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]>6)&& Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0)
                        atak_bialy[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]>6)
                        atak_bialy[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]>6)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0)
                            atak_bialy[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]>6)
                            atak_bialy[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]>6)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0)
                                atak_bialy[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]>6)
                                atak_bialy[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]>6)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0)
                                    atak_bialy[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]>6)
                                    atak_bialy[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]>6)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0)
                                        atak_bialy[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]>6)
                                        atak_bialy[wybor+49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6)){
            if(Szachy::tablica[wybor+9]==0)
                atak_bialy[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]>6)
                atak_bialy[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]>6)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0)
                    atak_bialy[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]>6)
                    atak_bialy[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]>6)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0)
                        atak_bialy[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]>6)
                        atak_bialy[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]>6)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0)
                            atak_bialy[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]>6)
                            atak_bialy[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]>6)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0)
                                atak_bialy[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]>6)
                                atak_bialy[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]>6)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0)
                                    atak_bialy[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]>6)
                                    atak_bialy[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]>6)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0)
                                        atak_bialy[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]>6)
                                        atak_bialy[wybor+63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }


    }
    else if(strona){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7)){
            if(Szachy::tablica[wybor-8]==0)
                atak_czarny[wybor-8]=1;
            else
                atak_czarny[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]<7) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0)
                    atak_czarny[wybor-16]=1;
                else
                    atak_czarny[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]<7) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0)
                        atak_czarny[wybor-24]=1;
                    else
                        atak_czarny[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]<7) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0)
                            atak_czarny[wybor-32]=1;
                        else
                            atak_czarny[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]<7) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0)
                                atak_czarny[wybor-40]=1;
                            else
                                atak_czarny[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]<7) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0)
                                    atak_czarny[wybor-48]=1;
                                else
                                    atak_czarny[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]<7) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0)
                                        atak_czarny[wybor-56]=1;
                                    else
                                        atak_czarny[wybor-56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //VVV
        if(wybor<56 && (Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7)){
            if(Szachy::tablica[wybor+8]==0)
                atak_czarny[wybor+8]=1;
            else
                atak_czarny[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]<7) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0)
                    atak_czarny[wybor+16]=1;
                else
                    atak_czarny[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]<7) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0)
                        atak_czarny[wybor+24]=1;
                    else
                        atak_czarny[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]<7) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0)
                            atak_czarny[wybor+32]=1;
                        else
                            atak_czarny[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]<7) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0)
                                atak_czarny[wybor+40]=1;
                            else
                                atak_czarny[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]<7) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0)
                                    atak_czarny[wybor+48]=1;
                                else
                                    atak_czarny[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]<7) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0)
                                        atak_czarny[wybor+56]=1;
                                    else
                                        atak_czarny[wybor+56]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //<<<
        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7)){
            if(Szachy::tablica[wybor-1]==0)
                atak_czarny[wybor-1]=1;
            else
                atak_czarny[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]<7) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0)
                    atak_czarny[wybor-2]=1;
                else
                    atak_czarny[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]<7) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0)
                        atak_czarny[wybor-3]=1;
                    else
                        atak_czarny[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]<7) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0)
                            atak_czarny[wybor-4]=1;
                        else
                            atak_czarny[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]<7) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0)
                                atak_czarny[wybor-5]=1;
                            else
                                atak_czarny[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0)
                                    atak_czarny[wybor-6]=1;
                                else
                                    atak_czarny[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0)
                                        atak_czarny[wybor-7]=1;
                                    else
                                        atak_czarny[wybor-7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //>>>
        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7)){
            if(Szachy::tablica[wybor+1]==0)
                atak_czarny[wybor+1]=1;
            else
                atak_czarny[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]<7) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0)
                    atak_czarny[wybor+2]=1;
                else
                    atak_czarny[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]<7) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0)
                        atak_czarny[wybor+3]=1;
                    else
                        atak_czarny[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]<7) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0)
                            atak_czarny[wybor+4]=1;
                        else
                            atak_czarny[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]<7) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0)
                                atak_czarny[wybor+5]=1;
                            else
                                atak_czarny[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0)
                                    atak_czarny[wybor+6]=1;
                                else
                                    atak_czarny[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0)
                                        atak_czarny[wybor+7]=1;
                                    else
                                        atak_czarny[wybor+7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7)){
            if(Szachy::tablica[wybor-9]==0)
                atak_czarny[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]<7)
                atak_czarny[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]<7) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0)
                    atak_czarny[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]<7)
                    atak_czarny[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]<7)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0)
                        atak_czarny[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]<7)
                        atak_czarny[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]<7)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0)
                            atak_czarny[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]<7)
                            atak_czarny[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]<7)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0)
                                atak_czarny[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]<7)
                                atak_czarny[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]<7)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0)
                                    atak_czarny[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]<7)
                                    atak_czarny[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]<7)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0)
                                        atak_czarny[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]<7)
                                        atak_czarny[wybor-63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //^^^>>>
        if(wybor>7 && wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7)){
            if(Szachy::tablica[wybor-7]==0)
                atak_czarny[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]<7)
                atak_czarny[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]<7)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0)
                    atak_czarny[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]<7)
                    atak_czarny[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]<7)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0)
                        atak_czarny[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]<7)
                        atak_czarny[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]<7)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0)
                            atak_czarny[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]<7)
                            atak_czarny[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]<7)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0)
                                atak_czarny[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]<7)
                                atak_czarny[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]<7)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0)
                                    atak_czarny[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]<7)
                                    atak_czarny[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]<7)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0)
                                        atak_czarny[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]<7)
                                        atak_czarny[wybor-49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv<<<
        if(wybor<56 && wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7)){
            if(Szachy::tablica[wybor+7]==0)
                atak_czarny[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]<7)
                atak_czarny[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]<7)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0)
                    atak_czarny[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]<7)
                    atak_czarny[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]<7) && Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0)
                        atak_czarny[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]<7)
                        atak_czarny[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]<7)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0)
                            atak_czarny[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]<7)
                            atak_czarny[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]<7)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0)
                                atak_czarny[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]<7)
                                atak_czarny[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]<7)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0)
                                    atak_czarny[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]<7)
                                    atak_czarny[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]<7)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0)
                                        atak_czarny[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]<7)
                                        atak_czarny[wybor+49]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

        //vvv>>>
        if(wybor<56 && wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7)){
            if(Szachy::tablica[wybor+9]==0)
                atak_czarny[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]<7)
                atak_czarny[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]<7)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0)
                    atak_czarny[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]<7)
                    atak_czarny[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]<7)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0)
                        atak_czarny[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]<7)
                        atak_czarny[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]<7)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0)
                            atak_czarny[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]<7)
                            atak_czarny[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]<7)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0)
                                atak_czarny[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]<7)
                                atak_czarny[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]<7)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0)
                                    atak_czarny[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]<7)
                                    atak_czarny[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]<7)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0)
                                        atak_czarny[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]<7)
                                        atak_czarny[wybor+63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

    }
}

void akcje::krol(bool strona, int wybor)
{
    if(!strona){
        if(wybor>7){
            if(Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6){
                if(Szachy::tablica[wybor-8]==0)
                    atak_bialy[wybor-8]=1;
                else if(Szachy::tablica[wybor-8]>6)
                    atak_bialy[wybor-8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6)){
                if(Szachy::tablica[wybor-9]==0)
                    atak_bialy[wybor-9]=1;
                else if(Szachy::tablica[wybor-9]>6)
                    atak_bialy[wybor-9]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6)){
                if(Szachy::tablica[wybor-7]==0)
                    atak_bialy[wybor-7]=1;
                else if(Szachy::tablica[wybor-7]>6)
                    atak_bialy[wybor-7]=2;
            }

        }

        if(wybor<56){
            if(Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6){
                if(Szachy::tablica[wybor+8]==0)
                    atak_bialy[wybor+8]=1;
                else if(Szachy::tablica[wybor+8]>6)
                    atak_bialy[wybor+8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6)){
                if(Szachy::tablica[wybor+7]==0)
                    atak_bialy[wybor+7]=1;
                else if(Szachy::tablica[wybor+7]>6)
                    atak_bialy[wybor+7]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6)){
                if(Szachy::tablica[wybor+9]==0)
                    atak_bialy[wybor+9]=1;
                else if(Szachy::tablica[wybor+9]>6)
                    atak_bialy[wybor+9]=2;
            }



        }

        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6))
        {
            if(Szachy::tablica[wybor-1]==0)
                atak_bialy[wybor-1]=1;
            else if(Szachy::tablica[wybor-1]>6)
                atak_bialy[wybor-1]=2;
        }

        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6))
        {
            if(Szachy::tablica[wybor+1]==0)
                atak_bialy[wybor+1]=1;
            else if(Szachy::tablica[wybor+1]>6)
                atak_bialy[wybor+1]=2;
        }

    }
    else if(strona){
        if(wybor>7){
            if(Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7){
                if(Szachy::tablica[wybor-8]==0)
                    atak_czarny[wybor-8]=1;
                else if(Szachy::tablica[wybor-8]<7)
                    atak_czarny[wybor-8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7)){
                if(Szachy::tablica[wybor-9]==0)
                    atak_czarny[wybor-9]=1;
                else if(Szachy::tablica[wybor-9]<7)
                    atak_czarny[wybor-9]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7)){
                if(Szachy::tablica[wybor-7]==0)
                    atak_czarny[wybor-7]=1;
                else if(Szachy::tablica[wybor-7]<7)
                    atak_czarny[wybor-7]=2;
            }

        }

        if(wybor<56){
            if(Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7){
                if(Szachy::tablica[wybor+8]==0)
                    atak_czarny[wybor+8]=1;
                else if(Szachy::tablica[wybor+8]<7)
                    atak_czarny[wybor+8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7)){
                if(Szachy::tablica[wybor+7]==0)
                    atak_czarny[wybor+7]=1;
                else if(Szachy::tablica[wybor+7]<7)
                    atak_czarny[wybor+7]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7)){
                if(Szachy::tablica[wybor+9]==0)
                    atak_czarny[wybor+9]=1;
                else if(Szachy::tablica[wybor+9]<7)
                    atak_czarny[wybor+9]=2;
            }



        }

        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7))
        {
            if(Szachy::tablica[wybor-1]==0)
                atak_czarny[wybor-1]=1;
            else if(Szachy::tablica[wybor-1]<7)
                atak_czarny[wybor-1]=2;
        }

        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7))
        {
            if(Szachy::tablica[wybor+1]==0)
                atak_czarny[wybor+1]=1;
            else if(Szachy::tablica[wybor+1]<7)
                atak_czarny[wybor+1]=2;
        }

    }
}


std::vector<int> akcje::atak_bialy(64, 0);
std::vector<int> akcje::atak_czarny(64, 0);



