#include "szachy.h"
#include "./ui_szachy.h"

Szachy::Szachy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Szachy)
{
    ui->setupUi(this);
}

Szachy::~Szachy()
{
    delete ui;
}

void Szachy::paintEvent(QPaintEvent *event)
{

    rysujPlansze();
    rysujZaznacz();
    rysujFigury();
}

void Szachy::rysujPlansze(void)
{
    QPainter myline(this);
    //myline.drawLine(40, 25, 1160, 25);
    //myline.drawLine(40, 675, 1160, 675);
    //myline.drawLine(40, 25, 40, 675);
    //myline.drawLine(1160, 25, 1160, 675);

    //Pola legendy
    QPainter painter(this);
    QBrush brush(Qt::gray);
    QRect rect1(280,25, 640, 65);
    painter.fillRect(rect1, brush);
    QRect rect2(280, 610, 640, 65);
    painter.fillRect(rect2, brush);
    QRect rect3(200, 90, 80, 520);
    painter.fillRect(rect3, brush);
    QRect rect4(920, 90, 80, 520);
    painter.fillRect(rect4, brush);

    //Pola na zbite pionki
    QBrush brush2(Qt::darkGreen);
    QRect rect5(40, 123, 80, 454);
    painter.fillRect(rect5, brush2);
    QRect rect6(120, 90, 80, 520);
    painter.fillRect(rect6, brush2);
    QRect rect7(1080, 123, 80, 454);
    painter.fillRect(rect7, brush2);
    QRect rect8(1000, 90, 80, 520);
    painter.fillRect(rect8, brush2);

    //Kolorowanie Szachownicy
    QBrush biale(QColor(133, 166, 122, 200));
    QBrush czarne(QColor(150, 75, 0));

    //Wiersz pierwszy
    QRect pole1(280, 90, 80, 65);
    QRect pole2(360, 90, 80, 65);
    QRect pole3(440, 90, 80, 65);
    QRect pole4(520, 90, 80, 65);
    QRect pole5(600, 90, 80, 65);
    QRect pole6(680, 90, 80, 65);
    QRect pole7(760, 90, 80, 65);
    QRect pole8(840, 90, 80, 65);

    painter.fillRect(pole1, biale);
    painter.fillRect(pole2, czarne);
    painter.fillRect(pole3, biale);
    painter.fillRect(pole4, czarne);
    painter.fillRect(pole5, biale);
    painter.fillRect(pole6, czarne);
    painter.fillRect(pole7, biale);
    painter.fillRect(pole8, czarne);

    //Wiersz drugi
    QRect pole9(280, 155, 80, 65);
    QRect pole10(360, 155, 80, 65);
    QRect pole11(440, 155, 80, 65);
    QRect pole12(520, 155, 80, 65);
    QRect pole13(600, 155, 80, 65);
    QRect pole14(680, 155, 80, 65);
    QRect pole15(760, 155, 80, 65);
    QRect pole16(840, 155, 80, 65);

    painter.fillRect(pole9, czarne);
    painter.fillRect(pole10, biale);
    painter.fillRect(pole11, czarne);
    painter.fillRect(pole12, biale);
    painter.fillRect(pole13, czarne);
    painter.fillRect(pole14, biale);
    painter.fillRect(pole15, czarne);
    painter.fillRect(pole16, biale);

    //Wiersz trzeci
    QRect pole17(280, 220, 80, 65);
    QRect pole18(360, 220, 80, 65);
    QRect pole19(440, 220, 80, 65);
    QRect pole20(520, 220, 80, 65);
    QRect pole21(600, 220, 80, 65);
    QRect pole22(680, 220, 80, 65);
    QRect pole23(760, 220, 80, 65);
    QRect pole24(840, 220, 80, 65);

    painter.fillRect(pole17, biale);
    painter.fillRect(pole18, czarne);
    painter.fillRect(pole19, biale);
    painter.fillRect(pole20, czarne);
    painter.fillRect(pole21, biale);
    painter.fillRect(pole22, czarne);
    painter.fillRect(pole23, biale);
    painter.fillRect(pole24, czarne);

    //Wiersz czwarty
    QRect pole25(280, 285, 80, 65);
    QRect pole26(360, 285, 80, 65);
    QRect pole27(440, 285, 80, 65);
    QRect pole28(520, 285, 80, 65);
    QRect pole29(600, 285, 80, 65);
    QRect pole30(680, 285, 80, 65);
    QRect pole31(760, 285, 80, 65);
    QRect pole32(840, 285, 80, 65);

    painter.fillRect(pole25, czarne);
    painter.fillRect(pole26, biale);
    painter.fillRect(pole27, czarne);
    painter.fillRect(pole28, biale);
    painter.fillRect(pole29, czarne);
    painter.fillRect(pole30, biale);
    painter.fillRect(pole31, czarne);
    painter.fillRect(pole32, biale);

    //Wiersz piaty
    QRect pole33(280, 350, 80, 65);
    QRect pole34(360, 350, 80, 65);
    QRect pole35(440, 350, 80, 65);
    QRect pole36(520, 350, 80, 65);
    QRect pole37(600, 350, 80, 65);
    QRect pole38(680, 350, 80, 65);
    QRect pole39(760, 350, 80, 65);
    QRect pole40(840, 350, 80, 65);

    painter.fillRect(pole33, biale);
    painter.fillRect(pole34, czarne);
    painter.fillRect(pole35, biale);
    painter.fillRect(pole36, czarne);
    painter.fillRect(pole37, biale);
    painter.fillRect(pole38, czarne);
    painter.fillRect(pole39, biale);
    painter.fillRect(pole40, czarne);

    //Wiersz szosty
    QRect pole41(280, 415, 80, 65);
    QRect pole42(360, 415, 80, 65);
    QRect pole43(440, 415, 80, 65);
    QRect pole44(520, 415, 80, 65);
    QRect pole45(600, 415, 80, 65);
    QRect pole46(680, 415, 80, 65);
    QRect pole47(760, 415, 80, 65);
    QRect pole48(840, 415, 80, 65);

    painter.fillRect(pole41, czarne);
    painter.fillRect(pole42, biale);
    painter.fillRect(pole43, czarne);
    painter.fillRect(pole44, biale);
    painter.fillRect(pole45, czarne);
    painter.fillRect(pole46, biale);
    painter.fillRect(pole47, czarne);
    painter.fillRect(pole48, biale);

    //Wiersz siudmy
    QRect pole49(280, 480, 80, 65);
    QRect pole50(360, 480, 80, 65);
    QRect pole51(440, 480, 80, 65);
    QRect pole52(520, 480, 80, 65);
    QRect pole53(600, 480, 80, 65);
    QRect pole54(680, 480, 80, 65);
    QRect pole55(760, 480, 80, 65);
    QRect pole56(840, 480, 80, 65);

    painter.fillRect(pole49, biale);
    painter.fillRect(pole50, czarne);
    painter.fillRect(pole51, biale);
    painter.fillRect(pole52, czarne);
    painter.fillRect(pole53, biale);
    painter.fillRect(pole54, czarne);
    painter.fillRect(pole55, biale);
    painter.fillRect(pole56, czarne);

    //Wiersz osmy
    QRect pole57(280, 545, 80, 65);
    QRect pole58(360, 545, 80, 65);
    QRect pole59(440, 545, 80, 65);
    QRect pole60(520, 545, 80, 65);
    QRect pole61(600, 545, 80, 65);
    QRect pole62(680, 545, 80, 65);
    QRect pole63(760, 545, 80, 65);
    QRect pole64(840, 545, 80, 65);

    painter.fillRect(pole57, czarne);
    painter.fillRect(pole58, biale);
    painter.fillRect(pole59, czarne);
    painter.fillRect(pole60, biale);
    painter.fillRect(pole61, czarne);
    painter.fillRect(pole62, biale);
    painter.fillRect(pole63, czarne);
    painter.fillRect(pole64, biale);


    //Zarys planszy
    myline.drawLine(280, 25, 920, 25);
    myline.drawLine(280, 675, 920, 675);
    myline.drawLine(40, 123, 40, 577);
    myline.drawLine(1160, 123, 1160, 577);

    myline.drawLine(120, 90, 280, 90);
    myline.drawLine(920, 610, 1080, 610);
    myline.drawLine(120, 610, 280, 610);
    myline.drawLine(920, 90, 1080, 90);


    myline.drawLine(40, 123, 120, 123);
    myline.drawLine(1080, 123, 1160, 123);
    myline.drawLine(40, 577, 120, 577);
    myline.drawLine(1080, 577, 1160, 577);

    myline.drawLine(280, 25, 280, 90);
    myline.drawLine(920, 25, 920, 90);
    myline.drawLine(280, 610, 280, 675);
    myline.drawLine(920, 610, 920, 675);

    myline.drawLine(120, 90, 120, 155);
    myline.drawLine(1080, 90, 1080, 155);
    myline.drawLine(120, 545, 120, 610);
    myline.drawLine(1080, 545, 1080, 610);


    //poziome linie
    myline.drawLine(280, 90, 920, 90);
    myline.drawLine(120, 155, 1080, 155);
    myline.drawLine(120, 220, 1080, 220);
    myline.drawLine(120, 285, 1080, 285);
    myline.drawLine(120, 350, 1080, 350);
    myline.drawLine(120, 415, 1080, 415);
    myline.drawLine(120, 480, 1080, 480);
    myline.drawLine(120, 545, 1080, 545);
    myline.drawLine(280, 610, 920, 610);

    //Linie przy pierwszej kolumnie zbitych pionkow
    myline.drawLine(40, 188, 120, 188);
    myline.drawLine(40, 258, 120, 258);
    myline.drawLine(40, 318, 120, 318);
    myline.drawLine(40, 383, 120, 383);
    myline.drawLine(40, 448, 120, 448);
    myline.drawLine(40, 513, 120, 513);

    //Linie przy ostatniej kolumnie zbitych pionkow
    myline.drawLine(1080, 188, 1160, 188);
    myline.drawLine(1080, 258, 1160, 258);
    myline.drawLine(1080, 318, 1160, 318);
    myline.drawLine(1080, 383, 1160, 383);
    myline.drawLine(1080, 448, 1160, 448);
    myline.drawLine(1080, 513, 1160, 513);


    //pionowe linie
    myline.drawLine(120, 155, 120, 545);
    myline.drawLine(200, 90, 200, 610);
    myline.drawLine(280, 90, 280, 610);
    myline.drawLine(360, 25, 360, 675);
    myline.drawLine(440, 25, 440, 675);
    myline.drawLine(520, 25, 520, 675);
    myline.drawLine(600, 25, 600, 675);
    myline.drawLine(680, 25, 680, 675);
    myline.drawLine(760, 25, 760, 675);
    myline.drawLine(840, 25, 840, 675);
    myline.drawLine(920, 90, 920, 610);
    myline.drawLine(1000, 90, 1000, 610);
    myline.drawLine(1080, 155, 1080, 545);

    //Opis osi
    QPainter mytext(this);
    mytext.setFont(QFont("Times", 30));
    mytext.drawText(QPoint(308, 70), "A");
    mytext.drawText(QPoint(388, 70), "B");
    mytext.drawText(QPoint(468, 70), "C");
    mytext.drawText(QPoint(548, 70), "D");
    mytext.drawText(QPoint(628, 70), "E");
    mytext.drawText(QPoint(708, 70), "F");
    mytext.drawText(QPoint(788, 70), "G");
    mytext.drawText(QPoint(868, 70), "H");

    mytext.drawText(QPoint(308, 655), "A");
    mytext.drawText(QPoint(388, 655), "B");
    mytext.drawText(QPoint(468, 655), "C");
    mytext.drawText(QPoint(548, 655), "D");
    mytext.drawText(QPoint(628, 655), "E");
    mytext.drawText(QPoint(708, 655), "F");
    mytext.drawText(QPoint(788, 655), "G");
    mytext.drawText(QPoint(868, 655), "H");

    mytext.drawText(QPoint(228, 135), "1");
    mytext.drawText(QPoint(228, 200), "2");
    mytext.drawText(QPoint(228, 265), "3");
    mytext.drawText(QPoint(228, 330), "4");
    mytext.drawText(QPoint(228, 395), "5");
    mytext.drawText(QPoint(228, 460), "6");
    mytext.drawText(QPoint(228, 525), "7");
    mytext.drawText(QPoint(228, 590), "8");

    mytext.drawText(QPoint(948, 135), "1");
    mytext.drawText(QPoint(948, 200), "2");
    mytext.drawText(QPoint(948, 265), "3");
    mytext.drawText(QPoint(948, 330), "4");
    mytext.drawText(QPoint(948, 395), "5");
    mytext.drawText(QPoint(948, 460), "6");
    mytext.drawText(QPoint(948, 525), "7");
    mytext.drawText(QPoint(948, 590), "8");

    //kolejka
    QPainter kolejeczka(this);
    kolejeczka.setBrush(Qt::darkRed);
    if(!kolei)
        kolejeczka.drawEllipse(45, 625, 110, 60);
    else
        kolejeczka.drawEllipse(45, 15, 110, 60);


    //indeksy graczy
    QPainter nazwa(this);
    nazwa.setBrush(Qt::black);
    nazwa.drawEllipse(50, 20, 100, 50);
    nazwa.setBrush(Qt::white);
    nazwa.drawEllipse(50, 630, 100, 50);

    //nazwa graczy
    QPainter gracze(this);
    gracze.setPen(Qt::white);
    gracze.setFont(QFont("Times", 20));
    gracze.drawText(QRect(50, -5, 100, 100), Qt::AlignCenter, "Gracz 1");
    gracze.setPen(Qt::black);
    gracze.drawText(QRect(50, 605, 100, 100), Qt::AlignCenter, "Gracz 2");


    int indeks=-1;
    for(int i=0; i<64; i++)
        if(tablica[i]==6)
            indeks=i;

    akcje spr;
    if(spr.szach_bialy(tablica))
    {
        QBrush test(Qt::yellow);
        QRect tetsy(280+(80*(indeks%8)),90+(65*(indeks/8)), 80, 65);
        painter.fillRect(tetsy, test);
    }

    int indeks2=-1;
    for(int i=0; i<64; i++)
        if(tablica[i]==12)
            indeks2=i;

    if(spr.szach_czarny(tablica))
    {
        QBrush test2(Qt::yellow);
        QRect tetsy2(280+(80*(indeks2%8)),90+(65*(indeks2/8)), 80, 65);
        painter.fillRect(tetsy2, test2);
    }

}

