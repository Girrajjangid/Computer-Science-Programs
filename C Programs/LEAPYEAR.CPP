#include<stdio.h>
#include<conio.h>
void main()
{
int y;
clrscr();
printf("enter the value of n \n");
scanf("%d",&y);
if((y%4==0&&y%100!=0)||(y%400==0))
{
printf("leap year %d",y);
}
else printf("not leap year");
getch();}