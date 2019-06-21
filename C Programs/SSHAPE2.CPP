#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
char c;
clrscr();
printf("enter the value of n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
{printf(" ");}
for(j=1;j<=2*i-1;j++)
{printf("*");}printf("\n");}

getch();}