#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=4,a=1,b=0,c;
clrscr();
printf("enter the value of n \n");
scanf("%ld",&n);
do
{c=a+b;printf("%d\n",c);a=b;b=c;i++;}while(i<=n);
getch();}