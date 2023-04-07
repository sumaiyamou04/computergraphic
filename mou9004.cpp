#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

using namespace std;

void flag()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"mou");

    setcolor(WHITE);
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);

    ellipse(70,52,180,0,7,21);

    line(85,50,85,70);
    line(85,50,95,60);
    line(95,60,105,50);
    line(105,50,105,70);
    //A
    line(115,70,125,50);
    line(125,50,135,70);
    line(120,60,130,60);
    //I
    line(140,50,150,50);
    line(145,50,145,70);
    line(140,70,150,70);
    //Y
    line(160,50,170,60);
    line(170,60,180,50);
    line(170,60,170,70);
    //A
    line(180,70,190,50);
    line(190,50,200,70);
    line(185,60,195,60);
//id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0

    line(235,92,235,112);
    line(235,92,225,102);//1
    line(225,102,237,102);
    setfillstyle(1,RED);
    //flag
    setcolor(YELLOW);
    rectangle(400,200,410,700);
    rectangle(380,700,430,720);
    rectangle(410,220,710,420);

    setfillstyle(1,WHITE);
    floodfill(402,201,YELLOW);
    floodfill(382,701,YELLOW);
    setcolor(YELLOW);
    rectangle(410,220,710,420);


    setfillstyle(1,GREEN);
    floodfill(412,222,YELLOW);
    setcolor(YELLOW);
    circle(560,320,70);
    setfillstyle(1,RED);
    floodfill(562,322,YELLOW);
    getch();
    closegraph();

}
void  star()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"mou");

    setcolor(WHITE);
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);

    ellipse(70,52,180,0,7,21);

    line(85,50,85,70);
    line(85,50,95,60);
    line(95,60,105,50);
    line(105,50,105,70);
    //A
    line(115,70,125,50);
    line(125,50,135,70);
    line(120,60,130,60);
    //I
    line(140,50,150,50);
    line(145,50,145,70);
    line(140,70,150,70);
    //Y
    line(160,50,170,60);
    line(170,60,180,50);
    line(170,60,170,70);
    //A
    line(180,70,190,50);
    line(190,50,200,70);
    line(185,60,195,60);
//id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0

    line(235,92,235,112);
    line(235,92,225,102);//1
    line(225,102,237,102);

    setfillstyle(1,RED);
    //STAR
    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1,BLUE);
    floodfill(520,380,BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);

    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1,BLUE);
    floodfill(520, 380, BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);
    getch();

    closegraph();




}
void nobita()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initgraph(&gd,&gm,"c://tc//bgi");
    initwindow(1000,800,"mou");

    setcolor(WHITE);
    arc(450,57,40,260,7);
    arc(448,68,220,95,6);

    ellipse(470,52,180,0,7,21);

    line(485,50,485,70);
    line(485,50,495,60);
    line(495,60,505,50);
    line(505,50,505,70);
    //A
    line(515,70,525,50);
    line(525,50,535,70);
    line(520,60,530,60);
    //I
    line(540,50,550,50);
    line(545,50,545,70);
    line(540,70,550,70);
    //Y
    line(560,50,570,60);
    line(570,60,580,50);
    line(570,60,570,70);
    //A
    line(580,70,590,50);
    line(590,50,600,70);
    line(585,60,595,60);
//id

    arc(452,101,75,279,12);//c
    //s
    arc(465,96,40,260,7);
    arc(463,107,220,95,6);
    //E
    line(477,90,477,110);
    line(477,90,487,90);
    line(477,110,487,110);
    line(477,100,484,100);
    //2
    arc(494,97,270,90,7);
    line(494,104,498,112);
    //0
    ellipse(512,102,0,360,7,11);
    ellipse(529,102,0,360,7,11);
    //1
    line(542,92,542,112);
    ellipse(554,102,0,360,7,11);//0
    line(565,92,565,112);//1
    circle(575,96,5);
    arc(572,102,270,90,11);//9
    ellipse(593,102,0,360,7,11);//0
    ellipse(610,102,0,360,7,11);//0

    line(635,92,635,112);
    line(635,92,625,102);//1
    line(625,102,637,102);


//rectangle();
    setfillstyle(1,RED);
    //floodfill(,YELLOW);






//__hair

    setcolor(15);

    arc(120,220,55,120,100);



//__face

    line(70,133,70,170);

    line(173,135,170,170);

    line(70,165,80,165);

    arc(120,180,180,0,50);

    line(160,170,170,168);



