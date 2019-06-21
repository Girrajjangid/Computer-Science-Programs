#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum;
clrscr();
printf("enter the value of matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);}}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d\t",a[i][j]);}printf("\n\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{if(i==j)
{sum=sum+a[i][j];}}}printf("the diagonal sum is %d",sum);
getch();} }
