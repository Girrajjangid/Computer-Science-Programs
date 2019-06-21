#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,j,b,n;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
printf("the array element value are\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[j]<a[i])
{b=a[i];
a[i]=a[j];
a[j]=b;}}}
printf("elements of array in ascending order\n");
for(i=0;i<n;i++)
{printf("%d\t",a[i]);}
getch();}