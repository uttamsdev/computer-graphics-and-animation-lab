#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(YELLOW);
    line(20,30, 200,30); // 2 points x,y axis

    getch();
    return 0;
}
