#include "figury.h"

Figury::Figury() {}

void Figury::wieza(bool kolei, int wybor)
{
    if(!kolei){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6)){
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                atak[wybor-8]=1;
            else if(zasady::sprawdz_biale(wybor, wybor-8))
                atak[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]>6) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_biale(wybor, wybor-16))
                    atak[wybor-16]=1;
            else if(zasady::sprawdz_biale(wybor, wybor-16))
                    atak[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]>6) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_biale(wybor, wybor-24))
                        atak[wybor-24]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor-24))
                        atak[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]>6) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_biale(wybor, wybor-32))
                            atak[wybor-32]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor-32))
                            atak[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]>6) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_biale(wybor, wybor-40))
                                atak[wybor-40]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor-40))
                                atak[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]>6) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_biale(wybor, wybor-48))
                                    atak[wybor-48]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor-48))
                                    atak[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]>6) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_biale(wybor, wybor-56))
                                        atak[wybor-56]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor-56))
                                        atak[wybor-56]=2;

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
                atak[wybor+8]=1;
            else if(zasady::sprawdz_biale(wybor, wybor+8))
                atak[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]>6) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_biale(wybor, wybor+16))
                    atak[wybor+16]=1;
                else if(zasady::sprawdz_biale(wybor, wybor+16))
                    atak[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]>6) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_biale(wybor, wybor+24))
                        atak[wybor+24]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor+24))
                        atak[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]>6) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_biale(wybor, wybor+32))
                            atak[wybor+32]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor+32))
                            atak[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]>6) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_biale(wybor, wybor+40))
                                atak[wybor+40]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor+40))
                                atak[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]>6) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_biale(wybor, wybor+48))
                                    atak[wybor+48]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor+48))
                                    atak[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]>6) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_biale(wybor, wybor+56))
                                        atak[wybor+56]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor+56))
                                        atak[wybor+56]=2;

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
                atak[wybor-1]=1;
            else if(zasady::sprawdz_biale(wybor, wybor-1))
                atak[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]>6) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_biale(wybor, wybor-2))
                    atak[wybor-2]=1;
                else if(zasady::sprawdz_biale(wybor, wybor-2))
                    atak[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]>6) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_biale(wybor, wybor-3))
                        atak[wybor-3]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor-3))
                        atak[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]>6) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_biale(wybor, wybor-4))
                            atak[wybor-4]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor-4))
                            atak[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]>6) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_biale(wybor, wybor-5))
                                atak[wybor-5]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor-5))
                                atak[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_biale(wybor, wybor-6))
                                    atak[wybor-6]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor-6))
                                    atak[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_biale(wybor, wybor-7))
                                        atak[wybor-7]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor-7))
                                        atak[wybor-7]=2;

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
                atak[wybor+1]=1;
            else if(zasady::sprawdz_biale(wybor, wybor+1))
                atak[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]>6) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_biale(wybor, wybor+2))
                    atak[wybor+2]=1;
                else if(zasady::sprawdz_biale(wybor, wybor+2))
                    atak[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]>6) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_biale(wybor, wybor+3))
                        atak[wybor+3]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor+3))
                        atak[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]>6) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_biale(wybor, wybor+4))
                            atak[wybor+4]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor+4))
                            atak[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]>6) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_biale(wybor, wybor+5))
                                atak[wybor+5]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor+5))
                                atak[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_biale(wybor, wybor+6))
                                    atak[wybor+6]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor+6))
                                    atak[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_biale(wybor, wybor+7))
                                        atak[wybor+7]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor+7))
                                        atak[wybor+7]=2;

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
                atak[wybor-8]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor-8))
                atak[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]<7) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_czarne(wybor, wybor-16))
                    atak[wybor-16]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor-16))
                    atak[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]<7) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_czarne(wybor, wybor-24))
                        atak[wybor-24]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor-24))
                        atak[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]<7) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_czarne(wybor, wybor-32))
                            atak[wybor-32]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor-32))
                            atak[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]<7) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_czarne(wybor, wybor-40))
                                atak[wybor-40]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor-40))
                                atak[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]<7) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_czarne(wybor, wybor-48))
                                    atak[wybor-48]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor-48))
                                    atak[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]<7) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_czarne(wybor, wybor-56))
                                        atak[wybor-56]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-56))
                                        atak[wybor-56]=2;

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
                atak[wybor+8]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor+8))
                atak[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]<7) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_czarne(wybor, wybor+16))
                    atak[wybor+16]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor+16))
                    atak[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]<7) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_czarne(wybor, wybor+24))
                        atak[wybor+24]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor+24))
                        atak[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]<7) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_czarne(wybor, wybor+32))
                            atak[wybor+32]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor+32))
                            atak[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]<7) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_czarne(wybor, wybor+40))
                                atak[wybor+40]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor+40))
                                atak[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]<7) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_czarne(wybor, wybor+48))
                                    atak[wybor+48]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor+48))
                                    atak[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]<7) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_czarne(wybor, wybor+56))
                                        atak[wybor+56]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+56))
                                        atak[wybor+56]=2;

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
                atak[wybor-1]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor-1))
                atak[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]<7) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_czarne(wybor, wybor-2))
                    atak[wybor-2]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor-2))
                    atak[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]<7) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_czarne(wybor, wybor-3))
                        atak[wybor-3]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor-3))
                        atak[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]<7) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_czarne(wybor, wybor-4))
                            atak[wybor-4]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor-4))
                            atak[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]<7) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_czarne(wybor, wybor-5))
                                atak[wybor-5]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor-5))
                                atak[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_czarne(wybor, wybor-6))
                                    atak[wybor-6]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor-6))
                                    atak[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_czarne(wybor, wybor-7))
                                        atak[wybor-7]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-7))
                                        atak[wybor-7]=2;

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
                atak[wybor+1]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor+1))
                atak[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]<7) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_czarne(wybor, wybor+2))
                    atak[wybor+2]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor+2))
                    atak[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]<7) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_czarne(wybor, wybor+3))
                        atak[wybor+3]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor+3))
                        atak[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]<7) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_czarne(wybor, wybor+4))
                            atak[wybor+4]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor+4))
                            atak[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]<7) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_czarne(wybor, wybor+5))
                                atak[wybor+5]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor+5))
                                atak[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_czarne(wybor, wybor+6))
                                    atak[wybor+6]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor+6))
                                    atak[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_czarne(wybor, wybor+7))
                                        atak[wybor+7]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+7))
                                        atak[wybor+7]=2;

                                }
                            }
                        }
                    }
                }
            }
        }

    }
}

