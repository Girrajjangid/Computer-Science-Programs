#include<stdio.h>
#include<conio.h>
void main()
{
long int x[10][10],i,j,a,b,m=0;
clrscr();
printf("enter the row and column respt.\n");
scanf("%ld%ld",&a,&b);
printf("enter he elemnet of matrix\n");
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{scanf("%ld",&x[i][j]);}}
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{printf("%d\t",x[i][j]);}printf("\n\n");}
printf("the transporse of this matrix is\n");
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++){printf("%d\t",x[j][i]);}printf("\n\n");}
getch();}