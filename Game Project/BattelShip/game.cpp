//============================================================================
// Name        : .cpp
// Author      : Muhammad Junaid Ahmad
// Version     : 1.0.0
// Copyright   : (c) Reserved
// Description : Basic 2D game of Battleship.
//============================================================================

#define Battleship_CPP_
#include "util.h"
#include<QLabel>
#include <QApplication>
#include<fstream>
#include <iostream>
#include<string>
using namespace std;


//=======================================================================================================//
/* this function assgin the seledship number
 * that determines which ship is to be placed by calling shipplaccing
 *  this function is called when auto button is pressed*/

void Widget::automatic()
{
   {
   seledship = 4;
   x_axis = 1;
   Y_axis = QRandomGenerator::global()->bounded(2);
   shipplacing();
   seledship = 3;
   x_axis = 3;
   Y_axis = QRandomGenerator::global()->bounded(3);
   shipplacing();
   seledship = 3;
   x_axis = 5;
   Y_axis = QRandomGenerator::global()->bounded(4);
   shipplacing();
   seledship = 2;
   x_axis = 7;
   Y_axis = QRandomGenerator::global()->bounded(8);
   shipplacing();
   seledship = 2;
   x_axis = QRandomGenerator::global()->bounded(8);
   Y_axis = QRandomGenerator::global()->bounded(8);
   shipplacing();
   seledship = 1;
   x_axis = QRandomGenerator::global()->bounded(8);
   Y_axis = QRandomGenerator::global()->bounded(8);
   shipplacing();
   seledship = 1;
   x_axis = QRandomGenerator::global()->bounded(8);
   Y_axis = QRandomGenerator::global()->bounded(8);
   shipplacing();
   seledship = 1;
   x_axis = QRandomGenerator::global()->bounded(8);
   Y_axis = QRandomGenerator::global()->bounded(8);
   shipplacing();
   seledship = 1;
   x_axis = QRandomGenerator::global()->bounded(8);
   Y_axis = QRandomGenerator::global()->bounded(8);
   shipplacing();
   }


}
//====================================================================================================
//this will show score when leader board is pressed
void Widget::shwoscore()
{
   }

//====================================================================================================

/* When Start New Game button is pressed this function get called here it takes the user information
 * */
void Widget::startgame()
{
    name = new QLineEdit(this);
    name->setPlaceholderText("Name");
    name->setStyleSheet("background-color:white");

    //colorshp is used to get the value of color for ship

    colorshp = new QLineEdit(this);
    colorshp->setStyleSheet("background-color:white");
    colorshp->setPlaceholderText("Color of Batttelships");


    start = new QPushButton("Start",this);
    start->setStyleSheet("background-color:yellow");
    /*
     *When start bution is pressed it calles the gamestart function which is present just below
     */
    connect(start,SIGNAL(clicked()), this, SLOT(gamestart()));

    /* here playerdata is a layout that add the user name and selected color of ships to menuebar */

    playerdata = new QVBoxLayout();
    playerdata->addWidget(name);
    playerdata->addWidget(colorshp);
    playerdata->addWidget(start);
    menubar->addLayout(playerdata,1,0);

}
//===================================================================================================

// this Function is called when Start button is pressed
void Widget::gamestart()
{
    //changing the start button text

    start->setText("Started...");

    //calling when gamestart button is pressed this function present at line 37 of widget.cpp file
    drawboard();

    //this function stores the the user info and it is present at line 301
    savedata();

}

//====================================================================================================

/* this function is called when the balance button button is pressed
 */

void Widget::viwebalance()
{
    //balan is label that contain the current user balance

    balan = new QLabel(this);
    balan->setStyleSheet("background-color:orange");

    // QString::number(balance) converting number to QString

    balan->setText("Your Balance: "+QString::number(balance));

    //Screen is main grid where every thing is added
    screen->addWidget(balan,1,0);
}
//==========================================================================================================================

// this function is called when Start Placing button is pressed

void Widget::startplacing()
{
    // this function is draw the ships which we select and place on the game board line present just below 1
    drawships();

    // Creating play buton which starts the game on press when this function is pressed
    // gameon function is called present below 2

    play = new QPushButton("Play",this);
    play->setStyleSheet("background-color:green");
    connect(play,SIGNAL(clicked()),this ,SLOT(gameon()));

    // shipsgrid is grid that cantain the ships which are to be placed and we adding the play button there

    shipsgrid->addWidget(play);
}
//===================================================================================================


// this Function draw the ships which is to placed

