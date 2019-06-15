#include<iostream>
using namespace std;
class A{
int x;
public: 
A(int n){x=n; }
A(){x=0;}
void showdata(){cout<<x<<endl;}
friend A operator-(A);
};
A operator-(A  a){
a.x=-a.x;
return a;}
int main(){
A a1(100),a2;
a2=-a1;

a2.showdata();
return 0;}
