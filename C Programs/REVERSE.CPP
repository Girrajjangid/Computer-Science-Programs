#include<stdio.h>
#include<conio.h>
void main()
{
int r=0,m,n;
clrscr();
printf("enter the value of n \n");
scanf("%d",&n);
while(n!=0)
{m=n%10;r=r*10+m;n=n/10;}
printf("%d",r);
getch();}