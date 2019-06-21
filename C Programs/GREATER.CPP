#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf("enter the value of x and y and z");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
if(x>z)
printf("%d is a greater",x);
else
printf("%d is a greater",z);
}
else
{
if(y>z)
printf("%d is greater ",y);
else
printf("%d is greater",z);
}
getch();
}