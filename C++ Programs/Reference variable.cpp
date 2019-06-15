#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){

int h=10;
int &a=h;
cout<<h<<endl;
cout<<a<<endl;
h=h*h;
cout<<h<<endl;
cout<<a<<endl;
return 0;}
