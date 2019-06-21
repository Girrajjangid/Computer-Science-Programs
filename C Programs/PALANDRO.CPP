#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,s=0,m;
clrscr();
printf("enter the no. \n");
scanf("%d",&n);
a=n;
while(n!=0)
{m=n%10;
s=s*10+m;
n=n/10;}
if(s==a) printf("palandrom");
else printf("not palandrom");
getch();}