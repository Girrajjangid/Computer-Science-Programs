#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
clrscr();
printf("enter the value of n=11\n ");
scanf("%d",&n);
for(k=1;k<=5;k++)
{for(i=1;i<=n;i++){printf("*");}printf(" ");}printf("\n");

for(i=1;i<=4;i++)
{{for(j=1;j<=n/2;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n/2+1;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=9;j++){printf(" ");}printf("* *");}
 printf("\n");}

for(i=1;i<=1;i++)
{{for(j=1;j<=n/2;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n/2+1;j++){printf(" ");}
 {for(j=1;j<=n;j++){printf("*");}}printf(" *");
 {for(j=1;j<=n;j++){printf(" ");}printf("*********** *");}
 printf("\n");}}

for(i=1;i<=4;i++)
{{for(j=1;j<=2;j++){printf("  *");}
 {for(j=1;j<=n/2+1;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 {for(j=1;j<=n;j++){printf(" ");}printf("*");}
 for(j=1;j<=i;j++){printf(" ");}printf("*");
 for(j=1;j<=n-i-1;j++){printf(" ");}printf("*");printf("\n");}}

printf("  ****");
{for(j=1;j<=n/2+1;j++){printf(" ");}{for(j=1;j<=n;j++){printf("*");}}}
{for(j=1;j<=1;j++){printf(" ");}{for(j=1;j<=n;j++){printf("*");}}}
printf(" *");
{for(j=1;j<=n/2;j++){printf(" ");}printf("*");}
{for(j=1;j<=n/2;j++){printf(" ");}}{for(j=1;j<=n;j++){printf("*");}}printf("\n\n");
for(i=1;i<=2;i++){for(j=1;j<=6*n-6;j++){printf("-");}printf("\n");}
getch();}