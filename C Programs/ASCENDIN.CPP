#include<stdio.h>
#include<conio.h>
void main()
{
long int a[12],n,i,j,b;
clrscr();
printf("enter the size of array\n");
scanf("%ld",&n);
printf("enter the numbers\n");
for(i=1;i<=n;i++)
{scanf("%ld",&a[i]);}

for(i=1;i<=n;i++)
{for(j=i+1;j<=n;j++)
{if(a[i]>a[j])
{b=a[i];
a[i]=a[j];
a[j]=b;}
}}
printf("ascending order\n");
for(i=1;i<=n;i++){printf("%ld\t",a[i]);}
getch();}