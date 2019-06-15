#include<iostream>
using namespace std;
class b;
class a{//friend class
private:int ad;
public: 
 a(int x){ad=x;}
 void show(){cout<<"a class "<<ad<<endl;}
friend b; // private ad can be accessable
 };
class b{
public: 
 void show(a ob){cout<<"b class n"<<ob.ad<<endl;}
}; 
int main(){
	a oa(789);
	oa.show();
b ob;
ob.show(oa);
return 0;} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
