#include<stdio.h>
#include<conio.h>
int revno(int n)
{
int m,r=0;
while(n!=0)
{m=n%10;
r=r*10+m;
n=n/10;
}
return(r);}
void main()
{
int revno(int);
int a;
clrscr();
printf("enter the number\n");
scanf("%d",&a);
revno(a);
printf("reverse n. is %d",revno(a));
getch();}