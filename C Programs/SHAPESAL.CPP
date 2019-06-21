#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
char c;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{c='A';
for(j=1;j<=i;j++)
{printf("%c",c);c++;}
printf("\n\n");}
getch();}