#include<stdio.h>
#include<conio.h>
int facto(int n)
{
if(n>1)
return(n*facto(n-1));
else return(1);}
void main()
{
int facto(int);
int a,b;
clrscr();
printf("enter the value of n");
scanf("%d",&a);
b=facto(a);
printf("%d",b);
getch();}