#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);
    line(150,50, 300,50); // AB
    line(150,50, 50,120); // AC
    line(300,50, 400,120); // BD
    line(50,120, 150,180); // CE
    line(400,120, 300, 180); // DF
    line(150,180, 300,180); // EF

    //setfillstyle(SOLID_FILL, YELLOW);
    //floodfill(151,181, YELLOW);
    getch();
    return 0;
}
