#include<iostream>
using namespace std;
class myclass{
int num;
public:
	void getdata() {cout<<"enter number\n";cin>>num;}
    
	void setdata(myclass o2) {num=o2.num;}
    void setdata(myclass &o2,int a) {num=o2.num;}
    void setdata(myclass *o2) {num=o2->num;}
    
	void showdata() {cout<<"num= "<<num<<endl;}}; 
 inline void A(char a[]){cout<<a;
 }
 int main(){
myclass o1,o2,o3,o4;
o4.getdata();
o1.setdata(o4); //object
o2.setdata(o4,2); //reference
o3.setdata(&o4); //pointer
 
o1.showdata();
o2.showdata();
o3.showdata();
char a[20];
for(int i=0;i<=5;i++){
cin>>a[i];
}A(a);
return 0;
}