//__eye and eyeglass

    arc(95,155,60,160,20);

    circle(100,165,20);

    setfillstyle(1,0);

    floodfill(100,165,15);

    circle(106,165,9);

    setfillstyle(1,15);

    floodfill(106,165,15);

    setcolor(BLACK);

    circle(108,165,5);

    setfillstyle(1,3);

    floodfill(108,165,BLACK);



    setcolor(15);

    arc(145,150,-5,130,18);

    circle(140,165,20);

    circle(134,165,9);

    setfillstyle(1,15);

    floodfill(134,165,15);

    setcolor(BLACK);

    circle(133,165,5);

    setfillstyle(1,3);

    floodfill(133,165,BLACK);



//___nose

    setcolor(15);

    arc(122,185,200,120,5);



//_____ears

    arc(75,140,120,-130,22);

    arc(118,150,10,152,60);

    ellipse(120,202,180,0,15,20);

    line(105,201,140,201);

    arc(70,173,90,278,20);

    arc(60,175,350,80,5);

    arc(163,175,278,67,25);

    arc(179,175,100,-120,5);



//__nack and coalor

    arc(120,220,190,-10,20);

    arc(145,240,30,-260,15);

    arc(100,240,90,150,15);

    arc(120,260,10,75,20);

    line(140,255,159,233);

    arc(120,255,120,-180,20);

    line(100,255,85,233);



//_____shirt

    setcolor(WHITE);

    arc(95,273,100,150,40);

    arc(145,270,10,75,40);

    line(60,253,40,320);

    arc(60,300,350,20,100);

    line(185,263,198,275);

    line(195,277,220,265);

    arc(189,285,190,-130,30);

    arc(182,293,190,278,20);

    line(185,313,232,285);

    arc(150,299,150,198,70);

    arc(240,265,160,-50,20);



//___hand

    setcolor(15);

    ellipse(225,265,20,180,5,25);

    line(229,255,255,245);

    line(234,262,259,250);

    arc(229,262,320,0,30);

    line(240,272,260,260);

    arc(229,250,300,0,30);

    arc(245,245,300,0,10);

    line(81,300,75,320);

    line(10,320,200,318);
    getch();

    closegraph();


}
void man()
{
    int gd = DETECT, gm,i;
    initgraph(&gd, &gm, "");
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    initwindow(1000,800,"mou");
    for(i=1; i<200; i+=2)
    {
        if(i%3==0)
        {

            setcolor(WHITE);
            arc(550,57,40,260,7);
            arc(548,68,220,95,6);

            ellipse(570,52,180,0,7,21);

            line(585,50,585,70);
            line(585,50,595,60);
            line(595,60,605,50);
            line(605,50,605,70);
            //A
            line(615,70,625,50);
            line(625,50,635,70);
            line(620,60,630,60);
            //I
            line(640,50,650,50);
            line(645,50,645,70);
            line(640,70,650,70);
            //Y
            line(660,50,670,60);
            line(670,60,680,50);
            line(670,60,670,70);
            //A
            line(680,70,690,50);
            line(690,50,700,70);
            line(685,60,695,60);
//id

            arc(552,101,75,279,12);//c
            //s
            arc(565,96,40,260,7);
            arc(563,107,220,95,6);
            //E
            line(577,90,577,110);
            line(577,90,587,90);
            line(577,110,587,110);
            line(577,100,584,100);
            //2
            arc(594,97,270,90,7);
            line(594,104,598,112);
            //0
            ellipse(612,102,0,360,7,11);
            ellipse(629,102,0,360,7,11);
            //1
            line(642,92,642,112);
            ellipse(654,102,0,360,7,11);//0
            line(665,92,665,112);//1
            circle(675,96,5);
            arc(672,102,270,90,11);//9
            ellipse(693,102,0,360,7,11);//0
            ellipse(710,102,0,360,7,11);//0

            line(735,92,735,112);
            line(735,92,725,102);//1
            line(725,102,737,102);

//rectangle();
            setfillstyle(1,RED);
            //floodfill(,YELLOW);



//head
            circle(110,110,20);
            line(110,130,110,150);
//arms
            line(110,150,80,165);
            line(70,145,80,165);
//2nd arms
            line(110,150,150,170);
            line(150,170,125,185);
//body
            line(110,150,110,200);
            line(110,200,130,250);
//1st dram
            ellipse(500,200,0,360,40,20);
            line(460,200,460,300);
            line(540,200,540,300);
            ellipse(500,300,0,360,40,20);
//2nd dram
            ellipse(300,200,0,360,40,20);
            line(260,200,260,300);
            line(340,200,340,300);
            ellipse(300,300,0,360,40,20);
//man
            circle(400,100,30);
            line(400,130,400,160);
            //arms
            line(400,160,300,190);//+20
            line(400,160,500,170);//+20
            //body
            line(400,160,400,230);
            //legs
            line(400,230,370,280);
            line(400,230,430,280);
            //stage
            // line(340,280,460,280);
            delay(100);
            cleardevice();
        }
        else
        {
            circle(110,110,20);
            line(110,130,110,150);
//line
            line(110,150,80,165);
            line(80,165,70,185);
//line
            line(110,150,140,170);
            line(140,170,160,150);
//body
            line(110,150,110,200);
//legs
            line(110,200,90,250);

            line(110,200,130,220);
            line(130,220,120,250);
//1st dram
            ellipse(500,200,0,360,40,20);
            line(460,200,460,300);
            line(540,200,540,300);
            ellipse(500,300,0,360,40,20);
//2nd dram
            ellipse(300,200,0,360,40,20);
            line(260,200,260,300);
            line(340,200,340,300);
            ellipse(300,300,0,360,40,20);
//man
            circle(400,100,30);
            line(400,130,400,160);
            //arms
            line(400,160,300,170);//+20
            line(400,160,500,190);//+20
            //body
            line(400,160,400,230);
            //legs
            line(400,230,370,280);
            line(400,230,430,280);
            delay(100);
            cleardevice();
        }
    }



    getch();

    closegraph();

}
void car()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"mou");

    setcolor(WHITE);
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);

    ellipse(70,52,180,0,7,21);

    line(85,50,85,70);
    line(85,50,95,60);
    line(95,60,105,50);
    line(105,50,105,70);
    //A
    line(115,70,125,50);
    line(125,50,135,70);
    line(120,60,130,60);
    //I
    line(140,50,150,50);
    line(145,50,145,70);
    line(140,70,150,70);
    //Y
    line(160,50,170,60);
    line(170,60,180,50);
    line(170,60,170,70);
    //A
    line(180,70,190,50);
    line(190,50,200,70);
    line(185,60,195,60);
