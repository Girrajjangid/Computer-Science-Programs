#include<stdio.h>
#include<conio.h>
void fact()
{int i,j=1,n;
printf("enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
j=j*i;printf("%d",j);}
void main()
{void fact();
clrscr();
fact();
getch();}


