#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);
    line(200,200, 100,400);

    setcolor(WHITE);
    line(200,200, 300,400);

    setcolor(BLUE);
    line(100,400, 300,400);


    getch();
    return 0;
}
