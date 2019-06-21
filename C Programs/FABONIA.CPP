#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,a=1,b=0,c;
//clrscr();
printf("enter the value of n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
getch();
return 0;}
