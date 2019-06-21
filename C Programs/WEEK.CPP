#include<stdio.h>
#include<conio.h>
void main()
{
long int a;
clrscr();
printf("enter the value ofa and b \n");
scanf("%ld",&a);
switch(a)
{
case 1:printf("monday");break;
case 2:printf("tuesday");break;
case 3:printf("wednesday");break;
case 4:printf("thursday");break;
case 5:printf("friday");break;
case 6:printf("saturday");break;
case 7:printf("sunday");break;
default:printf("galat hai");  }
getch();}