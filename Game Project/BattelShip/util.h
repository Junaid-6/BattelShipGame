#ifndef UTIL_H
#define UTIL_H

#include <QWidget>
#include<QGridLayout>
#include<QPushButton>
#include<QLabel>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLCDNumber>
#include<QFile>
#include<QRandomGenerator>
using namespace std;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

   void clearscreen();
   void showmenu();
   void drawboard();
   void drawships();
   void savedata();



public:
    int x=0;
    QGridLayout *window;
    QGridLayout *gamegrid;
    QGridLayout *shipsgrid;
    //Ships
    QPushButton *ship4[4];


    QPushButton *ship3_1[3];
    QPushButton *ship3_2[3];


    QPushButton *ship2_1[2];
    QPushButton *ship2_2[2];
    QPushButton *ship2_3[2];


    QPushButton *ship1_1;
    QPushButton *ship1_2;
    QPushButton *ship1_3;
    QPushButton *ship1_4;

    QPushButton *location[10][10];

    QPushButton *Auto;
    QPushButton *Startplacing;
    //grid Hleters
    QVBoxLayout *leters[10];
    QHBoxLayout *num[10];
    QGridLayout *screen;
    QHBoxLayout *menu;
    QPushButton *choice1;
    QPushButton *choice2;
    QPushButton *choice3;
    QPushButton *choice4;
    QGridLayout *menubar;
    QVBoxLayout *playerdata;
    QPushButton *start;

    QLabel *balan ;
    int balance = 500;

    //userdata
    QLineEdit *name;
    QLineEdit *colorshp;
    QString color;
    int seledship;
    int x_axis;
    int X_axis;
    int Y_axis;
    int playerlocation[20][2]={{0,0}};
    int i=0;
    bool placing = true;

    QPushButton *play;
    int game = 1;
    QGridLayout *playerboard;
    QPushButton *pboard[10][10];
    int playerscores=0;
    int pcscores = 0;
    int pclocation[20][2];
    string title;

