#include<stdio.h>
#include<conio.h>
void revno(int n)
{
int m,r=0;
while(n!=0)
{m=n%10;
r=r*10+m;
n=n/10;
}
printf("%d",r);}
void main()
{
int a;
clrscr();
printf("enter the number\n");
scanf("%d",&a);
revno(a);
getch();}