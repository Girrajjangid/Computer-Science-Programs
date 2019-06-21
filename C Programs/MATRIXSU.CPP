#include<stdio.h>
#include<conio.h>
void main()
{
long int x[10][10],y[12][12],z[12][12],i,j,a,b,c,d,e,f,k,s=0;
clrscr();
printf("enter the row and column respectively of first matrix\n");
scanf("%ld%ld",&a,&b);
printf("enter the row and column respectively of second matrix\n");
scanf("%ld%ld",&c,&d);
if(a==d)
{e=a;f=d;
printf("enter the element of first matrix\n");
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{scanf("%ld",&x[i][j]);}}
printf("enter the element of second matrix\n");
for(i=1;i<=c;i++)
{for(j=1;j<=d;j++)
{scanf("%ld",&y[i][j]);}}
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{printf("%ld\t",x[i][j]);}printf("\n\n");}printf("\n\n");
for(i=1;i<=c;i++)
{for(j=1;j<=d;j++)
{printf("%ld\t",y[i][j]);}printf("\n\n");}
printf("the product of 2 matrices is\n");
for(i=1;i<=e;i++)
{for(j=1;j<=f;j++)
{for(k=1;k<=f;k++)
{s=x[i][j]+y[i][j];}
z[i][j]=s;s=0;}}
for(i=1;i<=e;i++)
{for(j=1;j<=f;j++)
{printf("%ld\t",z[i][j]);}printf("\n\n");}}
else printf("product doesnot exist");
getch();}