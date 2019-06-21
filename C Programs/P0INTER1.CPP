#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int *ptr,**p;
ptr=&a;
p=&ptr;
clrscr();
printf("%d\n",*(&a));
printf("%d\n",**p);
printf("%d\n",*ptr);
getch();}