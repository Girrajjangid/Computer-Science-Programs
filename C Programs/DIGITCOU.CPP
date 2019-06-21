#include<stdio.h>
#include<conio.h>
void main()
{
long int r=0,m,n,i=0;
clrscr();
printf("enter the value of n \n");
scanf("%ld",&n);
while(n!=0)
{n=n/10;i++;}
printf("%ld",i);
getch();}