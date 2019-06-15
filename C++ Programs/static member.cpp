#include<iostream>
using namespace std;
class A{
	 static int c;
	public: static void show(){cout<<"c="<<c++<<endl;
	}
}a,b,d;
int A::c=1;
int main(){
a.show();	
b.show();	
d.show();	
}
