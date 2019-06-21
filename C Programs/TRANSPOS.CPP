#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j;
clrscr();
printf("enter the value of matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);}}
printf("the transpose of\n\n");
for(i=0;i<3;i++)
{{for(j=0;j<3;j++)
printf("%d ",a[i][j]);}printf("\t\t");
{for(j=0;j<3;j++)
printf("%d ",a[j][i]);}printf("\n\n");}
getch();}
