#include<iostream>
using namespace std;
class a{
	public:
	//int c,&b=c;
	static int c;
	a(){cout<<"first constructor\n";
	c=90;}
a(int a){cout<<a<<endl;
c=80;}
a(int a, int b){cout<<(a+b);
c=70;}
~a(){cout<<"\nfuck"<<c;}
};
int main(){
a o1,o2(5),o3(5,5);
return 0;}
