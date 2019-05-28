#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int gd=DETECT,gm,i,j=10;
initgraph(&gd,&gm,"");
setfillstyle(INTERLEAVE_FILL,RED);
pieslice(100,100,0,65,80);
setfillstyle(SOLID_FILL,BLUE);
pieslice(100,100,65,125,80);
setfillstyle(HATCH_FILL,GREEN);
pieslice(100,100,125,360,80);
getch();
closegraph();
}
