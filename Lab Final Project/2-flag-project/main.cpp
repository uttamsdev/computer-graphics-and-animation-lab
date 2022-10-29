#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(GREEN);
    rectangle(120,130, 500,350);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(121,131, GREEN);

    setcolor(RED);
    circle(310,240, 70);
    setfillstyle(SOLID_FILL, RED);
    floodfill(311,241, RED);

    getch();
}
