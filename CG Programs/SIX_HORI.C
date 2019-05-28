#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int gd=DETECT,gm,i,j=50;
initgraph(&gd,&gm,"C://TURBOC3/BGI");
//for(i=0;i<6;i++){line(50,j,200,j);j=j+5;}
circle(100,100,20);
circle(100,100,15);
//printf("Hello world\n");
getch();
closegraph();
}