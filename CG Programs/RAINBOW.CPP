#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int gd=DETECT,gm,j=150;
initgraph(&gd,&gm,"");
for(int i=0;i<30;i++,j+=2){
setcolor(i);
//delay(100);
arc(420,410,20,160,j);   }
rectangle(100,100,200,200);
rectangle(150,150,250,250);
line(100,100,150,150);
line(200,200,250,250);
line(200,100,250,150);
line(100,200,150,250);
setfillstyle(SOLID_FILL,i);
circle(175,175,20);
getch();
closegraph();
}