void Figury::kon(bool kolei, int wybor)
{
    if(!kolei){
        if(wybor>15){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor-17]==0 || Szachy::tablica[wybor-17]>6) && zasady::sprawdz_biale(wybor, wybor-17)){
                if(Szachy::tablica[wybor-17]==0)
                    atak[wybor-17]=1;
                else if(Szachy::tablica[wybor-17]>6)
                    atak[wybor-17]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor-15]==0 || Szachy::tablica[wybor-15]>6) && zasady::sprawdz_biale(wybor, wybor-15)){
                if(Szachy::tablica[wybor-15]==0)
                    atak[wybor-15]=1;
                else if(Szachy::tablica[wybor-15]>6)
                    atak[wybor-15]=2;
            }
        }

        if(wybor<48){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor+15]==0 || Szachy::tablica[wybor+15]>6) && zasady::sprawdz_biale(wybor, wybor+15)){
                if(Szachy::tablica[wybor+15]==0)
                    atak[wybor+15]=1;
                else if(Szachy::tablica[wybor+15]>6)
                    atak[wybor+15]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor+17]==0 || Szachy::tablica[wybor+17]>6) && zasady::sprawdz_biale(wybor, wybor+17)){
                if(Szachy::tablica[wybor+17]==0)
                    atak[wybor+17]=1;
                else if(Szachy::tablica[wybor+17]>6)
                    atak[wybor+17]=2;
            }
        }

        if(wybor%8>1){
            if(wybor>8 && (Szachy::tablica[wybor-10]==0 || Szachy::tablica[wybor-10]>6) && zasady::sprawdz_biale(wybor, wybor-10)){
                if(Szachy::tablica[wybor-10]==0)
                    atak[wybor-10]=1;
                else if(Szachy::tablica[wybor-10]>6)
                    atak[wybor-10]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && zasady::sprawdz_biale(wybor, wybor+6)){
                if(Szachy::tablica[wybor+6]==0)
                    atak[wybor+6]=1;
                else if(Szachy::tablica[wybor+6]>6)
                    atak[wybor+6]=2;
            }
        }

        if(wybor%8<6){
            if(wybor>8 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && zasady::sprawdz_biale(wybor, wybor-6)){
                if(Szachy::tablica[wybor-6]==0)
                    atak[wybor-6]=1;
                else if(Szachy::tablica[wybor-6]>6)
                    atak[wybor-6]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+10]==0 || Szachy::tablica[wybor+10]>6) && zasady::sprawdz_biale(wybor, wybor+10)){
                if(Szachy::tablica[wybor+10]==0)
                    atak[wybor+10]=1;
                else if(Szachy::tablica[wybor+10]>6)
                    atak[wybor+10]=2;
            }
        }

    }
    else if(kolei){
        if(wybor>15){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor-17]==0 || Szachy::tablica[wybor-17]<7) && zasady::sprawdz_czarne(wybor, wybor-17)){
                if(Szachy::tablica[wybor-17]==0)
                    atak[wybor-17]=1;
                else if(Szachy::tablica[wybor-17]<7)
                    atak[wybor-17]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor-15]==0 || Szachy::tablica[wybor-15]<7) && zasady::sprawdz_czarne(wybor, wybor-15)){
                if(Szachy::tablica[wybor-15]==0)
                    atak[wybor-15]=1;
                else if(Szachy::tablica[wybor-15]<7)
                    atak[wybor-15]=2;
            }
        }

        if(wybor<48){
            if(wybor%8!=0 &&  (Szachy::tablica[wybor+15]==0 || Szachy::tablica[wybor+15]<7) && zasady::sprawdz_czarne(wybor, wybor+15)){
                if(Szachy::tablica[wybor+15]==0)
                    atak[wybor+15]=1;
                else if(Szachy::tablica[wybor+15]<7)
                    atak[wybor+15]=2;
            }

            if(wybor%8!=7 &&  (Szachy::tablica[wybor+17]==0 || Szachy::tablica[wybor+17]<7) && zasady::sprawdz_czarne(wybor, wybor+17)){
                if(Szachy::tablica[wybor+17]==0)
                    atak[wybor+17]=1;
                else if(Szachy::tablica[wybor+17]<7)
                    atak[wybor+17]=2;
            }
        }

        if(wybor%8>1){
            if(wybor>8 && (Szachy::tablica[wybor-10]==0 || Szachy::tablica[wybor-10]<7) && zasady::sprawdz_czarne(wybor, wybor-10)){
                if(Szachy::tablica[wybor-10]==0)
                    atak[wybor-10]=1;
                else if(Szachy::tablica[wybor-10]<7)
                    atak[wybor-10]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && zasady::sprawdz_czarne(wybor, wybor+6)){
                if(Szachy::tablica[wybor+6]==0)
                    atak[wybor+6]=1;
                else if(Szachy::tablica[wybor+6]<7)
                    atak[wybor+6]=2;
            }
        }

        if(wybor%8<6){
            if(wybor>8 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && zasady::sprawdz_czarne(wybor, wybor-6)){
                if(Szachy::tablica[wybor-6]==0)
                    atak[wybor-6]=1;
                else if(Szachy::tablica[wybor-6]<7)
                    atak[wybor-6]=2;
            }

            if(wybor<56 && (Szachy::tablica[wybor+10]==0 || Szachy::tablica[wybor+10]<7) && zasady::sprawdz_czarne(wybor, wybor+10)){
                if(Szachy::tablica[wybor+10]==0)
                    atak[wybor+10]=1;
                else if(Szachy::tablica[wybor+10])
                    atak[wybor+10]=2;
            }
        }

    }
}

