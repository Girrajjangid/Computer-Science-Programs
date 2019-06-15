#include<iostream>
using namespace std;
#include<conio.h>
#include<stdio.h> 
int main(){
char name[12];
cin.getline(name,4);
cout.write(name,4);
int x=1111,y=2222,z=3333;
cout<<x;
cout.width(6);  //3 contain 1 space
cout<<y;
cout.width(5);  //3 contain 1 space
cout<<z;

return 0;}
