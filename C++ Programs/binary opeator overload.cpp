#include<iostream>
using namespace std;

class complex{//binary operator overload
	int a,b;
	public:void getdata(){
		cout<<"enter the value of a and b \n"
	;	cin>>a>>b;
	}
complex operator +(complex ob){
complex t1;
t1.a=a+ob.a;
t1.b=b+ob.b;
return t1;}
complex operator -(complex ob){
complex t2;
t2.a=a-ob.a;
t2.b=b-ob.b;
return t2;}
void display()
{cout<<a<<"+"<<b<<"i"<<endl;
}
};
int main(){
complex ob1,ob2,result1,result2;
ob1.getdata();
ob2.getdata();
result1= ob1+ob2;
cout<<"result=";
result1.display();
result2=ob1-ob2;
cout<<"result=";
result2.display();
return 0;
}
