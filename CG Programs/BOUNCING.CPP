#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void main(){
int i,x=195,y=195,gd=DETECT,gm;
initgraph(&gd,&gm,"");
while(kbhit()==0){
for(i=0;i<10;i++){circle(x,y,30);floodfill(x,y,WHITE);
delay(100);cleardevice();x+=10;y+=10;rectangle(163,65,427,325);}
for(i=0;i<10;i++){circle(x,y,30);floodfill(x,y,WHITE);
delay(100);cleardevice();x+=10;y-=10;rectangle(163,65,427,325);}
for(i=0;i<10;i++){circle(x,y,30);floodfill(x,y,WHITE);
delay(100);cleardevice();x-=10;y-=10;rectangle(163,65,427,325);}
for(i=0;i<10;i++){circle(x,y,30);floodfill(x,y,WHITE);
delay(100);cleardevice();x-=10;y+=10;rectangle(163,65,427,325);}
rectangle(163,65,427,325);}
getch();
closegraph();
}
