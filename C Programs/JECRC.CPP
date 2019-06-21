#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
clrscr();
printf("press any key\n ");
scanf("%d",&n);
n=11;
for(i=1;i<=5;i++)
{for(j=1;j<=n;j++){printf("*");}printf(" ");}printf("\n");

for(i=1;i<=4;i++)
{{for(j=1;j<=n/2;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n/2+1;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n-2;j++){printf(" ");}printf("* *");}
 printf("\n");}

for(i=1;i<=1;i++)
{{for(j=1;j<=n/2;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n/2+1;j++){printf(" ");}
 {for(j=1;j<=n;j++){printf("*");}}printf(" *");
 {for(j=1;j<=n;j++){printf(" ");}}
 {for(j=1;j<=n;j++){printf("*");}printf(" *");}
 printf("\n");}}

for(i=1;i<=4;i++)
{{for(j=1;j<=2;j++){printf("  *");}
 {for(j=1;j<=n/2+1;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=i;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n-i-1;j++){printf(" ");}printf("*");}
 printf("\n");}}

printf("  ****");
{for(j=1;j<=n/2+1;j++){printf(" ");}}
{for(j=1;j<=n;j++){printf("*");}}printf(" ");
{for(j=1;j<=n;j++){printf("*");}}printf(" *");
{for(j=1;j<=n/2;j++){printf(" ");}printf("*");}
{for(j=1;j<=n/2;j++){printf(" ");}}
{for(j=1;j<=n;j++){printf("*");}}
getch();}









