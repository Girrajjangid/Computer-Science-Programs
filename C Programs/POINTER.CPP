#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int *ptr;
ptr=&a;
clrscr();
printf("%d\n",*(&a));
printf("%d\n",a);
printf("%d\n",*ptr);
getch();}