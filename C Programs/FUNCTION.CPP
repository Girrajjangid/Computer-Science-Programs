#include<stdio.h>
#include<conio.h>
int a(int n)
{
int m,r=0;
while(n!=0)
{m=n%10;
r=r*10+m;
n=n/10;}
return (r);
}
void main()
{
int a(int n);
int x;
clrscr();
printf("enter the value of x\n");
scanf("%d",&x);
a(x);
printf("%d",a(x));
getch();
}


