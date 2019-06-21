#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,n;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("the array element value are\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}

for(i=1;i<n;i++)
{if(a[0]<a[i])
{a[0]=a[i];}}
printf(" largest %d",a[0]);
getch();}