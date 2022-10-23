#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int points[] = {50,50, 100,50, 75,100, 50,50};

    for(int i = 50; i <= 645; i++){
        drawpoly(4,points);
        points[0]++;
        //points[1]++;
        points[2]++;
       // points[3]++;
        points[4]++;
        //points[5]++;
        points[6]++;
        //points[7]++;
        delay(5);
        cleardevice();
    }
    getch();
}
