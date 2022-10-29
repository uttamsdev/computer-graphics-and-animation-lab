#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int circleRectangleAnimation(int centerPoint[], int rectanglePoints[])
{
for(int i = 0; i<520; i++) {
if(i<195){
drawpoly(5, rectanglePoints);
rectanglePoints[0]--;
rectanglePoints[2]--;
rectanglePoints[4]--;
rectanglePoints[6]--;
rectanglePoints[8]--;
circle(centerPoint[0]++, centerPoint[1], 60);
}
else {
drawpoly(5, rectanglePoints);
rectanglePoints[0]++;
rectanglePoints[2]++;
rectanglePoints[4]++;
rectanglePoints[6]++;
rectanglePoints[8]++;
circle(centerPoint[0]--, centerPoint[1], 60);
}
delay(15);
cleardevice();
}
}
int main(){
int gd, gm;
detectgraph(&gd,&gm);
initgraph(&gd, &gm, "C:\\TURBOC3\\BGT");
int centerPoint[] = {50, 200 };
int rectanglePoints[] = {450,150, 600,150, 600,250, 450,250, 450,150};
circleRectangleAnimation(centerPoint,rectanglePoints);
getch();
return 0;
}
