#include <bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    //bar(100,100, 200,200);

    //bar3d(top-left, bottom-right, height);
      arc(250,250, 0,90, 50);
      arc(250,250, 90,180, 50);
      arc(300,250, 90,0, 50);
    getch();
}
