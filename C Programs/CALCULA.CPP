#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c;
char z;
clrscr();
printf("enter 2 no.");
scanf("%d%d",&a,&b);
printf("enter +-*/");
scanf("%c",&z);
switch (z)
{
case '+':
c=a+b;
break;
case '-':
c=a-b;
break;
case '*':
c=a*b;
break;
case '/':
c=a/b;
break;
default:
printf("wrong input");
}
printf("%d",c);
getch();
}














































































































































