void Szachy::rysujFigury(void)
{
    int indeks=0;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            switch(tablica[indeks]){
            case 0:
                break;
            case 1:
                pionek(0, 280+ 80*j, 90+65*i);
                break;
            case 2:
                wieza(0, 280+ 80*j, 90+65*i);
                break;
            case 3:
                kon(0, 280+ 80*j, 90+65*i);
                break;
            case 4:
                laufer(0, 280+ 80*j, 90+65*i);
                break;
            case 5:
                dama(0, 280+ 80*j, 90+65*i);
                break;
            case 6:
                krol(0, 280+ 80*j, 90+65*i);
                break;
            case 7:
                pionek(1, 280+ 80*j, 90+65*i);
                break;
            case 8:
                wieza(1, 280+ 80*j, 90+65*i);
                break;
            case 9:
                kon(1, 280+ 80*j, 90+65*i);
                break;
            case 10:
                laufer(1, 280+ 80*j, 90+65*i);
                break;
            case 11:
                dama(1, 280+ 80*j, 90+65*i);
                break;
            case 12:
                krol(1, 280+ 80*j, 90+65*i);
                break;
            }

            indeks++;
        }
    }

    //pola zbitych pionków
    int xb= 40;
    int yb= 128;
    int pxb= 120;
    int pyb= 90;
    int xc= 1080;
    int yc= 128;
    int pxc= 1000;
    int pyc= 90;


    //zbite pionki
    for(int i=0; i<zbite.size(); i++)
    {
        switch(zbite[i]){
        case 1:
            pionek(0, pxb, pyb);
            pyb+=65;
            break;
        case 2:
            if(yb>570){
                wieza(0, pxb, pyb);
                pyb+=65;
            }
            else{
                wieza(0, xb, yb);
                yb+=65;
            }
            break;
        case 3:
            if(yb>570){
                kon(0, pxb, pyb);
                pyb+=65;
            }
            else{
                kon(0, xb, yb);
                yb+=65;
            }
            break;
        case 4:
            if(yb>570){
                laufer(0, pxb, pyb);
                pyb+=65;
            }
            else{
                laufer(0, xb, yb);
                yb+=65;
            }
            break;
        case 5:
            if(yb>570){
                dama(0, pxb, pyb);
                pyb+=65;
            }
            else{
                dama(0, xb, yb);
                yb+=65;
            }
            break;
        case 7:
            pionek(1, pxc, pyc);
            pyc+=65;
            break;
        case 8:
            if(yc>570){
                wieza(1, pxc, pyc);
                pyc+=65;
            }
            else{
                wieza(1, xc, yc);
                yc+=65;
            }
            break;
        case 9:
            if(yc>570){
                kon(1, pxc, pyc);
                pyc+=65;
            }
            else{
                kon(1, xc, yc);
                yc+=65;
            }
            break;
        case 10:
            if(yc>570)
            {
                laufer(1, pxc, pyc);
                pyc+=65;
            }
            else{
                laufer(1, xc, yc);
                yc+=65;
            }
            break;
        case 11:
            if(yc>578){
                dama(1, pxc, pyc);
                pyc+=65;
            }
            else{
                dama(1, xc, yc);
                yc+=65;
            }
            break;

        }
    }

    if(wlacz_liste){
        lista();
    }

    if(koniec){
        rezultat();
    }
}


