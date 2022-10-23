#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(BLUE);
    rectangle(0,0, 645,479);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(1,1, BLUE);

    getch();

}
