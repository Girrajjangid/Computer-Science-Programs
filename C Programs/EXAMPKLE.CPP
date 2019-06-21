#include<stdio.h>
#include<conio.h>
#include<iostream>
int main()
{
int i,n,j;
char c;
//clrscr();
printf("enter the value of n");
scanf("%d",&n);
c='A';
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++){printf(" ");}
for(j=1;j<=2*i-1;i++){printf("*");}printf("\n");}
getch();
return 0;}