void Szachy::wieza(bool kolor, int Posx, int Posy)
{
    QPainter painter(this);
    QPolygon poly;
    poly <<QPoint(Posx+15, Posy+55)<<

        QPoint(Posx+65, Posy+55)<<
        QPoint(Posx+66, Posy+53)<<
        QPoint(Posx+65, Posy+50)<<
        QPoint(Posx+55, Posy+50)<<

        QPoint(Posx+55, Posy+35)<<
        QPoint(Posx+50, Posy+32)<<
        QPoint(Posx+51, Posy+30)<<
        QPoint(Posx+55, Posy+28)<<

        QPoint(Posx+55, Posy+20)<<
        QPoint(Posx+60, Posy+20)<<
        QPoint(Posx+60, Posy+10)<<


        QPoint(Posx+55, Posy+10)<<
        QPoint(Posx+49, Posy+10)<<
        QPoint(Posx+49, Posy+20)<<
        QPoint(Posx+43, Posy+20)<<
        QPoint(Posx+43, Posy+10)<<
        QPoint(Posx+37, Posy+10)<<
        QPoint(Posx+37, Posy+20)<<
        QPoint(Posx+31, Posy+20)<<
        QPoint(Posx+31, Posy+10)<<
        QPoint(Posx+25, Posy+10)<<

        QPoint(Posx+20, Posy+10)<<
        QPoint(Posx+20, Posy+20)<<
        QPoint(Posx+25, Posy+20)<<



        QPoint(Posx+25, Posy+28)<<
        QPoint(Posx+29, Posy+30)<<
        QPoint(Posx+30, Posy+32)<<
        QPoint(Posx+25, Posy+35)<<


        QPoint(Posx+25, Posy+50)<<
        QPoint(Posx+15, Posy+50)<<
        QPoint(Posx+14, Posy+53)<<
        QPoint(Posx+15, Posy+55);
    QPen pen(Qt::blue, 2);
    painter.setPen(pen);
    // Brush
    QBrush brush;
    if(kolor==false)
        brush.setColor(Qt::white);
    else
        brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);

    // Fill polygon
    QPainterPath path;
    path.addPolygon(poly);

    // Draw polygon
    painter.drawPolygon(poly);
    painter.fillPath(path, brush);

}

