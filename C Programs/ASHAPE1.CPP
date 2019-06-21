#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
char c;
clrscr();
printf("enter the value of n \n");
scanf("%d",&n);
c='A';
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{printf("%c",c);c++;}
printf("\n");}

getch();}