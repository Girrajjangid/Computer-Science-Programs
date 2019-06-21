#include<stdio.h>
#include<conio.h>
int revno()
{
int m,r=0,n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{m=n%10;
r=r*10+m;
n=n/10;
}
return(r);}
void main()
{
int o;
clrscr();
o=revno();
printf("%d",o);
getch();}