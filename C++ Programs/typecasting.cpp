#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	double d=20.5624564;
	float f=15.3256;
int i;
i=(int)d;
cout<<i<<endl;
i=(int)f;
cout<<i<<endl;
char c=(int)i;
cout<<c<<endl;
int a=31,b=3;
double f1=static_cast<float>(a)/b;
float x=a/b;
cout<<"output without static cast"<<x<<endl;
cout<<"output with static cast"<<f1<<endl;


}
