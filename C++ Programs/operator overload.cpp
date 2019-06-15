#include<iostream>
using namespace std;
class A{
int x;
public: A(int n){x=n; }
        //A(){x=0;}
void operator++(){++x;}//prefix
void operator--(int){x--;}//postfix
void operator--(){--x;}//prefix

void showdata(){cout<<x<<endl;
}
};
int main(){
A a1(7);
a1.showdata();
a1--;// prefix
a1.showdata();
--a1; // postfix
a1.showdata();

}
