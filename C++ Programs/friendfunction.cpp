#include<iostream>
using namespace std;
//#/include<conio.h>
class two;
class one{
private: int a;
public: void setdata(int x){a=x;}	
void showdata(){cout<<"One::a="<<a<<endl;}
friend int add(one,two);
};

class two{
private: int b;
public: 
void setdata(int x){b=x;}	
void showdata(){cout<<"Two::b="<<b<<endl;}
friend int add(one,two);
};
int add(one a,two b){
return a.a+b.b;
}

int main(){
one aa;
two bb;
aa.setdata(10);
aa.showdata();
bb.setdata(20);
bb.showdata();
int r;
r=add(aa,bb);
cout<<"sum= "<<r<<endl;
return 0;}
