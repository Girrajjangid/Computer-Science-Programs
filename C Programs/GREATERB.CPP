#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b,c;
clrscr();
printf("enter the value ofa and b \n");
scanf("%ld%ld%ld",&a,&b,&c);
if(a>b)
{if(a>c) printf("%d",a);
else printf("%d",c);}
else
{if(b>c) printf("%d",b);
else printf("%d",c);}
getch();}