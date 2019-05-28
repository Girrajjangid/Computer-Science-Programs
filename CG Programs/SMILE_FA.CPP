#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
circle(200,200,50);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(200,200,WHITE);
setcolor(BLACK);
arc(200,200,200,340,40);
ellipse(220,180,0,360,5,8);
ellipse(180,180,0,360,5,8);
circle(200,210,5);
A:{if(kbhit()!=0){
printf("\t\t\tOh!you hit me!");
cleardevice();
setcolor(WHITE);
circle(400,200,50);
setfillstyle(SOLID_FILL,RED);
floodfill(400,200,WHITE);
setcolor(BLACK);
arc(400,260,50,130,40);
ellipse(375,180,0,360,5,8);
ellipse(425,180,0,360,5,8);
circle(400,210,5);
delay(2000);return 0;}}
goto A;
getch();
closegraph();
}