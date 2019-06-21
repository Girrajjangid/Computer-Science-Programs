#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=5,k,m,q;
clrscr();
printf("enter the value of n\n ");
scanf("%d",&m);
switch(m)
{case 1:
{for(i=1;i<=n;i++){printf(" *\n");}
printf("\n");}break;
case 2:
{for(i=1;i<=n;i++){printf("*");}printf("\n");
for(i=1;i<=2;i++)
{for(j=1;j<=n-1;j++){printf(" ");}
for(j=1;j<=1;j++){printf("*\n");}}
for(i=1;i<=n;i++){printf("*");}printf("\n");
for(i=1;i<=2;i++){printf("*\n");}
for(i=1;i<=n;i++){printf("*");}printf("\n");}break;
case 3:
for(q=1;q<=2;q++)
{{for(i=1;i<=n;i++){printf("*");}printf("\n");}
for(i=1;i<=2;i++)
{for(j=1;j<=n-1;j++){printf(" ");}
for(j=1;j<=1;j++)printf("*\n");}}
{for(i=1;i<=n;i++){printf("*");}printf("\n");}break;
case 7:{for(i=1;i<=n;i++){printf("*");}printf("\n");}
for(i=1;i<=n;i++)
{for(j=1;j<=n-1;j++){printf(" ");}
for(j=1;j<=1;j++){printf("*");}
printf("\n");}
printf("\n");break;}

getch();}