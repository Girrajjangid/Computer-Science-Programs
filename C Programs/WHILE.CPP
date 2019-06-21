#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,mod;
clrscr();
printf("enter any no.\n");
scanf("%d",&n);
while(n!=0)
{
mod=n%10;
rev=rev*10+mod;
n=n/10;
}
if(n==rev)
printf("no. is palendrom");
else
printf("nahi hai");
getch();
}