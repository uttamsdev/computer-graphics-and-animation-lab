#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    //arc(200,300, 0,90, 50);
     arc(200,300, 90,180, 50);
    getch();
    return 0;
}
