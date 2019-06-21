#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,sum=0,m,n,o,p;
clrscr();
printf("enter the elements of first matrix");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
scanf("%d",a[i][j]);}
printf("enter the elements of first matrix");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
scanf("%d",b[i][j]);}
{for(i=0;i<3;i++)
{for(j=0;j<3;j++)
printf("%d  ",a[i][j]);}printf("\n\n");}
{for(i=0;i<3;i++)
{for(j=0;j<3;j++)
printf("%d  ",b[i][j]);}printf("\n\n");}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
c[i][j]=0;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{sum=0;
for(k=0;k<3;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;}}}
printf("the multiplicatin f two matrix is\n ");b[i][j]);}
for(i=0;i<3;i++)
{printf("\n\n");
for(j=0;j<3;j++)
{printf("%d\t",c[i][j]);}}
getch();}
