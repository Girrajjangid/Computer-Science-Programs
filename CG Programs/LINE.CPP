#include<conio.h>
#include<graphics.h>
#include<iostream.h>
void simpleline(int x1,int y1,int x2,int y2){
float i,m,c,x,y;
int dx=x2-x1;
int dy=y2-y1;
m=dy/dx;
c=y1-(m*x1);//  y = mx + c line equation
//putting pixels
x=x1;
y=y1;

if(m<=1){
for(i=x;i<=x2;i++){
	putpixel(x,y,WHITE);
	x+=1;
	y=(m*x)+c;}
}
else{       //m>1
for(i=y;i<=y2;i++){
	putpixel(x,y,WHITE);
	y+=1;
	x=(y-c)/m;
	}
}
}
void main(){
int gd=DETECT,gm,x1,y1,x2,y2;
initgraph(&gd,&gm,"");
cout<<"enter the (x1,y1) or start coordinates of line.\n";
cin>>x1>>y1;
cout<<"enter the (x2,y2) or end coordinates of line. \n";
cin>>x2>>y2;
cleardevice();
simpleline(x1,y1,x2,y2);
getch();
closegraph();
}
