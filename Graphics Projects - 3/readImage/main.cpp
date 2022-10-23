#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


    int x = getmaxx();
    int y = getmaxy();

    cout << x <<endl << y <<endl;
    readimagefile("ks.jpg", 0,0, x,y);

    getch();
}
