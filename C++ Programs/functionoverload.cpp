#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h> 
int sum(int a,int b){ return a+b;}
float sum(float a,float b){ return a+b;}
double sum(double a,double b){ return a+b;}
long sum(long a,long b){ return a+b;}
int main(){
double a=1,b=2;
//cout<<"enter two numbers \n";
//cin>>a>>b;
cout<<"sum = "<<sum(a,b);
return 0;}