void Szachy::kon(bool kolor, int Posx, int Posy)
{
    QPainter painter(this);
    QPolygon poly;
    poly <<QPoint(Posx+20, Posy+55)<<
        QPoint(Posx+40, Posy+55)<<
        QPoint(Posx+45, Posy+50)<<
        QPoint(Posx+39, Posy+47)<<
        QPoint(Posx+36, Posy+45)<<
        QPoint(Posx+30, Posy+40)<<
        QPoint(Posx+35, Posy+43)<<
        QPoint(Posx+38, Posy+41)<<
        QPoint(Posx+42, Posy+38)<<
        QPoint(Posx+47, Posy+34)<<
        QPoint(Posx+52, Posy+30)<<
        QPoint(Posx+57, Posy+29)<<
        QPoint(Posx+63, Posy+31)<<
        QPoint(Posx+67, Posy+32)<<
        QPoint(Posx+70, Posy+32)<<
        QPoint(Posx+69, Posy+30)<<
        QPoint(Posx+68, Posy+25)<<
        QPoint(Posx+66, Posy+24)<<
        QPoint(Posx+65, Posy+22)<<
        QPoint(Posx+63, Posy+21)<<
        QPoint(Posx+60, Posy+20)<<
        QPoint(Posx+56, Posy+18)<<
        QPoint(Posx+53, Posy+17)<<
        QPoint(Posx+49, Posy+16)<<
        QPoint(Posx+46, Posy+15)<<
        QPoint(Posx+40, Posy+14)<<
        QPoint(Posx+36, Posy+13)<<
        QPoint(Posx+34, Posy+12)<<
        QPoint(Posx+32, Posy+10)<<
        QPoint(Posx+28, Posy+8)<<
        QPoint(Posx+26, Posy+10)<<
        QPoint(Posx+24, Posy+14)<<
        QPoint(Posx+22, Posy+17)<<
        QPoint(Posx+20, Posy+20)<<
        QPoint(Posx+19, Posy+16)<<
        QPoint(Posx+17, Posy+12)<<
        QPoint(Posx+15, Posy+8)<<
        QPoint(Posx+13, Posy+1)<<
        QPoint(Posx+12, Posy+1)<<
        QPoint(Posx+12, Posy+2)<<
        QPoint(Posx+12, Posy+6)<<
        QPoint(Posx+11, Posy+10)<<
        QPoint(Posx+10, Posy+15)<<
        QPoint(Posx+9, Posy+20)<<

        QPoint(Posx+7, Posy+25)<<
        QPoint(Posx+5, Posy+29)<<
        QPoint(Posx+7, Posy+35)<<
        QPoint(Posx+10, Posy+39)<<
        QPoint(Posx+15, Posy+46)<<
        QPoint(Posx+18, Posy+51)<<

        QPoint(Posx+20, Posy+55);
    QPen pen(Qt::blue, 2);
    painter.setPen(pen);
    // Brush
    QBrush brush;
    if(kolor==false)
        brush.setColor(Qt::white);
    else
        brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);

    // Fill polygon
    QPainterPath path;
    path.addPolygon(poly);

    // Draw polygon
    painter.drawPolygon(poly);
    painter.fillPath(path, brush);

    QPainter oko(this);
    oko.setBrush(Qt::blue);
    oko.drawEllipse(Posx+25, Posy+20, 10, 5);
}

