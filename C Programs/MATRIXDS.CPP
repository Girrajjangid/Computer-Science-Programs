#include<stdio.h>
#include<conio.h>
void main()
{
long int x[10][10],i,j,a,b,m=0;
clrscr();
printf("enter the row and column respt.");
scanf("%ld%ld",&a,&b);
printf("enter he elemnet of matrix");
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{scanf("%ld",&x[i][j]);}}
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{printf("%d\t",x[i][j]);}printf("\n\n");}
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{if(i==j)
m=m+x[i][j];}
}
printf("the diagonal sum is %d",m);
getch();}