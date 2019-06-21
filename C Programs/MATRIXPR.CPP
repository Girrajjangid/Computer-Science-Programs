#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,s=0;
clrscr();
printf("enter the value of 1st matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);}}
printf("enter the value of 2nd  matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&b[i][j]);}}
for(i=0;i<3;i++)
{{for(j=0;j<3;j++)
printf("%d ",a[i][j]);}printf("\t");
{for(j=0;j<3;j++)
printf("%d ",b[i][j]);}printf("\n\n");}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{for(k=0;k<3;k++)
{s=s+a[i][k]*b[k][j];}
c[i][j]=s;
s=0;}}
printf("the product of entered matrices\n");
for(i=0;i<3;i++)
{{for(j=0;j<3;j++)
printf("%d ",c[i][j]);}printf("\n\n");}
getch();}