void Szachy::laufer(bool kolor, int Posx, int Posy)
{
    QPainter painter(this);
    QPolygon poly;
    poly <<QPoint(Posx+12, Posy+55)<<
        QPoint(Posx+68, Posy+55)<<
        QPoint(Posx+70, Posy+53)<<
        QPoint(Posx+68, Posy+51)<<
        QPoint(Posx+45, Posy+50)<<

        QPoint(Posx+50, Posy+40)<<
        QPoint(Posx+58, Posy+44)<<
        QPoint(Posx+61, Posy+40)<<
        QPoint(Posx+58, Posy+35)<<
        QPoint(Posx+50, Posy+31)<<
        QPoint(Posx+45, Posy+28)<<

        QPoint(Posx+45, Posy+20)<<
        QPoint(Posx+50, Posy+25)<<
        QPoint(Posx+54, Posy+20)<<
        QPoint(Posx+58, Posy+18)<<
        QPoint(Posx+55, Posy+16)<<
        QPoint(Posx+52, Posy+14)<<
        QPoint(Posx+50, Posy+14)<<

        QPoint(Posx+49, Posy+12)<<
        QPoint(Posx+45, Posy+10)<<
        QPoint(Posx+40, Posy+5)<<
        QPoint(Posx+40, Posy+5)<<
        QPoint(Posx+35, Posy+10)<<
        QPoint(Posx+31, Posy+12)<<







        //symetria

        QPoint(Posx+30, Posy+14)<<
        QPoint(Posx+28, Posy+14)<<
        QPoint(Posx+25, Posy+16)<<
        QPoint(Posx+22, Posy+18)<<
        QPoint(Posx+26, Posy+20)<<
        QPoint(Posx+30, Posy+25)<<
        QPoint(Posx+35, Posy+20)<<


        QPoint(Posx+35, Posy+28)<<
        QPoint(Posx+30, Posy+31)<<
        QPoint(Posx+22, Posy+35)<<
        QPoint(Posx+19, Posy+40)<<
        QPoint(Posx+22, Posy+44)<<
        QPoint(Posx+30, Posy+40)<<

        QPoint(Posx+35, Posy+50)<<
        QPoint(Posx+12, Posy+51)<<
        QPoint(Posx+10, Posy+53)<<
        QPoint(Posx+12, Posy+55)<<


        QPoint(Posx+12, Posy+55);
    QPen pen(Qt::blue, 2);
    painter.setPen(pen);
    // Brush
    QBrush brush;
    if(kolor==false)
        brush.setColor(Qt::white);
    else
        brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);

    // Fill polygon
    QPainterPath path;
    path.addPolygon(poly);

    // Draw polygon
    painter.drawPolygon(poly);
    painter.fillPath(path, brush);
}

