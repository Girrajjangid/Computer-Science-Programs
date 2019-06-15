#include<iostream>
using namespace std;
class A{
protected:int a,b;
public:
void  get(){ cout<<"enter the value of a and b\n"; cin>>a>>b;}
};
class B{
protected:int c,d;
public:
void  gets(){ cout<<"enter the value of c and d\n"; cin>>c>>d;}
};
class C:public A,public B{
public:
int  add(){cout<<"\naddition =";return a+b+c+d;}
int  area(){cout<<"\narea = ";return a*b*c*d;}
};
int main(){
	C ob;
ob.get();
ob.gets();
cout<<ob.area();	
cout<<ob.add();

}
