#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int gd=DETECT,gm,i,j=110,k=130;
initgraph(&gd,&gm,"");
line(20,70,300,70);
line(50,20,300,20);
line(50,20,20,70);
line(50,20,80,70);
line(20,70,20,200);
line(80,70,80,200);
line(300,20,300,200);
line(20,200,300,200);
line(40,200,40,150);
line(40,150,60,150);
line(60,200,60,150);
for(i=0;i<3;i++){line(130,j,170,j);j=j+20;line(k,110,k,150);k+=20;}k-=10;j=110;
for(i=0;i<3;i++){line(180,j,220,j);j=j+20;line(k,110,k,150);k+=20;}
getch();
closegraph();
}

