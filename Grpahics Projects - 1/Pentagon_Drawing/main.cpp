#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);
    line(200,50, 50,200); // AB
    line(200,50, 320,200); // AC
    line(50,200, 100, 350); // BD
    line(320,200, 280, 350); //CE
    line(100,350, 280,350); //DE

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(51,201, YELLOW);
    getch();
    return 0;
}
