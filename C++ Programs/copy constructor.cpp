#include<iostream>
using namespace std;
class A{
	int a,b;

	public: int r=990;
public:	A(int a1,int b1){a=a1;b=b1;cout<<"constructor"<<endl;}
	    A()  {a=50;b=100;cout<<"constructor"<<endl;}  //overload
	    void show(){cout<<a<<" "<<b<<endl;}
};
int main(){
A a1(20,40);
//A a2(a1);//object passing
//a2.show();
//A a3=a1;//copy constructor called 
//a3.show();
A a4;
cout<<a4.r;
a1.show();

a4.show();

return 0;
}
