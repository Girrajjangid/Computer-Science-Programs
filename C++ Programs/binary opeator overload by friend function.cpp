#include<iostream>
using namespace std;

class complex{//binary operator overload
	int a,b;
	public:
void getdata(){
	cout<<"enter the value of a and b \n";cin>>a>>b;}
void display(){
    cout<<a<<"+"<<b<<"i"<<endl;}
friend complex operator +(complex ob1,complex ob2);
friend complex operator -(complex ob1,complex ob2);
};
complex operator +(complex ob1,complex ob2){
complex t1;
t1.a=ob1.a+ob2.a;
t1.b=ob1.b+ob2.b;
return t1;}
complex operator -(complex ob1,complex ob2){
complex t2;
t2.a=ob1.a-ob2.a;
t2.b=ob1.b-ob2.b;
return t2;}

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
