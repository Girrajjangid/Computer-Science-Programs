#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
int main ()
{
long int a,b,c;
char d;

printf("welcome to GIRRAJ'S calculator\n");
cout<<"pushp forging SHARWAN KUMAR JANGID";
scanf("%ld%c%ld",&a,&d,&b);
switch(d)
{
case '+':c=a+b;
break;
case '-':c=a-b;
break;
case '*':c=a*b;
break;
case '/':c=a/b;
break;
default: cout<<"error"; 
break;}
printf("%ld\n",c);

return 0;
}