public slots:
    void turnchanger();
    void gameon();
    void shwoscore();
    void startgame();
    void viwebalance();
    void gamestart();
    void startplacing();
    void shipplacing();
    void automatic();

   // these functions are used to save which ship is selected as every ships is connect to these function accordinagaly

    void Ship4(){ seledship = 4; for(int i=0; i<seledship;i++){ship4[i]->setEnabled(false);};  }
    void Ship3_1(){ seledship = 3; for(int i=0; i<seledship;i++) {ship3_1[i]->setEnabled(false);};}
    void Ship3_2(){ seledship = 3; for(int i=0; i<seledship;i++) {ship3_2[i]->setEnabled(false);};}
    void Ship2_1(){ seledship = 2; for(int i=0; i<seledship;i++) {ship2_1[i]->setEnabled(false);};}
    void Ship2_2(){ seledship = 2; for(int i=0; i<seledship;i++) {ship2_2[i]->setEnabled(false);};}
    void Ship2_3(){ seledship = 2; for(int i=0; i<seledship;i++) {ship2_3[i]->setEnabled(false);};}
    void Ship11(){ seledship = 1; ship1_1->setEnabled(false);}
    void Ship12(){ seledship = 1; ship1_2->setEnabled(false);}
    void Ship13(){ seledship = 1; ship1_3->setEnabled(false);}
    void Ship14(){ seledship = 1; ship1_4->setEnabled(false);}


   // these functions are connected to the buttons of grid named as loaction[10][10]

    void positon1(){ x_axis = 0; Y_axis = 0;   shipplacing(); }
    void positon2(){ x_axis = 0; Y_axis = 1;   shipplacing(); }
    void positon3(){ x_axis = 0; Y_axis = 2;   shipplacing(); }
    void positon4(){ x_axis = 0; Y_axis = 3;   shipplacing(); }
    void positon5(){ x_axis = 0; Y_axis = 4;   shipplacing(); }
    void positon6(){ x_axis = 0; Y_axis = 5;   shipplacing(); }
    void positon7(){ x_axis = 0; Y_axis = 6;   shipplacing(); }
    void positon8(){ x_axis = 0; Y_axis = 7;   shipplacing();}
    void positon9(){ x_axis = 0; Y_axis = 8;   shipplacing();}
    void positon10(){ x_axis = 0; Y_axis = 9;  shipplacing();}

    void positon11(){ x_axis = 1; Y_axis = 0;  shipplacing();}
    void positon12(){ x_axis = 1; Y_axis = 1;  shipplacing();}
    void positon13(){ x_axis = 1; Y_axis = 2;  shipplacing();}
    void positon14(){ x_axis = 1; Y_axis = 3;  shipplacing();}
    void positon15(){ x_axis = 1; Y_axis = 4;  shipplacing();}
    void positon16(){ x_axis = 1; Y_axis = 5;  shipplacing();}
    void positon17(){ x_axis = 1; Y_axis = 6;  shipplacing();}
    void positon18(){ x_axis = 1; Y_axis = 7;  shipplacing();}
    void positon19(){ x_axis = 1; Y_axis = 8;  shipplacing();}
    void positon20(){ x_axis = 1; Y_axis = 9;  shipplacing();}

    void positon21(){ x_axis = 2; Y_axis = 0;  shipplacing();}
    void positon22(){ x_axis = 2; Y_axis = 1;  shipplacing();}
    void positon23(){ x_axis = 2; Y_axis = 2;  shipplacing();}
    void positon24(){ x_axis = 2; Y_axis = 3;  shipplacing();}
    void positon25(){ x_axis = 2; Y_axis = 4;  shipplacing();}
    void positon26(){ x_axis = 2; Y_axis = 5;  shipplacing();}
    void positon27(){ x_axis = 2; Y_axis = 6;  shipplacing();}
    void positon28(){ x_axis = 2; Y_axis = 7;  shipplacing();}
    void positon29(){ x_axis = 2; Y_axis = 8;  shipplacing();}
    void positon30(){ x_axis = 2; Y_axis = 9;  shipplacing();}

    void positon31(){ x_axis = 3; Y_axis = 0;  shipplacing();}
    void positon32(){ x_axis = 3; Y_axis = 1;  shipplacing();}
    void positon33(){ x_axis = 3; Y_axis = 2;  shipplacing();}
    void positon34(){ x_axis = 3; Y_axis = 3;  shipplacing();}
    void positon35(){ x_axis = 3; Y_axis = 4;  shipplacing();}
    void positon36(){ x_axis = 3; Y_axis = 5;  shipplacing();}
    void positon37(){ x_axis = 3; Y_axis = 6;  shipplacing();}
    void positon38(){ x_axis = 3; Y_axis = 7;  shipplacing();}
    void positon39(){ x_axis = 3; Y_axis = 8;  shipplacing();}
    void positon40(){ x_axis = 3; Y_axis = 9;  shipplacing();}


    void positon41(){ x_axis = 4; Y_axis = 0;  shipplacing();}
    void positon42(){ x_axis = 4; Y_axis = 1;  shipplacing();}
    void positon43(){ x_axis = 4; Y_axis = 2;  shipplacing();}
    void positon44(){ x_axis = 4; Y_axis = 3;  shipplacing();}
    void positon45(){ x_axis = 4; Y_axis = 4;  shipplacing();}
    void positon46(){ x_axis = 4; Y_axis = 5;  shipplacing();}
    void positon47(){ x_axis = 4; Y_axis = 6;  shipplacing();}
    void positon48(){ x_axis = 4; Y_axis = 7;  shipplacing();}
    void positon49(){ x_axis = 4; Y_axis = 8;  shipplacing();}
    void positon50(){ x_axis = 4; Y_axis = 9;  shipplacing();}


    void positon51(){ x_axis = 5; Y_axis = 0;  shipplacing();}
    void positon52(){ x_axis = 5; Y_axis = 1;  shipplacing();}
    void positon53(){ x_axis = 5; Y_axis = 2;  shipplacing();}
    void positon54(){ x_axis = 5; Y_axis = 3;  shipplacing();}
    void positon55(){ x_axis = 5; Y_axis = 4;  shipplacing();}
    void positon56(){ x_axis = 5; Y_axis = 5;  shipplacing();}
    void positon57(){ x_axis = 5; Y_axis = 6;  shipplacing();}
    void positon58(){ x_axis = 5; Y_axis = 7;  shipplacing();}
    void positon59(){ x_axis = 5; Y_axis = 8;  shipplacing();}
    void positon60(){ x_axis = 5; Y_axis = 9;  shipplacing();}


    void positon61(){ x_axis = 6; Y_axis = 0;  shipplacing();}
    void positon62(){ x_axis = 6; Y_axis = 1;  shipplacing();}
    void positon63(){ x_axis = 6; Y_axis = 2;  shipplacing();}
    void positon64(){ x_axis = 6; Y_axis = 3;  shipplacing();}
    void positon65(){ x_axis = 6; Y_axis = 4;  shipplacing();}
    void positon66(){ x_axis = 6; Y_axis = 5;  shipplacing();}
    void positon67(){ x_axis = 6; Y_axis = 6;  shipplacing();}
    void positon68(){ x_axis = 6; Y_axis = 7;  shipplacing();}
    void positon69(){ x_axis = 6; Y_axis = 8;  shipplacing();}
    void positon70(){ x_axis = 6; Y_axis = 9;  shipplacing();}


    void positon71(){ x_axis = 7; Y_axis = 0;  shipplacing();}
    void positon72(){ x_axis = 7; Y_axis = 1;  shipplacing();}
    void positon73(){ x_axis = 7; Y_axis = 2;  shipplacing();}
    void positon74(){ x_axis = 7; Y_axis = 3;  shipplacing();}
    void positon75(){ x_axis = 7; Y_axis = 4;  shipplacing();}
    void positon76(){ x_axis = 7; Y_axis = 5;  shipplacing();}
    void positon77(){ x_axis = 7; Y_axis = 6;  shipplacing();}
    void positon78(){ x_axis = 7; Y_axis = 7;  shipplacing();}
    void positon79(){ x_axis = 7; Y_axis = 8;  shipplacing();}
    void positon80(){ x_axis = 7; Y_axis = 9;  shipplacing();}


    void positon81(){ x_axis = 8; Y_axis = 0;  shipplacing();}
    void positon82(){ x_axis = 8; Y_axis = 1;  shipplacing();}
    void positon83(){ x_axis = 8; Y_axis = 2;  shipplacing();}
    void positon84(){ x_axis = 8; Y_axis = 3;  shipplacing();}
    void positon85(){ x_axis = 8; Y_axis = 4;  shipplacing();}
    void positon86(){ x_axis = 8; Y_axis = 5;  shipplacing();}
    void positon87(){ x_axis = 8; Y_axis = 6;  shipplacing();}
    void positon88(){ x_axis = 8; Y_axis = 7;  shipplacing();}
    void positon89(){ x_axis = 8; Y_axis = 8;  shipplacing();}
    void positon90(){ x_axis = 8; Y_axis = 9;  shipplacing();}


    void positon91(){ x_axis = 9; Y_axis = 0;  shipplacing();}
    void positon92(){ x_axis = 9; Y_axis = 1;  shipplacing();}
    void positon93(){ x_axis = 9; Y_axis = 2;  shipplacing();}
    void positon94(){ x_axis = 9; Y_axis = 3;  shipplacing();}
    void positon95(){ x_axis = 9; Y_axis = 4;  shipplacing();}
    void positon96(){ x_axis = 9; Y_axis = 5;  shipplacing();}
    void positon97(){ x_axis = 9; Y_axis = 6;  shipplacing();}
    void positon98(){ x_axis = 9; Y_axis = 7;  shipplacing();}
    void positon99(){ x_axis = 9; Y_axis = 8;  shipplacing();}
    void positon100(){ x_axis = 9; Y_axis = 9;  shipplacing(); }


};


#endif // UTIL_H

