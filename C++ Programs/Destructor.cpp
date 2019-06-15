#include<iostream>
using namespace std;
class A{
int x;
public: A(int n){x=n; cout<<"constructor called "<<x<<endl;}
       ~A(){cout<<"destructor called "<<x<<endl;}
};
int main(){
A a1(1);
A a2(2);
A a3(3);
}
