#include<iostream>
using namespace std;
//#include<stdio.h>
//#include<conio.h>
int i=10;
int main(){
int i=20;
cout<<"local variable="<<i;
cout<<"\nglobal variable= "<<::i;
return 0;}
