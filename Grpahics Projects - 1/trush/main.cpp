#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /*for(int a = 0, b = 50; a <= 635, b <= 635; a++, b++){
        line(a,50, b,50);
        delay(5);
    }*/

    for(int i = 200; i <= 635; i++){
        circle(i+100,i+100, 110);
        delay(5);
    }
    getch();

    return 0;
}
