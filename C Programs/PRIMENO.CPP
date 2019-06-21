#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
printf("enter the value of n \n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{if(n%i==0)  {count=1;break;}}
if(count==0)
printf("prime no.");
else
printf("not prime no.");
getch();}