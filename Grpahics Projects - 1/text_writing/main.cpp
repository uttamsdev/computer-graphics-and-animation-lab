#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    //outtext("Graphics is very easy to draw");
    //outtextxy(70,10, "Grpahics is fun"); //text writing position , msg/text


    //adding animation left to right
    for(int x = 70; x <= 645; x++){
        outtextxy(x,100, "Graphics is fun");
        delay(5); // delay 5 mile second
    }

    // right to left
    /*for(int x = 635; x >= -200; x--){
        outtextxy(x,100, "Grpahics is fun");
        delay(5); // delay 5 mile second
    */

    outtextxy(-300,100, "Graphics is fun");
    for(int x = -300; x <= 645; x++){
        outtextxy(x,100, "Graphics is fun");
        delay(5);
    }

    getch();
    return 0;
}