void Widget::drawships()
{
    // color seting to user defined color
    color = "background-color:";
    color += colorshp->text();
    shipsgrid = new QGridLayout(this);

 // these loops are used to make the ships using array of buttons
    //  here ship3_1  where 3-> length of ship  and 1 -> the number of ship of length 3

    //placing ship of length4

    for(int i=0; i<4; i++){
            ship4[i] = new QPushButton(this);
            ship4[i]->setStyleSheet(color);
            connect( ship4[i],SIGNAL(clicked()),this,SLOT(Ship4()));
            shipsgrid->addWidget(ship4[i],1,6+i);
                                            }

    //placing ship of length3
    //ship3_1 placing

    for(int i=0; i<3; i++){

            ship3_1[i] = new QPushButton(this);
            ship3_1[i]->setStyleSheet(color);
            connect( ship3_1[i],SIGNAL(clicked()),this,SLOT(Ship3_1()));
            shipsgrid->addWidget(ship3_1[i],3,3+i);
            }

  //ship3_2  placing
    for(int i=0; i<3; i++){
            ship3_2[i] = new QPushButton(this);
            ship3_2[i]->setStyleSheet(color);
            connect( ship3_2[i],SIGNAL(clicked()),this,SLOT(Ship3_2()));
            shipsgrid->addWidget(ship3_2[i],3,7+i);
            }
    //placing ship of length2

            //ship2_1 placing
    for(int i=0; i<2; i++){
            ship2_1[i] = new QPushButton(this);
            ship2_1[i]->setStyleSheet(color);
            connect( ship2_1[i],SIGNAL(clicked()),this,SLOT(Ship2_1()));
            shipsgrid->addWidget(ship2_1[i],5,2+i);}
            //ship2_2 placing
    for(int i=0; i<2; i++){
            ship2_2[i] = new QPushButton(this);
            ship2_2[i]->setStyleSheet(color);
           connect( ship2_2[i],SIGNAL(clicked()),this,SLOT(Ship2_2()));
            shipsgrid->addWidget(ship2_2[i],5,5+i);}
            //ship2_3 placing
    for(int i=0; i<2; i++){
            ship2_3[i] = new QPushButton(this);
            ship2_3[i]->setStyleSheet(color);
            connect( ship2_3[i],SIGNAL(clicked()),this,SLOT(Ship2_3()));
            shipsgrid->addWidget(ship2_3[i],5,8+i);

    }
    //placing ship of length1
            //ship1_1 placing
            ship1_1 = new QPushButton(this);
            ship1_1->setStyleSheet(color);
            connect( ship1_1,SIGNAL(clicked()),this,SLOT(Ship11()));
            shipsgrid->addWidget(ship1_1,7,3);
            //ship1_2 placing
            ship1_2 = new QPushButton(this);
            ship1_2->setStyleSheet(color);
            connect( ship1_2,SIGNAL(clicked()),this,SLOT(Ship12()));
            shipsgrid->addWidget(ship1_1,7,5);
            //ship1_3 placing
            ship1_3 = new QPushButton(this);
            ship1_3->setStyleSheet(color);
           connect( ship1_3,SIGNAL(clicked()),this,SLOT(Ship13()));
            shipsgrid->addWidget(ship1_1,7,7);
           // ship1_4 placing  7 is x-cordinate
            ship1_4 = new QPushButton(this);
            ship1_4->setStyleSheet(color);
            connect( ship1_4,SIGNAL(clicked()),this,SLOT(Ship14()));
            shipsgrid->addWidget(ship1_4,7,9);


 // Auto button to shipgrid when it is pressed ships are placed automatically

            Auto = new QPushButton("Auto",this);
            Auto->setStyleSheet("background-color:gray");
            connect(Auto,SIGNAL(clicked()), this, SLOT(automatic()));
            shipsgrid->addWidget(Auto);

            shipsgrid->setSpacing(0);

            screen->addLayout(shipsgrid,3,1);

}
//==========================================================================================================

// it create the 10x10 grid of computer ships

void Widget::gameon()

