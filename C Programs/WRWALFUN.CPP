#include<stdio.h>
#include<conio.h>
int fact(int n)
{long int i,j=1;
for(i=1;i<=n;i++)
{j=j*i;printf("%d=",i);printf("%ld\n",j);}}
void main()
{long int x,r;
clrscr();
printf("enter the value of x\n");
scanf("%ld",&x);
r=fact(x);
getch();}


