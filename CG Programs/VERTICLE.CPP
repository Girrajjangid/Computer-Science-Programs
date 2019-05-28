#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int gd=DETECT,gm,i,j=10;
initgraph(&gd,&gm,"C://turboc3/bgi");
for(i=0;i<6;i++){
line(j,10,j,40);j=j+5;
}
getch();
closegraph();
}
