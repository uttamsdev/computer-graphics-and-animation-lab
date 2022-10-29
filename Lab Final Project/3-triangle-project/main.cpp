#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(WHITE);
    line(320,100, 220,250);
    line(220,250, 420,250);
    line(420,250, 320,100);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(321,221, WHITE);


    getch();
}
