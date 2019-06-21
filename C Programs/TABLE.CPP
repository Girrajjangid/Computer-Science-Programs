#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{c=i*n;
printf("%d\n",c);}
getch();
}