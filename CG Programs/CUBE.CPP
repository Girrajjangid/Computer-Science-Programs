#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main(){
int i,gd=DETECT,gm,x=10;
initgraph(&gd,&gm,"");
setcolor(WHITE);
rectangle(120,120,280,280);
setfillstyle(SOLID_FILL,RED);
floodfill(150,200,WHITE);
line(80,160,120,120);
for(i=0;i<200;i+=160)line(80+i,320,120+i,280);
for(i=0;i<120;i+=40)line(120,160+i,280,160+i);
for(i=0;i<120;i+=40)line(160+i,120,160+i,280);
line(80,160,80,320);line(80,320,240,320);
setfillstyle(SOLID_FILL,BLUE);
floodfill(150,300,WHITE);
for(i=0;i<40;i+=10)line(120-i,280+i,280-i,280+i);
for(i=0;i<120;i+=40)line(160+i,280,120+i,320);
setfillstyle(SOLID_FILL,GREEN);
floodfill(100,200,WHITE);
for(i=0;i<120;i+=40)line(120,160+i,80,200+i);
for(i=0;i<30;i+=10)line(90+i,150-i,90+i,310-i);
getch();
closegraph();
}