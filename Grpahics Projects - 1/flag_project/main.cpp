#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(GREEN);
    line(20,30, 200,30);
    line(20,30, 20,150);
    line(20,150, 200,150);
    line(200,30, 200,150);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(21,31, GREEN);


    setcolor(RED);
    circle(110,91, 40);
    setfillstyle(SOLID_FILL, RED);
    floodfill(111,96, RED);


    //setfillstyle(SOLID_FILL, YELLOW);
    //floodfill(21,31, YELLOW);
    getch();
    return 0;
}