{
        color = "background-color:";
        color += colorshp->text();
        playerboard = new QGridLayout(this);

        QString d[10] = {"A","B","C","D","E","F","G","H","I","J"};

       // this loop is used to generate the A,B,C...  vertical line of computer ships grid

        for(int i=0; i<10; i++){
            QLabel *l = new QLabel(this);
            l->setStyleSheet("border: 3px solid black;");
            l->setStyleSheet("background-color:red");
            l->setText(d[i]);
            leters[i] = new QVBoxLayout(this);
            leters[i]->addWidget(l);
            playerboard->addLayout(leters[i],i+1,0);
            //playerboard->setStyleSheet("background-color:yellow");

            QLabel *n = new QLabel(this);
            n->setText(QString::number(i));
            n->setStyleSheet("border: 3px solid black;");
            num[i] = new QHBoxLayout(this);
            num[i]->addWidget(n);
            playerboard->addLayout(num[i],0,(i+1));

        }
    // these loops generate the array of buttons pboard[10][10] and each button is unit length of the grid
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            pboard[i][j] = new QPushButton(this);
            pboard[i][j]->setStyleSheet("background-color:red");

            //playboard is grid that is just a display of user ships the next loops are used to
            playerboard->addWidget(pboard[i][j],i+1,j+1);
        }
    }

    // allocate the position of user ships which were saved during the placing of ships by user in a array
    // of playerloaction[20][2]; as position have row number and column number
    // rowx1 and rowx2 are used to just break the array of [20][2] into [10][2] + [10][2] respectively

    int rowx1[10][2];
    int rowx2[10][2];
    for(int i=0; i<10; i++){
          rowx1[i][0] = playerlocation[i][0];
          rowx2[i][0] = playerlocation[i+10][0];

          rowx1[i][1] = playerlocation[i][1];
          rowx2[i][1] = playerlocation[i+10][1];

          //pclocation[20][2] are used to store the positon of ships of Computer
          // the location is genrated by QRandomGenerator::global()->bounded(9)

          pclocation[i][0] = QRandomGenerator::global()->bounded(9);
          pclocation[i][0] = QRandomGenerator::global()->bounded(9);

          pclocation[i][1] = QRandomGenerator::global()->bounded(9);
          pclocation[i][1] = QRandomGenerator::global()->bounded(9);
        }

       // this loop is giving the color to ships of user pboard is grid that display the ships of user
       // here we are setting out the color of user ships

        for(int i=0; i<10; i++){
                 pboard[rowx1[i][0]][rowx1[i][1]]->setStyleSheet(color);
                 pboard[rowx2[i][0]][rowx2[i][1]]->setStyleSheet(color);

            }
    // placing a variable that stops the placing of ships if user press the Play button

    placing = false;

    screen->addLayout( playerboard,4,0);  // adding playerboard to screen

    // this loops reset the screen where user has placed its ships, as these were added to the pboard by up loop
    //
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            location[i][j]->setStyleSheet("background-color:red");
            location[i][j]->setEnabled(true);
        }
    }
}

// this function save the user data function gets called when pressed buton is pressed

void Widget::savedata()
{
    QString path= QCoreApplication::applicationDirPath() + QString("/highscores.txt");
    QFile file(path);
    QString namep = "Unknow", colr = "blue";
    namep = name->text();

    color = "background-color:";
    colr = colorshp->text();
    color = colr;
    const QString qString = namep;
    const QString qPath("highscores.txt");
      QFile qFile(qPath);
      if (qFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&qFile); out << namep+"\n";
        qFile.close();
      }

}

void glutTimerFunc(int,int,int){}

// this function is changing the turn
void Widget::turnchanger()
{
    int turn= 1;
        if(turn==1){
            for(int i=0; i<20; i++){

                    // if user hit the computer ships
                    if(x_axis == pclocation[i][0] && Y_axis == pclocation[i][1]){
                        location[x_axis][Y_axis]->setText("X");
                        playerscores+=1;
                        balance += 60;}

            } turn = 2;

            //setting the selected location unselectable
            location[x_axis][Y_axis]->setStyleSheet("background-color:white");
            location[x_axis][Y_axis]->setEnabled(false);

        }
         if(turn==2){

            // this will genrate a random position
            x_axis = QRandomGenerator::global()->bounded(9);
            Y_axis = QRandomGenerator::global()->bounded(9);

            for(int i=0; i<20; i++){

                // if computer hit the user ships

                if(x_axis == playerlocation[i][0] && Y_axis == playerlocation[i][1]){
                        pboard[x_axis][Y_axis]->setText("X");
                        pcscores+=1;
                    }
                }
            turn =1;

            //setting the selected location unselectable
            pboard[x_axis][Y_axis]->setStyleSheet("background-color:yellow");
            pboard[x_axis][Y_axis]->setEnabled(false);
            }

    }


//==================================================================================================================

// placing ships when we click on the grid for ships placing this function gets called

void Widget::shipplacing()

//when play button is press placing set to false
{   if(placing){
       color = "background-color:";
              color += colorshp->text();

          //making nearby location unplace able as placing start when a grid button is pressed

          location[x_axis][Y_axis+1]->setEnabled(false);
          location[x_axis+1][Y_axis]->setEnabled(false);
          location[x_axis-1][Y_axis]->setEnabled(false);

          // seledship is length of ship which were saved when a user selects the ships
          for(; seledship > 0; seledship--, i++){
           location[x_axis][Y_axis]->setStyleSheet(color);
           playerlocation[i][0] = x_axis;
           playerlocation[i][1] = Y_axis;
           location[x_axis+1][Y_axis]->setEnabled(false);
           location[x_axis-1][Y_axis]->setEnabled(false);
           Y_axis--;}
          location[x_axis][Y_axis]->setEnabled(false);
          location[x_axis+1][Y_axis]->setEnabled(false);
          location[x_axis-1][Y_axis]->setEnabled(false);
   }
    // condition for running game till user or pc wins
  else if(pcscores != 20 || playerscores != 20){
       turnchanger();
       }

    // to stop the running if any of pc or user wins
   if(pcscores == 10)
       name->setText(name->text()+"you Loss:(");
   if(playerscores == 10)
       name->setText(name->text()+"you win:)");
   // to update the balance of player
   viwebalance();

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    a.setStyleSheet("background-color:black");
    w.show();

    return a.exec();

}



































