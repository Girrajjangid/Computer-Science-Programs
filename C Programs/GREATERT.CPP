#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("enter the value ofa and b \n");
scanf("%d%d%d",&a,&b,&c);
d=a>b?(a>c?a:c):(b>c?b:c);
printf("%d",d);
getch();}