void Figury::laufer(bool kolei, int wybor)
{
    if(!kolei){
        //^^^<<<
        if(wybor>7 && wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6)){
            if(Szachy::tablica[wybor-9]==0 && zasady::sprawdz_biale(wybor, wybor-9))
                atak[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]>6 && zasady::sprawdz_biale(wybor, wybor-9))
                atak[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]>6) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_biale(wybor, wybor-18))
                    atak[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]>6 && zasady::sprawdz_biale(wybor, wybor-18))
                    atak[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]>6)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_biale(wybor, wybor-27))
                        atak[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]>6 && zasady::sprawdz_biale(wybor, wybor-27))
                        atak[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]>6)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_biale(wybor, wybor-36))
                            atak[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]>6 && zasady::sprawdz_biale(wybor, wybor-36))
                            atak[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]>6)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_biale(wybor, wybor-45))
                                atak[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]>6 && zasady::sprawdz_biale(wybor, wybor-45))
                                atak[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]>6)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_biale(wybor, wybor-54))
                                    atak[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]>6 && zasady::sprawdz_biale(wybor, wybor-54))
                                    atak[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]>6)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_biale(wybor, wybor-63))
                                        atak[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]>6 && zasady::sprawdz_biale(wybor, wybor-63))
                                        atak[wybor-63]=2;
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
                atak[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]>6 && zasady::sprawdz_biale(wybor, wybor-7))
                atak[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]>6)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_biale(wybor, wybor-14))
                    atak[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]>6 && zasady::sprawdz_biale(wybor, wybor-14))
                    atak[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]>6)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_biale(wybor, wybor-21))
                        atak[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]>6 && zasady::sprawdz_biale(wybor, wybor-21))
                        atak[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]>6)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_biale(wybor, wybor-28))
                            atak[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]>6 && zasady::sprawdz_biale(wybor, wybor-28))
                            atak[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]>6)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_biale(wybor, wybor-35))
                                atak[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]>6 && zasady::sprawdz_biale(wybor, wybor-35))
                                atak[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]>6)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_biale(wybor, wybor-42))
                                    atak[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]>6 && zasady::sprawdz_biale(wybor, wybor-42))
                                    atak[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]>6)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_biale(wybor, wybor-49))
                                        atak[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]>6 && zasady::sprawdz_biale(wybor, wybor-49))
                                        atak[wybor-49]=2;
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
                atak[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]>6 && zasady::sprawdz_biale(wybor, wybor+7))
                atak[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]>6)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_biale(wybor, wybor+14))
                    atak[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]>6 && zasady::sprawdz_biale(wybor, wybor+14))
                    atak[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]>6)&& Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_biale(wybor, wybor+21))
                        atak[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]>6 && zasady::sprawdz_biale(wybor, wybor+21))
                        atak[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]>6)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_biale(wybor, wybor+28))
                            atak[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]>6 && zasady::sprawdz_biale(wybor, wybor+28))
                            atak[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]>6)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_biale(wybor, wybor+35))
                                atak[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]>6 && zasady::sprawdz_biale(wybor, wybor+35))
                                atak[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]>6)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_biale(wybor, wybor+42))
                                    atak[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]>6 && zasady::sprawdz_biale(wybor, wybor+42))
                                    atak[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]>6)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_biale(wybor, wybor+49))
                                        atak[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]>6 && zasady::sprawdz_biale(wybor, wybor+49))
                                        atak[wybor+49]=2;
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
                    atak[wybor+9]=1;
                else if(Szachy::tablica[wybor+9]>6 && zasady::sprawdz_biale(wybor, wybor+9))
                    atak[wybor+9]=2;

                if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]>6)&& Szachy::tablica[wybor+9]==0){
                    if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_biale(wybor, wybor+18))
                        atak[wybor+18]=1;
                    else if(Szachy::tablica[wybor+18]>6 && zasady::sprawdz_biale(wybor, wybor+18))
                        atak[wybor+18]=2;

                    if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]>6)&& Szachy::tablica[wybor+18]==0){
                        if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_biale(wybor, wybor+27))
                            atak[wybor+27]=1;
                        else if(Szachy::tablica[wybor+27]>6 && zasady::sprawdz_biale(wybor, wybor+27))
                            atak[wybor+27]=2;

                        if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]>6)&& Szachy::tablica[wybor+27]==0){
                            if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_biale(wybor, wybor+36))
                                atak[wybor+36]=1;
                            else if(Szachy::tablica[wybor+36]>6 && zasady::sprawdz_biale(wybor, wybor+36))
                                atak[wybor+36]=2;

                            if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]>6)&& Szachy::tablica[wybor+36]==0){
                                if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_biale(wybor, wybor+45))
                                    atak[wybor+45]=1;
                                else if(Szachy::tablica[wybor+45]>6 && zasady::sprawdz_biale(wybor, wybor+45))
                                    atak[wybor+45]=2;

                                if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]>6)&& Szachy::tablica[wybor+45]==0){
                                    if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_biale(wybor, wybor+54))
                                        atak[wybor+54]=1;
                                    else if(Szachy::tablica[wybor+54]>6 && zasady::sprawdz_biale(wybor, wybor+54))
                                        atak[wybor+54]=2;

                                    if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]>6)&& Szachy::tablica[wybor+54]==0){
                                        if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_biale(wybor, wybor+63))
                                            atak[wybor+63]=1;
                                        else if(Szachy::tablica[wybor+63]>6 && zasady::sprawdz_biale(wybor, wybor+63))
                                            atak[wybor+63]=2;
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
                atak[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]<7 && zasady::sprawdz_czarne(wybor, wybor-9))
                atak[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]<7) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_czarne(wybor, wybor-18))
                    atak[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]<7 && zasady::sprawdz_czarne(wybor, wybor-18))
                    atak[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]<7)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_czarne(wybor, wybor-27))
                        atak[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]<7 && zasady::sprawdz_czarne(wybor, wybor-27))
                        atak[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]<7)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_czarne(wybor, wybor-36))
                            atak[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]<7 && zasady::sprawdz_czarne(wybor, wybor-36))
                            atak[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]<7)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_czarne(wybor, wybor-45))
                                atak[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]<7 && zasady::sprawdz_czarne(wybor, wybor-45))
                                atak[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]<7)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    atak[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]<7 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    atak[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]<7)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        atak[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]<7 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        atak[wybor-63]=2;
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
                atak[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]<7 && zasady::sprawdz_czarne(wybor, wybor-7))
                atak[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]<7)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_czarne(wybor, wybor-14))
                    atak[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]<7 && zasady::sprawdz_czarne(wybor, wybor-14))
                    atak[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]<7)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_czarne(wybor, wybor-21))
                        atak[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]<7 && zasady::sprawdz_czarne(wybor, wybor-21))
                        atak[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]<7)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_czarne(wybor, wybor-28))
                            atak[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]<7 && zasady::sprawdz_czarne(wybor, wybor-28))
                            atak[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]<7)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_czarne(wybor, wybor-35))
                                atak[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]<7 && zasady::sprawdz_czarne(wybor, wybor-35))
                                atak[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]<7)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    atak[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]<7 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    atak[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]<7)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        atak[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]<7 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        atak[wybor-49]=2;
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
                atak[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                atak[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]<7)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_czarne(wybor, wybor+14))
                    atak[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]<7 && zasady::sprawdz_czarne(wybor, wybor+14))
                    atak[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]<7) && Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_czarne(wybor, wybor+21))
                        atak[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]<7 && zasady::sprawdz_czarne(wybor, wybor+21))
                        atak[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]<7)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_czarne(wybor, wybor+28))
                            atak[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]<7 && zasady::sprawdz_czarne(wybor, wybor+28))
                            atak[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]<7)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_czarne(wybor, wybor+35))
                                atak[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]<7 && zasady::sprawdz_czarne(wybor, wybor+35))
                                atak[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]<7)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    atak[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]<7 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    atak[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]<7)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        atak[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]<7 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        atak[wybor+49]=2;
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
                atak[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                atak[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]<7)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_czarne(wybor, wybor+18))
                    atak[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]<7 && zasady::sprawdz_czarne(wybor, wybor+18))
                    atak[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]<7)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_czarne(wybor, wybor+27))
                        atak[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]<7 && zasady::sprawdz_czarne(wybor, wybor+27))
                        atak[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]<7)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_czarne(wybor, wybor+36))
                            atak[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]<7 && zasady::sprawdz_czarne(wybor, wybor+36))
                            atak[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]<7)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_czarne(wybor, wybor+45))
                                atak[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]<7 && zasady::sprawdz_czarne(wybor, wybor+45))
                                atak[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]<7)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    atak[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]<7 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    atak[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]<7)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        atak[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]<7 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        atak[wybor+63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }

    }
}

