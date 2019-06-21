#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}

for(i=0;i<n;i++)
{if(a[0]<a[i])
{a[0]=a[i];}}
printf("largest %d",a[0]);
getch();}