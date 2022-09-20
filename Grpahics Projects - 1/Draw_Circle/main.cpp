#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;
int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);
    circle(200,200, 100); // 200,200 x,y center point, 100 radius of the circle.

    setfillstyle(SOLID_FILL, YELLOW); // fill style & color
    floodfill(201,201, YELLOW); // any point of  the circle & color


    getch();
    return 0;
}