void Szachy::dama(bool kolor, int Posx, int Posy)
{
    QPainter painter(this);
    QPolygon poly;
    poly <<QPoint(Posx+25, Posy+55)<<
        QPoint(Posx+55, Posy+55)<<
        QPoint(Posx+60, Posy+35)<<
        QPoint(Posx+69, Posy+15)<<
        QPoint(Posx+70, Posy+12)<<
        QPoint(Posx+68, Posy+15)<<
        QPoint(Posx+55, Posy+38)<<

        QPoint(Posx+51, Posy+35)<<
//        QPoint(Posx+50, Posy+28)<<
        QPoint(Posx+51, Posy+15)<<
        QPoint(Posx+50, Posy+12)<<
        QPoint(Posx+49, Posy+10)<<
        QPoint(Posx+48, Posy+12)<<
        QPoint(Posx+47, Posy+15)<<
        QPoint(Posx+45, Posy+35)<<

        QPoint(Posx+40, Posy+36)<<

        //oś symetri
        QPoint(Posx+35, Posy+35)<<
        QPoint(Posx+34, Posy+15)<<
        QPoint(Posx+32, Posy+12)<<
        QPoint(Posx+31, Posy+10)<<
        QPoint(Posx+30, Posy+12)<<
        QPoint(Posx+29, Posy+15)<<
//        QPoint(Posx+30, Posy+28)<<
        QPoint(Posx+29, Posy+35)<<




        //symetria
        QPoint(Posx+25, Posy+38)<<
        QPoint(Posx+12, Posy+15)<<
        QPoint(Posx+10, Posy+12)<<
        QPoint(Posx+11, Posy+15)<<
        QPoint(Posx+20, Posy+35)<<


        QPoint(Posx+25, Posy+55);
    QPen pen(Qt::blue, 2);
    painter.setPen(pen);
    // Brush
    QBrush brush;
    if(kolor==false)
        brush.setColor(Qt::white);
    else
        brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);

    // Fill polygon
    QPainterPath path;
    path.addPolygon(poly);

    // Draw polygon
    painter.drawPolygon(poly);
    painter.fillPath(path, brush);

    //Bombki
    QPainter oko(this);
    oko.setBrush(Qt::blue);

    oko.drawEllipse(Posx+5, Posy+10, 10, 10);
    oko.drawEllipse(Posx+26, Posy+5, 10, 10);
    oko.drawEllipse(Posx+44, Posy+5, 10, 10);
    oko.drawEllipse(Posx+65, Posy+10, 10, 10);

}

void Szachy::krol(bool kolor, int Posx, int Posy)
{
    QPainter painter(this);
    QPolygon poly;
    poly <<QPoint(Posx+15, Posy+60)<<
        QPoint(Posx+65, Posy+60)<<
        QPoint(Posx+63, Posy+56)<<
        QPoint(Posx+61, Posy+53)<<
        QPoint(Posx+56, Posy+48)<<
        QPoint(Posx+52, Posy+46)<<
        QPoint(Posx+48, Posy+45)<<
        QPoint(Posx+45, Posy+42)<<

        QPoint(Posx+46, Posy+40)<<
        QPoint(Posx+47, Posy+39)<<
        QPoint(Posx+48, Posy+37)<<
        QPoint(Posx+49, Posy+40)<<
        QPoint(Posx+48, Posy+37)<<
        QPoint(Posx+46, Posy+36)<<
        QPoint(Posx+45, Posy+35)<<

        //krzyż
        QPoint(Posx+55, Posy+35)<<
        QPoint(Posx+57, Posy+34)<<
        QPoint(Posx+57, Posy+32)<<
        QPoint(Posx+55, Posy+31)<<
        QPoint(Posx+45, Posy+31)<<

        QPoint(Posx+44, Posy+30)<<
        QPoint(Posx+42, Posy+29)<<
        QPoint(Posx+46, Posy+28)<<
        QPoint(Posx+47, Posy+27)<<
        QPoint(Posx+49, Posy+27)<<
        QPoint(Posx+50, Posy+26)<<
        QPoint(Posx+50, Posy+25)<<
        QPoint(Posx+48, Posy+25)<<
        QPoint(Posx+46, Posy+24)<<
        QPoint(Posx+44, Posy+23)<<


        //krzyżyk
        QPoint(Posx+45, Posy+15)<<
        QPoint(Posx+50, Posy+15)<<
        QPoint(Posx+50, Posy+11)<<
        QPoint(Posx+45, Posy+11)<<
        QPoint(Posx+45, Posy+7)<<

        QPoint(Posx+35, Posy+7)<<
        QPoint(Posx+35, Posy+11)<<
        QPoint(Posx+30, Posy+11)<<
        QPoint(Posx+30, Posy+15)<<
        QPoint(Posx+35, Posy+15)<<



        //test 2
        QPoint(Posx+36, Posy+23)<<
        QPoint(Posx+34, Posy+24)<<
        QPoint(Posx+32, Posy+25)<<
        QPoint(Posx+30, Posy+25)<<
        QPoint(Posx+30, Posy+26)<<
        QPoint(Posx+31, Posy+27)<<
        QPoint(Posx+33, Posy+27)<<
        QPoint(Posx+34, Posy+28)<<
        QPoint(Posx+38, Posy+29)<<
        QPoint(Posx+36, Posy+30)<<


        //test sym
        QPoint(Posx+35, Posy+31)<<
        QPoint(Posx+25, Posy+31)<<
        QPoint(Posx+23, Posy+32)<<
        QPoint(Posx+23, Posy+34)<<
        QPoint(Posx+25, Posy+35)<<



        QPoint(Posx+35, Posy+35)<<
        QPoint(Posx+34, Posy+36)<<
        QPoint(Posx+32, Posy+37)<<
        QPoint(Posx+31, Posy+40)<<
        QPoint(Posx+32, Posy+37)<<
        QPoint(Posx+33, Posy+39)<<
        QPoint(Posx+34, Posy+40)<<

        //symetria

        QPoint(Posx+35, Posy+42)<<
        QPoint(Posx+32, Posy+45)<<
        QPoint(Posx+28, Posy+46)<<
        QPoint(Posx+24, Posy+48)<<
        QPoint(Posx+19, Posy+53)<<
        QPoint(Posx+17, Posy+56)<<

//        QPoint(Posx+30, Posy+32)<<
//        QPoint(Posx+25, Posy+40)<<
//        QPoint(Posx+20, Posy+45)<<
//        QPoint(Posx+18, Posy+48)<<
//        QPoint(Posx+17, Posy+53)<<
//        QPoint(Posx+16, Posy+56)<<



        QPoint(Posx+15, Posy+60);
    QPen pen(Qt::blue, 2);
    painter.setPen(pen);
    // Brush
    QBrush brush;
    if(kolor==false)
        brush.setColor(Qt::white);
    else
        brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);

    // Fill polygon
    QPainterPath path;
    path.addPolygon(poly);

    // Draw polygon
    painter.drawPolygon(poly);
    painter.fillPath(path, brush);

}

