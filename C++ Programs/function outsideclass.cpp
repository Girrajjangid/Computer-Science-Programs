#include<iostream>
using namespace std;
class r{
	float l,b;
	public: void getdata(){cout<<"enter l and b\n";cin>>l>>b;}
	float area();
}o;
float r::area()  {return l*b;}
int main(){
o.getdata();
cout<<o.area();
return 0;}
