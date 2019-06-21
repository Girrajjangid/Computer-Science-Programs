#include<stdio.h>
#include<conio.h>
void main()
{
long int big=0,i,n,a[10];
clrscr();
printf("enter the value of n\n");
scanf("%ld",&n);
printf("elements\n");
for(i=1;i<=n;i++)
{scanf("%ld",a[i]);}
for(i=1;i<=n;i++)
{if(big>a[i]);
big=a[i];}printf("%ld",big);
getch();}