void Szachy::pionek(bool kolor, int Posx, int Posy)
{
    QPainter painter(this);
    QPolygon poly;

    QPainter oko(this);

    if(kolor){
        oko.setBrush(Qt::black);
        oko.drawEllipse(Posx+33, Posy+17, 15, 15);

}

    poly <<QPoint(Posx+20, Posy+55)<<
        QPoint(Posx+60, Posy+55)<<
        QPoint(Posx+59, Posy+52)<<
        QPoint(Posx+57, Posy+51)<<
        QPoint(Posx+56, Posy+50)<<
        QPoint(Posx+55, Posy+50)<<

        QPoint(Posx+52, Posy+50)<<
        QPoint(Posx+48, Posy+42)<<
        QPoint(Posx+44, Posy+34)<<
        QPoint(Posx+42, Posy+26)<<
        QPoint(Posx+41, Posy+18)<<



        QPoint(Posx+39, Posy+18)<<
        QPoint(Posx+38, Posy+26)<<
        QPoint(Posx+36, Posy+34)<<
        QPoint(Posx+32, Posy+42)<<
        QPoint(Posx+28, Posy+50)<<


        QPoint(Posx+25, Posy+50)<<
        QPoint(Posx+24, Posy+50)<<
        QPoint(Posx+23, Posy+51)<<
        QPoint(Posx+21, Posy+52)<<


        QPoint(Posx+20, Posy+55);

    QPen pen(Qt::blue, 2);
    painter.setPen(pen);
    // Brush
    QBrush brush;
    if(kolor==false)
        brush.setColor(Qt::white);
    else
        brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);

    // Fill polygon
    QPainterPath path;
    path.addPolygon(poly);

    // Draw polygon
    painter.drawPolygon(poly);
    painter.fillPath(path, brush);

    if(!kolor){
    oko.setBrush(Qt::white);
    oko.drawEllipse(Posx+33, Posy+17, 15, 15);
    }
}


void Szachy::mousePressEvent(QMouseEvent *event)
{
    emit Mouse_Pressed();
    int indeks, x, y;
    QPointF point = event->position();//localPos();

    if(!wlacz_liste){

    if(point.x()>280 && point.x()<920 &&
       point.y()>90 && point.y()<610)
   {
        x= (point.x()-280)/80;
        y= (point.y()-90)/65;
        indeks=y*8+x;

        if(!kolei && tablica[indeks]>0 && tablica[indeks]<7)
        {
            wybor=indeks;
            update();
        }
        else if(kolei && tablica[indeks]>6 && tablica[indeks]<13)
        {
            wybor=indeks;
            update();
        }

        else if(wybor>=0 && Figury::atak[indeks]==1){
            tablica[indeks]=tablica[wybor];
            tablica[wybor]=0;
            if(kolei)
                kolei=0;
            else
                kolei=1;
            wybor=-1;
            zasady::pat_mat(!kolei);
            update();
        }
        else if(wybor>=0 && Figury::atak[indeks]==2){
            zbite.push_back(tablica[indeks]);
            tablica[indeks]=tablica[wybor];
            tablica[wybor]=0;
            if(kolei)
                kolei=0;
            else
                kolei=1;
            wybor=-1;
            zasady::pat_mat(!kolei);
            update();
        }
        if(kolei)
            akcje::uzupelnij_biale();
        else
            akcje::uzupelnij_czarne();

        pionek_dotarl();
    }
    }
    else{
        if(point.x()>1000 && point.x()<1180 &&
            point.y()>170 && point.y()<530){
            if(point.y()<260)
                ustaw_za_pionek(1);
            else if(point.y()<350)
                ustaw_za_pionek(2);
            else if(point.y()<440)
                ustaw_za_pionek(3);
            else
                ustaw_za_pionek(4);

            if(!kolei)
                akcje::uzupelnij_biale();
            else
                akcje::uzupelnij_czarne();

        }
    }

}

