#include<iostream>
using namespace std;
int main(){
int x=3; // 0011
int y=7; // 0111
int z=x&y;		//bitwise and always return integral value
int a=x&&y;		//logical and always return boolean value(1) and (0)
cout<<z<<endl;
cout<<a<<endl;
	return 0;
}