void Figury::dama(bool kolei, int wybor)
{
    if(!kolei){
        //^^^
        if(wybor>7 && (Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6)){
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                atak[wybor-8]=1;
            else if(zasady::sprawdz_biale(wybor, wybor-8))
                atak[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]>6) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_biale(wybor, wybor-16))
                    atak[wybor-16]=1;
                else if(zasady::sprawdz_biale(wybor, wybor-16))
                    atak[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]>6) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_biale(wybor, wybor-24))
                        atak[wybor-24]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor-24))
                        atak[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]>6) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_biale(wybor, wybor-32))
                            atak[wybor-32]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor-32))
                            atak[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]>6) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_biale(wybor, wybor-40))
                                atak[wybor-40]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor-40))
                                atak[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]>6) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_biale(wybor, wybor-48))
                                    atak[wybor-48]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor-48))
                                    atak[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]>6) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_biale(wybor, wybor-56))
                                        atak[wybor-56]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor-56))
                                        atak[wybor-56]=2;

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
                atak[wybor+8]=1;
            else if(zasady::sprawdz_biale(wybor, wybor+8))
                atak[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]>6) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_biale(wybor, wybor+16))
                    atak[wybor+16]=1;
                else if(zasady::sprawdz_biale(wybor, wybor+16))
                    atak[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]>6) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_biale(wybor, wybor+24))
                        atak[wybor+24]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor+24))
                        atak[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]>6) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_biale(wybor, wybor+32))
                            atak[wybor+32]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor+32))
                            atak[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]>6) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_biale(wybor, wybor+40))
                                atak[wybor+40]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor+40))
                                atak[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]>6) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_biale(wybor, wybor+48))
                                    atak[wybor+48]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor+48))
                                    atak[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]>6) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_biale(wybor, wybor+56))
                                        atak[wybor+56]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor+56))
                                        atak[wybor+56]=2;

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
                atak[wybor-1]=1;
            else if(zasady::sprawdz_biale(wybor, wybor-1))
                atak[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]>6) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_biale(wybor, wybor-2))
                    atak[wybor-2]=1;
                else if(zasady::sprawdz_biale(wybor, wybor-2))
                    atak[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]>6) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_biale(wybor, wybor-3))
                        atak[wybor-3]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor-3))
                        atak[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]>6) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_biale(wybor, wybor-4))
                            atak[wybor-4]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor-4))
                            atak[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]>6) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_biale(wybor, wybor-5))
                                atak[wybor-5]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor-5))
                                atak[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]>6) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_biale(wybor, wybor-6))
                                    atak[wybor-6]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor-6))
                                    atak[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_biale(wybor, wybor-7))
                                        atak[wybor-7]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor-7))
                                        atak[wybor-7]=2;

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
                atak[wybor+1]=1;
            else if(zasady::sprawdz_biale(wybor, wybor+1))
                atak[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]>6) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_biale(wybor, wybor+2))
                    atak[wybor+2]=1;
                else if(zasady::sprawdz_biale(wybor, wybor+2))
                    atak[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]>6) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_biale(wybor, wybor+3))
                        atak[wybor+3]=1;
                    else if(zasady::sprawdz_biale(wybor, wybor+3))
                        atak[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]>6) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_biale(wybor, wybor+4))
                            atak[wybor+4]=1;
                        else if(zasady::sprawdz_biale(wybor, wybor+4))
                            atak[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]>6) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_biale(wybor, wybor+5))
                                atak[wybor+5]=1;
                            else if(zasady::sprawdz_biale(wybor, wybor+5))
                                atak[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]>6) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_biale(wybor, wybor+6))
                                    atak[wybor+6]=1;
                                else if(zasady::sprawdz_biale(wybor, wybor+6))
                                    atak[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_biale(wybor, wybor+7))
                                        atak[wybor+7]=1;
                                    else if(zasady::sprawdz_biale(wybor, wybor+7))
                                        atak[wybor+7]=2;

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
                atak[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]>6 && zasady::sprawdz_biale(wybor, wybor-9))
                atak[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]>6) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_biale(wybor, wybor-18))
                    atak[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]>6 && zasady::sprawdz_biale(wybor, wybor-18))
                    atak[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]>6)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_biale(wybor, wybor-27))
                        atak[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]>6 && zasady::sprawdz_biale(wybor, wybor-27))
                        atak[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]>6)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_biale(wybor, wybor-36))
                            atak[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]>6 && zasady::sprawdz_biale(wybor, wybor-36))
                            atak[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]>6)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_biale(wybor, wybor-45))
                                atak[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]>6 && zasady::sprawdz_biale(wybor, wybor-45))
                                atak[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]>6)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_biale(wybor, wybor-54))
                                    atak[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]>6 && zasady::sprawdz_biale(wybor, wybor-54))
                                    atak[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]>6)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_biale(wybor, wybor-63))
                                        atak[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]>6 && zasady::sprawdz_biale(wybor, wybor-63))
                                        atak[wybor-63]=2;
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
                atak[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]>6 && zasady::sprawdz_biale(wybor, wybor-7))
                atak[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]>6)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_biale(wybor, wybor-14))
                    atak[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]>6 && zasady::sprawdz_biale(wybor, wybor-14))
                    atak[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]>6)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_biale(wybor, wybor-21))
                        atak[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]>6 && zasady::sprawdz_biale(wybor, wybor-21))
                        atak[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]>6)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_biale(wybor, wybor-28))
                            atak[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]>6 && zasady::sprawdz_biale(wybor, wybor-28))
                            atak[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]>6)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_biale(wybor, wybor-35))
                                atak[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]>6 && zasady::sprawdz_biale(wybor, wybor-35))
                                atak[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]>6)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_biale(wybor, wybor-42))
                                    atak[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]>6 && zasady::sprawdz_biale(wybor, wybor-42))
                                    atak[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]>6)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_biale(wybor, wybor-49))
                                        atak[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]>6 && zasady::sprawdz_biale(wybor, wybor-49))
                                        atak[wybor-49]=2;
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
                atak[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]>6 && zasady::sprawdz_biale(wybor, wybor+7))
                atak[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]>6)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_biale(wybor, wybor+14))
                    atak[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]>6 && zasady::sprawdz_biale(wybor, wybor+14))
                    atak[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]>6)&& Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_biale(wybor, wybor+21))
                        atak[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]>6 && zasady::sprawdz_biale(wybor, wybor+21))
                        atak[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]>6)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_biale(wybor, wybor+28))
                            atak[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]>6 && zasady::sprawdz_biale(wybor, wybor+28))
                            atak[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]>6)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_biale(wybor, wybor+35))
                                atak[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]>6 && zasady::sprawdz_biale(wybor, wybor+35))
                                atak[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]>6)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_biale(wybor, wybor+42))
                                    atak[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]>6 && zasady::sprawdz_biale(wybor, wybor+42))
                                    atak[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]>6)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_biale(wybor, wybor+49))
                                        atak[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]>6 && zasady::sprawdz_biale(wybor, wybor+49))
                                        atak[wybor+49]=2;
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
                atak[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]>6 && zasady::sprawdz_biale(wybor, wybor+9))
                atak[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]>6)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_biale(wybor, wybor+18))
                    atak[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]>6 && zasady::sprawdz_biale(wybor, wybor+18))
                    atak[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]>6)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_biale(wybor, wybor+27))
                        atak[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]>6 && zasady::sprawdz_biale(wybor, wybor+27))
                        atak[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]>6)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_biale(wybor, wybor+36))
                            atak[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]>6 && zasady::sprawdz_biale(wybor, wybor+36))
                            atak[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]>6)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_biale(wybor, wybor+45))
                                atak[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]>6 && zasady::sprawdz_biale(wybor, wybor+45))
                                atak[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]>6)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_biale(wybor, wybor+54))
                                    atak[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]>6 && zasady::sprawdz_biale(wybor, wybor+54))
                                    atak[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]>6)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_biale(wybor, wybor+63))
                                        atak[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]>6 && zasady::sprawdz_biale(wybor, wybor+63))
                                        atak[wybor+63]=2;
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
                atak[wybor-8]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor-8))
                atak[wybor-8]=2;

            if(wybor>15 && (Szachy::tablica[wybor-16]==0 || Szachy::tablica[wybor-16]<7) && Szachy::tablica[wybor-8]==0){
                if(Szachy::tablica[wybor-16]==0 && zasady::sprawdz_czarne(wybor, wybor-16))
                    atak[wybor-16]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor-16))
                    atak[wybor-16]=2;

                if(wybor>23 && (Szachy::tablica[wybor-24]==0 || Szachy::tablica[wybor-24]<7) && Szachy::tablica[wybor-16]==0){
                    if(Szachy::tablica[wybor-24]==0 && zasady::sprawdz_czarne(wybor, wybor-24))
                        atak[wybor-24]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor-24))
                        atak[wybor-24]=2;

                    if(wybor>31 && (Szachy::tablica[wybor-32]==0 || Szachy::tablica[wybor-32]<7) && Szachy::tablica[wybor-24]==0){
                        if(Szachy::tablica[wybor-32]==0 && zasady::sprawdz_czarne(wybor, wybor-32))
                            atak[wybor-32]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor-32))
                            atak[wybor-32]=2;

                        if(wybor>39 && (Szachy::tablica[wybor-40]==0 || Szachy::tablica[wybor-40]<7) && Szachy::tablica[wybor-32]==0){
                            if(Szachy::tablica[wybor-40]==0 && zasady::sprawdz_czarne(wybor, wybor-40))
                                atak[wybor-40]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor-40))
                                atak[wybor-40]=2;

                            if(wybor>47 && (Szachy::tablica[wybor-48]==0 || Szachy::tablica[wybor-48]<7) && Szachy::tablica[wybor-40]==0){
                                if(Szachy::tablica[wybor-48]==0 && zasady::sprawdz_czarne(wybor, wybor-48))
                                    atak[wybor-48]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor-48))
                                    atak[wybor-48]=2;

                                if(wybor>55 && (Szachy::tablica[wybor-56]==0 || Szachy::tablica[wybor-56]<7) && Szachy::tablica[wybor-48]==0){
                                    if(Szachy::tablica[wybor-56]==0 && zasady::sprawdz_czarne(wybor, wybor-56))
                                        atak[wybor-56]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-56))
                                        atak[wybor-56]=2;

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
                atak[wybor+8]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor+8))
                atak[wybor+8]=2;

            if(wybor<48 && (Szachy::tablica[wybor+16]==0 || Szachy::tablica[wybor+16]<7) && Szachy::tablica[wybor+8]==0){
                if(Szachy::tablica[wybor+16]==0 && zasady::sprawdz_czarne(wybor, wybor+16))
                    atak[wybor+16]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor+16))
                    atak[wybor+16]=2;

                if(wybor<40 && (Szachy::tablica[wybor+24]==0 || Szachy::tablica[wybor+24]<7) && Szachy::tablica[wybor+16]==0){
                    if(Szachy::tablica[wybor+24]==0 && zasady::sprawdz_czarne(wybor, wybor+24))
                        atak[wybor+24]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor+24))
                        atak[wybor+24]=2;

                    if(wybor<32 && (Szachy::tablica[wybor+32]==0 || Szachy::tablica[wybor+32]<7) && Szachy::tablica[wybor+24]==0){
                        if(Szachy::tablica[wybor+32]==0 && zasady::sprawdz_czarne(wybor, wybor+32))
                            atak[wybor+32]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor+32))
                            atak[wybor+32]=2;

                        if(wybor<24 && (Szachy::tablica[wybor+40]==0 || Szachy::tablica[wybor+40]<7) && Szachy::tablica[wybor+32]==0){
                            if(Szachy::tablica[wybor+40]==0 && zasady::sprawdz_czarne(wybor, wybor+40))
                                atak[wybor+40]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor+40))
                                atak[wybor+40]=2;

                            if(wybor<16 && (Szachy::tablica[wybor+48]==0 || Szachy::tablica[wybor+48]<7) && Szachy::tablica[wybor+40]==0){
                                if(Szachy::tablica[wybor+48]==0 && zasady::sprawdz_czarne(wybor, wybor+48))
                                    atak[wybor+48]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor+48))
                                    atak[wybor+48]=2;

                                if(wybor<8 && (Szachy::tablica[wybor+56]==0 || Szachy::tablica[wybor+56]<7) && Szachy::tablica[wybor+48]==0){
                                    if(Szachy::tablica[wybor+56]==0 && zasady::sprawdz_czarne(wybor, wybor+56))
                                        atak[wybor+56]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+56))
                                        atak[wybor+56]=2;

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
                atak[wybor-1]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor-1))
                atak[wybor-1]=2;

            if(wybor%8!=1 && (Szachy::tablica[wybor-2]==0 || Szachy::tablica[wybor-2]<7) && Szachy::tablica[wybor-1]==0){
                if(Szachy::tablica[wybor-2]==0 && zasady::sprawdz_czarne(wybor, wybor-2))
                    atak[wybor-2]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor-2))
                    atak[wybor-2]=2;

                if(wybor%8!=2 && (Szachy::tablica[wybor-3]==0 || Szachy::tablica[wybor-3]<7) && Szachy::tablica[wybor-2]==0){
                    if(Szachy::tablica[wybor-3]==0 && zasady::sprawdz_czarne(wybor, wybor-3))
                        atak[wybor-3]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor-3))
                        atak[wybor-3]=2;

                    if(wybor%8!=3 && (Szachy::tablica[wybor-4]==0 || Szachy::tablica[wybor-4]<7) && Szachy::tablica[wybor-3]==0){
                        if(Szachy::tablica[wybor-4]==0 && zasady::sprawdz_czarne(wybor, wybor-4))
                            atak[wybor-4]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor-4))
                            atak[wybor-4]=2;

                        if(wybor%8!=4 && (Szachy::tablica[wybor-5]==0 || Szachy::tablica[wybor-5]<7) && Szachy::tablica[wybor-4]==0){
                            if(Szachy::tablica[wybor-5]==0 && zasady::sprawdz_czarne(wybor, wybor-5))
                                atak[wybor-5]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor-5))
                                atak[wybor-5]=2;

                            if(wybor%8!=5 && (Szachy::tablica[wybor-6]==0 || Szachy::tablica[wybor-6]<7) && Szachy::tablica[wybor-5]==0){
                                if(Szachy::tablica[wybor-6]==0 && zasady::sprawdz_czarne(wybor, wybor-6))
                                    atak[wybor-6]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor-6))
                                    atak[wybor-6]=2;

                                if(wybor%8!=6 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && Szachy::tablica[wybor-6]==0){
                                    if(Szachy::tablica[wybor-7]==0 && zasady::sprawdz_czarne(wybor, wybor-7))
                                        atak[wybor-7]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor-7))
                                        atak[wybor-7]=2;

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
                atak[wybor+1]=1;
            else if(zasady::sprawdz_czarne(wybor, wybor+1))
                atak[wybor+1]=2;

            if(wybor%8!=6 && (Szachy::tablica[wybor+2]==0 || Szachy::tablica[wybor+2]<7) && Szachy::tablica[wybor+1]==0){
                if(Szachy::tablica[wybor+2]==0 && zasady::sprawdz_czarne(wybor, wybor+2))
                    atak[wybor+2]=1;
                else if(zasady::sprawdz_czarne(wybor, wybor+2))
                    atak[wybor+2]=2;

                if(wybor%8!=5 && (Szachy::tablica[wybor+3]==0 || Szachy::tablica[wybor+3]<7) && Szachy::tablica[wybor+2]==0){
                    if(Szachy::tablica[wybor+3]==0 && zasady::sprawdz_czarne(wybor, wybor+3))
                        atak[wybor+3]=1;
                    else if(zasady::sprawdz_czarne(wybor, wybor+3))
                        atak[wybor+3]=2;

                    if(wybor%8!=4 && (Szachy::tablica[wybor+4]==0 || Szachy::tablica[wybor+4]<7) && Szachy::tablica[wybor+3]==0){
                        if(Szachy::tablica[wybor+4]==0 && zasady::sprawdz_czarne(wybor, wybor+4))
                            atak[wybor+4]=1;
                        else if(zasady::sprawdz_czarne(wybor, wybor+4))
                            atak[wybor+4]=2;

                        if(wybor%8!=3 && (Szachy::tablica[wybor+5]==0 || Szachy::tablica[wybor+5]<7) && Szachy::tablica[wybor+4]==0){
                            if(Szachy::tablica[wybor+5]==0 && zasady::sprawdz_czarne(wybor, wybor+5))
                                atak[wybor+5]=1;
                            else if(zasady::sprawdz_czarne(wybor, wybor+5))
                                atak[wybor+5]=2;

                            if(wybor%8!=2 && (Szachy::tablica[wybor+6]==0 || Szachy::tablica[wybor+6]<7) && Szachy::tablica[wybor+5]==0){
                                if(Szachy::tablica[wybor+6]==0 && zasady::sprawdz_czarne(wybor, wybor+6))
                                    atak[wybor+6]=1;
                                else if(zasady::sprawdz_czarne(wybor, wybor+6))
                                    atak[wybor+6]=2;

                                if(wybor%8!=1 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && Szachy::tablica[wybor+6]==0){
                                    if(Szachy::tablica[wybor+7]==0 && zasady::sprawdz_czarne(wybor, wybor+7))
                                        atak[wybor+7]=1;
                                    else if(zasady::sprawdz_czarne(wybor, wybor+7))
                                        atak[wybor+7]=2;

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
                atak[wybor-9]=1;
            else if(Szachy::tablica[wybor-9]<7 && zasady::sprawdz_czarne(wybor, wybor-9))
                atak[wybor-9]=2;

            if(wybor>15 && wybor%8!=1 && (Szachy::tablica[wybor-18]==0 || Szachy::tablica[wybor-18]<7) && Szachy::tablica[wybor-9]==0){
                if(Szachy::tablica[wybor-18]==0 && zasady::sprawdz_czarne(wybor, wybor-18))
                    atak[wybor-18]=1;
                else if(Szachy::tablica[wybor-18]<7 && zasady::sprawdz_czarne(wybor, wybor-18))
                    atak[wybor-18]=2;

                if(wybor>23 && wybor%8!=2 && (Szachy::tablica[wybor-27]==0 || Szachy::tablica[wybor-27]<7)&& Szachy::tablica[wybor-18]==0){
                    if(Szachy::tablica[wybor-27]==0 && zasady::sprawdz_czarne(wybor, wybor-27))
                        atak[wybor-27]=1;
                    else if(Szachy::tablica[wybor-27]<7 && zasady::sprawdz_czarne(wybor, wybor-27))
                        atak[wybor-27]=2;

                    if(wybor>31 && wybor%8!=3 && (Szachy::tablica[wybor-36]==0 || Szachy::tablica[wybor-36]<7)&& Szachy::tablica[wybor-27]==0){
                        if(Szachy::tablica[wybor-36]==0 && zasady::sprawdz_czarne(wybor, wybor-36))
                            atak[wybor-36]=1;
                        else if(Szachy::tablica[wybor-36]<7 && zasady::sprawdz_czarne(wybor, wybor-36))
                            atak[wybor-36]=2;

                        if(wybor>39 && wybor%8!=4 && (Szachy::tablica[wybor-45]==0 || Szachy::tablica[wybor-45]<7)&& Szachy::tablica[wybor-36]==0){
                            if(Szachy::tablica[wybor-45]==0 && zasady::sprawdz_czarne(wybor, wybor-45))
                                atak[wybor-45]=1;
                            else if(Szachy::tablica[wybor-45]<7 && zasady::sprawdz_czarne(wybor, wybor-45))
                                atak[wybor-45]=2;

                            if(wybor>47 && wybor%8!=5 && (Szachy::tablica[wybor-54]==0 || Szachy::tablica[wybor-54]<7)&& Szachy::tablica[wybor-45]==0){
                                if(Szachy::tablica[wybor-54]==0 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    atak[wybor-54]=1;
                                else if(Szachy::tablica[wybor-54]<7 && zasady::sprawdz_czarne(wybor, wybor-54))
                                    atak[wybor-54]=2;

                                if(wybor>55 && wybor%8!=6 && (Szachy::tablica[wybor-63]==0 || Szachy::tablica[wybor-63]<7)&& Szachy::tablica[wybor-54]==0){
                                    if(Szachy::tablica[wybor-63]==0 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        atak[wybor-63]=1;
                                    else if(Szachy::tablica[wybor-63]<7 && zasady::sprawdz_czarne(wybor, wybor-63))
                                        atak[wybor-63]=2;
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
                atak[wybor-7]=1;
            else if(Szachy::tablica[wybor-7]<7 && zasady::sprawdz_czarne(wybor, wybor-7))
                atak[wybor-7]=2;

            if(wybor>15 && wybor%8!=6 && (Szachy::tablica[wybor-14]==0 || Szachy::tablica[wybor-14]<7)&& Szachy::tablica[wybor-7]==0){
                if(Szachy::tablica[wybor-14]==0 && zasady::sprawdz_czarne(wybor, wybor-14))
                    atak[wybor-14]=1;
                else if(Szachy::tablica[wybor-14]<7 && zasady::sprawdz_czarne(wybor, wybor-14))
                    atak[wybor-14]=2;

                if(wybor>23 && wybor%8!=5 && (Szachy::tablica[wybor-21]==0 || Szachy::tablica[wybor-21]<7)&& Szachy::tablica[wybor-14]==0){
                    if(Szachy::tablica[wybor-21]==0 && zasady::sprawdz_czarne(wybor, wybor-21))
                        atak[wybor-21]=1;
                    else if(Szachy::tablica[wybor-21]<7 && zasady::sprawdz_czarne(wybor, wybor-21))
                        atak[wybor-21]=2;

                    if(wybor>31 && wybor%8!=4 && (Szachy::tablica[wybor-28]==0 || Szachy::tablica[wybor-28]<7)&& Szachy::tablica[wybor-21]==0){
                        if(Szachy::tablica[wybor-28]==0 && zasady::sprawdz_czarne(wybor, wybor-28))
                            atak[wybor-28]=1;
                        else if(Szachy::tablica[wybor-28]<7 && zasady::sprawdz_czarne(wybor, wybor-28))
                            atak[wybor-28]=2;

                        if(wybor>39 && wybor%8!=3 && (Szachy::tablica[wybor-35]==0 || Szachy::tablica[wybor-35]<7)&& Szachy::tablica[wybor-28]==0){
                            if(Szachy::tablica[wybor-35]==0 && zasady::sprawdz_czarne(wybor, wybor-35))
                                atak[wybor-35]=1;
                            else if(Szachy::tablica[wybor-35]<7 && zasady::sprawdz_czarne(wybor, wybor-35))
                                atak[wybor-35]=2;

                            if(wybor>47 && wybor%8!=2 && (Szachy::tablica[wybor-42]==0 || Szachy::tablica[wybor-42]<7)&& Szachy::tablica[wybor-35]==0){
                                if(Szachy::tablica[wybor-42]==0 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    atak[wybor-42]=1;
                                else if(Szachy::tablica[wybor-42]<7 && zasady::sprawdz_czarne(wybor, wybor-42))
                                    atak[wybor-42]=2;

                                if(wybor>55 && wybor%8!=1 && (Szachy::tablica[wybor-49]==0 || Szachy::tablica[wybor-49]<7)&& Szachy::tablica[wybor-42]==0){
                                    if(Szachy::tablica[wybor-49]==0 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        atak[wybor-49]=1;
                                    else if(Szachy::tablica[wybor-49]<7 && zasady::sprawdz_czarne(wybor, wybor-49))
                                        atak[wybor-49]=2;
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
                atak[wybor+7]=1;
            else if(Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                atak[wybor+7]=2;

            if(wybor<48 && wybor%8!=1 && (Szachy::tablica[wybor+14]==0 || Szachy::tablica[wybor+14]<7)&& Szachy::tablica[wybor+7]==0){
                if(Szachy::tablica[wybor+14]==0 && zasady::sprawdz_czarne(wybor, wybor+14))
                    atak[wybor+14]=1;
                else if(Szachy::tablica[wybor+14]<7 && zasady::sprawdz_czarne(wybor, wybor+14))
                    atak[wybor+14]=2;

                if(wybor<40 && wybor%8!=2 && (Szachy::tablica[wybor+21]==0 || Szachy::tablica[wybor+21]<7) && Szachy::tablica[wybor+14]==0){
                    if(Szachy::tablica[wybor+21]==0 && zasady::sprawdz_czarne(wybor, wybor+21))
                        atak[wybor+21]=1;
                    else if(Szachy::tablica[wybor+21]<7 && zasady::sprawdz_czarne(wybor, wybor+21))
                        atak[wybor+21]=2;

                    if(wybor<32 && wybor%8!=3 && (Szachy::tablica[wybor+28]==0 || Szachy::tablica[wybor+28]<7)&& Szachy::tablica[wybor+21]==0){
                        if(Szachy::tablica[wybor+28]==0 && zasady::sprawdz_czarne(wybor, wybor+28))
                            atak[wybor+28]=1;
                        else if(Szachy::tablica[wybor+28]<7 && zasady::sprawdz_czarne(wybor, wybor+28))
                            atak[wybor+28]=2;

                        if(wybor<24 && wybor%8!=4 && (Szachy::tablica[wybor+35]==0 || Szachy::tablica[wybor+35]<7)&& Szachy::tablica[wybor+28]==0){
                            if(Szachy::tablica[wybor+35]==0 && zasady::sprawdz_czarne(wybor, wybor+35))
                                atak[wybor+35]=1;
                            else if(Szachy::tablica[wybor+35]<7 && zasady::sprawdz_czarne(wybor, wybor+35))
                                atak[wybor+35]=2;

                            if(wybor<16 && wybor%8!=5 && (Szachy::tablica[wybor+42]==0 || Szachy::tablica[wybor+42]<7)&& Szachy::tablica[wybor+35]==0){
                                if(Szachy::tablica[wybor+42]==0 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    atak[wybor+42]=1;
                                else if(Szachy::tablica[wybor+42]<7 && zasady::sprawdz_czarne(wybor, wybor+42))
                                    atak[wybor+42]=2;

                                if(wybor<8 && wybor%8!=6 && (Szachy::tablica[wybor+49]==0 || Szachy::tablica[wybor+49]<7)&& Szachy::tablica[wybor+42]==0){
                                    if(Szachy::tablica[wybor+49]==0 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        atak[wybor+49]=1;
                                    else if(Szachy::tablica[wybor+49]<7 && zasady::sprawdz_czarne(wybor, wybor+49))
                                        atak[wybor+49]=2;
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
                atak[wybor+9]=1;
            else if(Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                atak[wybor+9]=2;

            if(wybor<48 && wybor%8!=6 && (Szachy::tablica[wybor+18]==0 || Szachy::tablica[wybor+18]<7)&& Szachy::tablica[wybor+9]==0){
                if(Szachy::tablica[wybor+18]==0 && zasady::sprawdz_czarne(wybor, wybor+18))
                    atak[wybor+18]=1;
                else if(Szachy::tablica[wybor+18]<7 && zasady::sprawdz_czarne(wybor, wybor+18))
                    atak[wybor+18]=2;

                if(wybor<40 && wybor%8!=5 && (Szachy::tablica[wybor+27]==0 || Szachy::tablica[wybor+27]<7)&& Szachy::tablica[wybor+18]==0){
                    if(Szachy::tablica[wybor+27]==0 && zasady::sprawdz_czarne(wybor, wybor+27))
                        atak[wybor+27]=1;
                    else if(Szachy::tablica[wybor+27]<7 && zasady::sprawdz_czarne(wybor, wybor+27))
                        atak[wybor+27]=2;

                    if(wybor<32 && wybor%8!=4 && (Szachy::tablica[wybor+36]==0 || Szachy::tablica[wybor+36]<7)&& Szachy::tablica[wybor+27]==0){
                        if(Szachy::tablica[wybor+36]==0 && zasady::sprawdz_czarne(wybor, wybor+36))
                            atak[wybor+36]=1;
                        else if(Szachy::tablica[wybor+36]<7 && zasady::sprawdz_czarne(wybor, wybor+36))
                            atak[wybor+36]=2;

                        if(wybor<24 && wybor%8!=3 && (Szachy::tablica[wybor+45]==0 || Szachy::tablica[wybor+45]<7)&& Szachy::tablica[wybor+36]==0){
                            if(Szachy::tablica[wybor+45]==0 && zasady::sprawdz_czarne(wybor, wybor+45))
                                atak[wybor+45]=1;
                            else if(Szachy::tablica[wybor+45]<7 && zasady::sprawdz_czarne(wybor, wybor+45))
                                atak[wybor+45]=2;

                            if(wybor<16 && wybor%8!=2 && (Szachy::tablica[wybor+54]==0 || Szachy::tablica[wybor+54]<7)&& Szachy::tablica[wybor+45]==0){
                                if(Szachy::tablica[wybor+54]==0 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    atak[wybor+54]=1;
                                else if(Szachy::tablica[wybor+54]<7 && zasady::sprawdz_czarne(wybor, wybor+54))
                                    atak[wybor+54]=2;

                                if(wybor<8 && wybor%8!=1 && (Szachy::tablica[wybor+63]==0 || Szachy::tablica[wybor+63]<7)&& Szachy::tablica[wybor+54]==0){
                                    if(Szachy::tablica[wybor+63]==0 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        atak[wybor+63]=1;
                                    else if(Szachy::tablica[wybor+63]<7 && zasady::sprawdz_czarne(wybor, wybor+63))
                                        atak[wybor+63]=2;
                                }

                            }

                        }

                    }

                }

            }

        }
    }

}

void Figury::krol(bool kolei, int wybor)
{
    if(!kolei){

        if(wybor>7){
            if((Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]>6) && zasady::sprawdz_biale(wybor, wybor-8)){
                if(Szachy::tablica[wybor-8]==0)
                    atak[wybor-8]=1;
                else if(Szachy::tablica[wybor-8]>6)
                    atak[wybor-8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]>6) && zasady::sprawdz_biale(wybor, wybor-9)){
                if(Szachy::tablica[wybor-9]==0)
                    atak[wybor-9]=1;
                else if(Szachy::tablica[wybor-9]>6)
                    atak[wybor-9]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]>6) && zasady::sprawdz_biale(wybor, wybor-7)){
                if(Szachy::tablica[wybor-7]==0)
                    atak[wybor-7]=1;
                else if(Szachy::tablica[wybor-7]>6)
                    atak[wybor-7]=2;
            }

        }

        if(wybor<56){
            if((Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]>6) && zasady::sprawdz_biale(wybor, wybor+8)){
                if(Szachy::tablica[wybor+8]==0)
                    atak[wybor+8]=1;
                else if(Szachy::tablica[wybor+8]>6)
                    atak[wybor+8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]>6) && zasady::sprawdz_biale(wybor, wybor+7)){
                if(Szachy::tablica[wybor+7]==0)
                    atak[wybor+7]=1;
                else if(Szachy::tablica[wybor+7]>6)
                    atak[wybor+7]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]>6) && zasady::sprawdz_biale(wybor, wybor+9)){
                if(Szachy::tablica[wybor+9]==0)
                    atak[wybor+9]=1;
                else if(Szachy::tablica[wybor+9]>6)
                    atak[wybor+9]=2;
            }



        }

        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]>6) && zasady::sprawdz_biale(wybor, wybor-1))
        {
            if(Szachy::tablica[wybor-1]==0)
                atak[wybor-1]=1;
            else if(Szachy::tablica[wybor-1]>6)
                atak[wybor-1]=2;
        }

        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]>6) && zasady::sprawdz_biale(wybor, wybor+1))
        {
            if(Szachy::tablica[wybor+1]==0)
                atak[wybor+1]=1;
            else if(Szachy::tablica[wybor+1]>6)
                atak[wybor+1]=2;
        }

    }
    else if(kolei){
        if(wybor>7){
            if((Szachy::tablica[wybor-8]==0 || Szachy::tablica[wybor-8]<7) && zasady::sprawdz_czarne(wybor, wybor-8)){
                if(Szachy::tablica[wybor-8]==0)
                    atak[wybor-8]=1;
                else if(Szachy::tablica[wybor-8]<7)
                    atak[wybor-8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor-9]==0 || Szachy::tablica[wybor-9]<7) && zasady::sprawdz_czarne(wybor, wybor-9)){
                if(Szachy::tablica[wybor-9]==0)
                    atak[wybor-9]=1;
                else if(Szachy::tablica[wybor-9]<7)
                    atak[wybor-9]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor-7]==0 || Szachy::tablica[wybor-7]<7) && zasady::sprawdz_czarne(wybor, wybor-7)){
                if(Szachy::tablica[wybor-7]==0)
                    atak[wybor-7]=1;
                else if(Szachy::tablica[wybor-7]<7)
                    atak[wybor-7]=2;
            }

        }

        if(wybor<56){
            if((Szachy::tablica[wybor+8]==0 || Szachy::tablica[wybor+8]<7) && zasady::sprawdz_czarne(wybor, wybor+8)){
                if(Szachy::tablica[wybor+8]==0)
                    atak[wybor+8]=1;
                else if(Szachy::tablica[wybor+8]<7)
                    atak[wybor+8]=2;
            }

            if(wybor%8!=0 && (Szachy::tablica[wybor+7]==0 || Szachy::tablica[wybor+7]<7) && zasady::sprawdz_czarne(wybor, wybor+7)){
                if(Szachy::tablica[wybor+7]==0)
                    atak[wybor+7]=1;
                else if(Szachy::tablica[wybor+7]<7)
                    atak[wybor+7]=2;
            }

            if(wybor%8!=7 && (Szachy::tablica[wybor+9]==0 || Szachy::tablica[wybor+9]<7) && zasady::sprawdz_czarne(wybor, wybor+9)){
                if(Szachy::tablica[wybor+9]==0)
                    atak[wybor+9]=1;
                else if(Szachy::tablica[wybor+9]<7)
                    atak[wybor+9]=2;
            }



        }

        if(wybor%8!=0 && (Szachy::tablica[wybor-1]==0 || Szachy::tablica[wybor-1]<7) && zasady::sprawdz_czarne(wybor, wybor-1))
        {
            if(Szachy::tablica[wybor-1]==0)
                atak[wybor-1]=1;
            else if(Szachy::tablica[wybor-1]<7)
                atak[wybor-1]=2;
        }

        if(wybor%8!=7 && (Szachy::tablica[wybor+1]==0 || Szachy::tablica[wybor+1]<7) && zasady::sprawdz_czarne(wybor, wybor+1))
        {
            if(Szachy::tablica[wybor+1]==0)
                atak[wybor+1]=1;
            else if(Szachy::tablica[wybor+1]<7)
                atak[wybor+1]=2;
        }

    }
}

void Figury::pionek(bool kolei, int wybor)
{
    if(!kolei){
        if(wybor>47 && wybor<56)
        {
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                atak[wybor-8]=1;
            if(Szachy::tablica[wybor-8]==0 && Szachy::tablica[wybor-16]==0&& zasady::sprawdz_biale(wybor, wybor-16))
                atak[wybor-16]=1;


            if(wybor%8!=0 && Szachy::tablica[wybor-9]>6 && Szachy::tablica[wybor-9]<13 && zasady::sprawdz_biale(wybor, wybor-9))
                atak[wybor-9]=2;

            if(wybor%8!=7 && Szachy::tablica[wybor-7]>6 && Szachy::tablica[wybor-7]<13&& zasady::sprawdz_biale(wybor, wybor-7))
                atak[wybor-7]=2;

        }
        else{
            if(Szachy::tablica[wybor-8]==0 && zasady::sprawdz_biale(wybor, wybor-8))
                atak[wybor-8]=1;
            if(wybor%8!=0 && Szachy::tablica[wybor-9]>6 && Szachy::tablica[wybor-9]<13 && zasady::sprawdz_biale(wybor, wybor-9))
                atak[wybor-9]=2;

            if(wybor%8!=7 && Szachy::tablica[wybor-7]>6 && Szachy::tablica[wybor-7]<13 && zasady::sprawdz_biale(wybor, wybor-7))
                atak[wybor-7]=2;

        }
    }
    else{
        if(wybor>7 && wybor<16)
        {
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_czarne(wybor, wybor+8))
                atak[wybor+8]=1;
            if(Szachy::tablica[wybor+8]==0 && Szachy::tablica[wybor+16]==0 && zasady::sprawdz_czarne(wybor, wybor+16))
                atak[wybor+16]=1;


            if(wybor%8!=7 && Szachy::tablica[wybor+9]>0 && Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                atak[wybor+9]=2;

            if(wybor%8!=0 && Szachy::tablica[wybor+7]>0 && Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                atak[wybor+7]=2;
        }
        else{
            if(Szachy::tablica[wybor+8]==0 && zasady::sprawdz_czarne(wybor, wybor+8))
                atak[wybor+8]=1;

            if(wybor%8!=7 && Szachy::tablica[wybor+9]>0 && Szachy::tablica[wybor+9]<7 && zasady::sprawdz_czarne(wybor, wybor+9))
                atak[wybor+9]=2;

            if(wybor%8!=0 && Szachy::tablica[wybor+7]>0 && Szachy::tablica[wybor+7]<7 && zasady::sprawdz_czarne(wybor, wybor+7))
                atak[wybor+7]=2;
        }
    }
}

void Figury::wyzeruj(){
    for(int i=0; i<64; i++)
        atak[i]=0;
}

void Figury::coijak()
{
    switch(Szachy::tablica[Szachy::wybor])
    {
    case 1:
        pionek(0, Szachy::wybor);
        break;
    case 2:
        wieza(0, Szachy::wybor);
        break;
    case 3:
        kon(0, Szachy::wybor);
        break;
    case 4:
        laufer(0, Szachy::wybor);
        break;
    case 5:
        dama(0, Szachy::wybor);
        break;
    case 6:
        krol(0, Szachy::wybor);
        break;
    case 7:
        pionek(1, Szachy::wybor);
        break;
    case 8:
        wieza(1, Szachy::wybor);
        break;
    case 9:
        kon(1, Szachy::wybor);
        break;
    case 10:
        laufer(1, Szachy::wybor);
        break;
    case 11:
        dama(1, Szachy::wybor);
        break;
    case 12:
        krol(1, Szachy::wybor);
        break;
    }

}

std::vector<int> Figury::atak(64, 0);