//id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0

    line(235,92,235,112);
    line(235,92,225,102);//1
    line(225,102,237,102);


//rectangle();
    setfillstyle(1,RED);
    //floodfill(,YELLOW);


    setcolor(WHITE);
    line(200,300,200,400);
    line(200,400,250,400);
    line(250,400,260,380);
    line(260,380,340,380);
    line(340,380,350,400);
    line(350,400,450,400);
    line(450,400,460,380);
    line(460,380,540,380);
    line(540,380,550,400);
    line(550,400,650,400);
    line(650,400,630,300);
    line(630,300,570,300);
    line(570,300,540,220);
    line(540,220,260,220);
    line(260,220,220,300);
    line(220,300,200,300);
    setfillstyle(1,GREEK_CHARSET);
    floodfill(262,304,WHITE);
    setcolor(RED);
    circle(300,420,37);
    circle(500,420,37);
    setfillstyle(1,WHITE);
    floodfill(304,422,RED);
    floodfill(504,422,RED);
    setcolor(WHITE);
    line(400,220,400,300);
    setfillstyle(1,WHITE);
    setcolor(RED);
    rectangle(270,230,370,295);
    rectangle(430,230,530,295);
    setfillstyle(1,GREEN);
    floodfill(272,234,RED);
    floodfill(432,234,RED);


    getch();

    closegraph();

}


int main()

{
    cout << "==============" <<endl;
    cout << "==============" <<endl;
    cout << "1. MAN DANCING"<<endl;
    cout << "2.STAR"<<endl;
    cout << "3.NOBITA CARTOON"<<endl;
    cout << "4.FLAG"<<endl;
    cout << "5.CAR"<<endl;
    cout << "==============" <<endl;

    int select;
    while(1)
    {
        cout << "Enter choice number:";
        cin>>select;

        switch(select)

        {

        case 1:

            man();
            break;
        case 2:
            star();
            break;
        case 3:
            nobita();
            break;
        case 4:
            flag();
            break;

        case 5:
            car();
            break;
        default:
            cout << "...................." <<endl;
            cout << "Invalid" <<endl;
            cout << "please try again" <<endl;
            cout << "...................." <<endl;

        }
    }

}
