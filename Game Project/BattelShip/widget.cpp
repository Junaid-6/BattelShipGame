#include "util.h"
#include<QHBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{   window = new QGridLayout(this);

    menu = new QHBoxLayout();

    choice1 = new QPushButton("Leader Board",this);
    choice1->setStyleSheet("background-color:yellow");
    connect(choice1,SIGNAL(clicked()), this, SLOT(savedata()));
    choice2 = new QPushButton("Start New Game",this);
    choice2->setStyleSheet("background-color:yellow");
    connect(choice2,SIGNAL(clicked()), this, SLOT(startgame()));
    choice3 = new QPushButton("Ballance",this);
    choice3->setStyleSheet("background-color:yellow");
    connect(choice3,SIGNAL(clicked()), this, SLOT(viwebalance()));
    choice4 = new QPushButton("Options",this);
    choice4->setStyleSheet("background-color:yellow");

    menu->addWidget(choice1);
    menu->addWidget(choice2);
    menu->addWidget(choice3);
    menu->addWidget(choice4);
    menubar = new QGridLayout();
    menubar->addLayout(menu,0,0);

    screen = new QGridLayout(this);
    screen->setSpacing(0);
    screen->addLayout(menubar,0,0);
    setStyleSheet("background-color:black");
    window->addLayout(screen,0,0);


}

void Widget::drawboard()
{   gamegrid = new QGridLayout(this);

    QString d[10] = {"A","B","C","D","E","F","G","H","I","J"};


    for(int i=0; i<10; i++){
        QLabel *l = new QLabel(this);
        l->setStyleSheet("border: 3px solid black;");
        l->setStyleSheet("background-color:red");
        l->setText(d[i]);
        leters[i] = new QVBoxLayout(this);
        leters[i]->addWidget(l);
        gamegrid->addLayout(leters[i],i+1,0);

        QLabel *n = new QLabel(this);
        n->setText(QString::number(i));
        n->setStyleSheet("border: 3px solid black;");
        n->setStyleSheet("background-color:red");
        num[i] = new QHBoxLayout(this);
        num[i]->addWidget(n);
        gamegrid->addLayout(num[i],0,(i+1));

    }

//=======================================================================================///

   X_axis = 0;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon1()));
    gamegrid->addWidget(location[X_axis][Y_axis],1,1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon2()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon3()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon4()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon5()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon6()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon7()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon8()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon9()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon10()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    X_axis = 1;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon11()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon12()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon13()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon14()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon15()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon16()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon17()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon18()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon19()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon20()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    X_axis = 2;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon1()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon22()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon23()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon24()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon25()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon26()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon27()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon28()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon29()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon30()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    X_axis = 3;

    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon31()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon32()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon33()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon34()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon35()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon36()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon37()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon38()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon39()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon40()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    X_axis = 4;

    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon41()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon42()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon43()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon44()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon45()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon46()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon47()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon48()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon49()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon50()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    X_axis = 5;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon51()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon52()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon53()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon54()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon55()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon56()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon57()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon58()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon59()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon60()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);
    X_axis = 6;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon61()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon62()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon63()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon64()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon65()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon66()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon67()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon68()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon69()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon70()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    X_axis = 7;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon71()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon72()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon73()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon74()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon75()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon76()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon77()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon78()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon79()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon80()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    X_axis = 8;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon81()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


     Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon82()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

     Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon83()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

     Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon84()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

     Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon85()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon86()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon87()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

     Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon88()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

      Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon89()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon90()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    X_axis = 9;
    Y_axis = 0;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon91()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);


    Y_axis = 1;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon92()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 2;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon93()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 3;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon94()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 4;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon95()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 5;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon96()));
   gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 6;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon97()));
   gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 7;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon98()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);

    Y_axis = 8;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon99()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);
    Y_axis = 9;
    location[X_axis][Y_axis] = new QPushButton(this);
    location[X_axis][Y_axis]->setStyleSheet("background-color:red");
    connect(location[X_axis][Y_axis],SIGNAL(clicked()), this, SLOT(positon100()));
    gamegrid->addWidget(location[X_axis][Y_axis],X_axis+1,Y_axis+1);
//==============================================================================================//

     Startplacing = new QPushButton("Start Placing");
     Startplacing->setStyleSheet("background-color:orange");
     connect(Startplacing,SIGNAL(clicked()), this, SLOT(startplacing()));
     gamegrid->addWidget(Startplacing,13,0);
     screen->setHorizontalSpacing(0);
     screen->setVerticalSpacing(0);


     screen->addLayout(gamegrid,3,0);


 }

Widget::~Widget()
{
}
//============================================================================================//





