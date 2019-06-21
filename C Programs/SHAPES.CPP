#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,x=1;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",x);
x++;
}
printf("\n\n");
}
getch();
}