#include<iostream>
using namespace std;
int main(){
 int x=2147483647;
//cout<<x<<endl;
unsigned short int y=65535;
//cout<<y<<endl;
int x1=600;
int y1=x1;
int &y2=x1;
x1+=40;
//cout<<y1<<endl;
cout<<x1<<endl;
cout<<&y1<<endl;
cout<<y2<<endl;
	return 0;
}
