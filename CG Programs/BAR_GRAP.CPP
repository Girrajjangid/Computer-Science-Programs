#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm,j=140;
initgraph(&gd,&gm,"");
line(100,300,600,300);
line(100,300,100,50);
rectangle(120,90,150,300);
rectangle(280,140,310,300);
rectangle(340,200,370,300);
rectangle(200,150,230,300);
for(int i=1;i<5;i++){
setfillstyle(SOLID_FILL,i);
floodfill(j,280,WHITE);
j+=75;}
getch();
closegraph();
}
