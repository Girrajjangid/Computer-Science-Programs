#include<iostream>
using namespace std;
class A{
	  int c,d;
	public:  void show(){
	c=c+10;d=d+20;
	cout<<"c="<<c<<" d= "<<d<<endl;
	}
}a;
int main(){
a.show();	
}