void Szachy::rysujZaznacz(void)
{
    if(wybor>=0 && wybor<=63)
    {
        QPainter painter(this);
        QBrush brush(Qt::green);
        QRect rect1(280+(80*(wybor%8)),90+(65*(wybor/8)), 80, 65);
        painter.fillRect(rect1, brush);

        Figury ruchy;
        ruchy.wyzeruj();
        ruchy.coijak();

        for(int i=0; i<64; i++)
        {
            if(Figury::atak[i]>0)
            {
                QRect rect2(280+(80*(i%8)),90+(65*(i/8)), 80, 65);
                if(Figury::atak[i]==1 && ((akcje::atak_bialy[i]==0 && kolei) || (akcje::atak_czarny[i]==0 && !kolei))){
                    QBrush brush1(Qt::blue);
                    painter.fillRect(rect2, brush1);
                }
                else if(Figury::atak[i]==2){
                    QBrush brush2(Qt::red);
                    painter.fillRect(rect2, brush2);
                }
                else if(Figury::atak[i]==1 && ((akcje::atak_bialy[i]>0 && kolei) || (akcje::atak_czarny[i]>0 && !kolei))){
                    QBrush brush3(Qt::darkCyan);
                    painter.fillRect(rect2, brush3);
                }
            }
        }
    }

}

void Szachy::pionek_dotarl(void)
{
    for(int i=0; i<8; i++){
        if(tablica[i]==1){
            wlacz_liste=true;
            wybrana_figure = i;
        }
    }

    for(int i=56; i<64; i++){
        if(tablica[i]==7){
            wlacz_liste=true;
            wybrana_figure = i;
        }
    }

}

void Szachy::lista(void)
{
    QPainter painter(this);
    QBrush brush(Qt::darkBlue);
    QBrush brush2(Qt::darkCyan);
    QBrush brush3(Qt::darkYellow);

    QRect tlo(1000,155, 180, 390);
    painter.fillRect(tlo, brush3);

    QRect rect1(1000,170, 180, 360);
    painter.fillRect(rect1, brush);

    QRect rect2(1000, 260, 180, 90);
    QRect rect3(1000, 440, 180, 90);
    painter.fillRect(rect2, brush2);
    painter.fillRect(rect3, brush2);

    QPainter teksty(this);
    teksty.setPen(Qt::yellow);
    teksty.setFont(QFont("Times", 20));
    teksty.drawText(QRect(1010, 155, 160, 90), Qt::AlignCenter, "Dama");
    teksty.drawText(QRect(1010, 245, 160, 90), Qt::AlignCenter, "Wieża");
    teksty.drawText(QRect(1010, 335, 160, 90), Qt::AlignCenter, "Laufer");
    teksty.drawText(QRect(1010, 425, 160, 90), Qt::AlignCenter, "Skoczek");
}

void Szachy::ustaw_za_pionek(int co)
{
    if(wybrana_figure<8){
        switch(co){
        case 1:
            tablica[wybrana_figure] = 5;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        case 2:
            tablica[wybrana_figure] = 2;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        case 3:
            tablica[wybrana_figure] = 4;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        case 4:
            tablica[wybrana_figure] = 3;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        }
    }
    else if(wybrana_figure>55){
        switch(co){
        case 1:
            tablica[wybrana_figure] = 11;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        case 2:
            tablica[wybrana_figure] = 8;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        case 3:
            tablica[wybrana_figure] = 10;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        case 4:
            tablica[wybrana_figure] = 9;
            wybrana_figure = -1;
            wlacz_liste = false;
            update();
            break;
        }
    }
}

void Szachy::rezultat(void)
{
    QPainter painter(this);
    QBrush brush(Qt::darkRed);
    QRect rect1(200, 610, 800, 100);
    painter.fillRect(rect1, brush);

    QBrush brush2(Qt::white);
    QRect rect2(250, 635, 700, 50);
    painter.fillRect(rect2, brush2);

    QPainter gracze(this);
    gracze.setPen(Qt::black);
    gracze.setFont(QFont("Times", 20));

    if(zasady::koniec == 0)
        gracze.drawText(QRect(250, 635, 700, 50), Qt::AlignCenter, "Sytuacja patowa. Remis.");
    else if(zasady::koniec == 1)
        gracze.drawText(QRect(250, 635, 700, 50), Qt::AlignCenter, "Szach-mat. Gracz 2 Wygrywa.");
    else if(zasady::koniec == 2)
        gracze.drawText(QRect(250, 635, 700, 50), Qt::AlignCenter, "Szach-mat. Gracz 1 Wygrywa.");
}


bool Szachy::kolei = false;

std::vector<int> Szachy::tablica =
{8, 9, 10, 11, 12, 10, 9, 8,
 7, 7, 7, 7, 7, 7, 7, 7,
 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1,
 2, 3, 4, 5, 6, 4, 3, 2};

std::vector<int> Szachy::zbite={};

int Szachy::wybor = -1;

//bool Szachy::szach = false;

bool Szachy::koniec = false;
