#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);

    rectangle(150,300, 300,150);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(151,151, YELLOW);

    getch();

    return 0;
}
