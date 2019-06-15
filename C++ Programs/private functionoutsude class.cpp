#include<iostream>
using namespace std;
class student{
	int r;
	float fees;
	void read(){r=12;fees=500;}
 
 public: void show(){read();
cout<<"roll no.= "<<r<<endl;
cout<<"fees = "<<fees<<endl;}
}o;
int main(){

o.show();

//return 0;}
