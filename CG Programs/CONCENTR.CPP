#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int gd=DETECT,gm,i,j=10;
initgraph(&gd,&gm,"");
setcolor(1);
circle(200,200,60);
setcolor(2);
circle(200,200,90);
setcolor(3);
circle(200,200,110);
getch();
closegraph();
}
