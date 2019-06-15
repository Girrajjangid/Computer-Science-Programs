#include<iostream>
using namespace std;
class detail{
	int a;
	protected :char c[20];
	public:void getdata(){cout<<"enter Roll no.\n";cin>>a;}
	void show(){cout<<"Roll no.= "<<a;}
};
class student:public detail{
int marks[3];
public: void getdata1();
        int total();
void show1(){show();
cout<<"\ncourse = "<<c;
cout<<"\ntotal marks ="<<total();}
};
void student::getdata1(){
	cout<<"enter course \n";
	cin.ignore();
	cin.getline(c,10);
cout<<"enter marks of three subject \n";
for(int i=0;i<3;i++){cin>>marks[i];}
}
int student::total(){int t=0;
for(int i=0;i<3;i++){t+=marks[i];}return t;
}
int main(){
student ob;
ob.getdata();
ob.getdata1();
ob.show1();
return 0;}

