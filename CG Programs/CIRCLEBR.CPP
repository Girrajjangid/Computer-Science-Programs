#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<iostream.h>
void plotcircle(int,int,int,int);
void simplecircle(int x1,int y1,int r){
int i=0,p,x,y;//p=decision parameter
x=0;
y=r;
p=1-r;
for(i=0;i<=y;i++){
	putpixel(x1+x,y1+y,1);delay(5);
	if(p<=0){
	x+=1;
	y=y;
	p=p+(2*x)+3;}
	else{ //p>0
	x+=1;
	y+=-1;
	p+=(2*x)-(2*y)+5;
	}
putpixel(x1-x,y1+y,2);delay(5);
putpixel(x1+x,y1-y,3);delay(5);
putpixel(x1-x,y1-y,4);delay(5);
putpixel(x1+y,y1+x,5);delay(5);
putpixel(x1-y,y1+x,6);delay(5);
putpixel(x1+y,y1-x,7);delay(5);
putpixel(x1-y,y1-x,8);delay(5);
}}
void main(){
int gd=DETECT,gm,x1,y1,r;
initgraph(&gd,&gm,"");

cout<<"enter the center coordinates of circle.\n";
cin>>x1>>y1;
cout<<"enter the Radius of circle. \n";
cin>>r;
cleardevice();
simplecircle(x1,y1,r);
getch();
closegraph();
}
