#include<iostream>
using namespace std;
class room{
public:int a,b;
public:
void  get(){
cout<<"enter the value of a and b\n"; cin>>a>>b;}
int  area(){
cout<<"area = ";return a*b;}
};
class sum:public room{
public:
int  add(room ob){
cout<<"\nsum  =";return ob.a+ob.b;}
};
int main(){
	sum ob;
	ob.get();
  cout<<ob.area();	
 cout<<ob.add(ob);
}
