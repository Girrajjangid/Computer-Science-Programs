#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the value of n\n ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++){printf(" ");}
for(j=1;j<=i;j++){printf("*");}
for(j=1;j<=2*n;j++){printf(" ");}
for(j=1;j<=i;j++){printf("*");}printf("\n");}
for(i=n-1;i>=1;i--)
{for(j=1;j<=n;j++){printf(" ");}
for(j=1;j<=i;j++){printf("*");}
for(j=1;j<=n-i;j++){printf("  ");}
for(j=1;j<=i;j++){printf("*");}
printf("\n");}
getch();
}








