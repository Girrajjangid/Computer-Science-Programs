#include<iostream>
using namespace std;
void swap(int a,int b){
int t=a;
a=b;
b=t;
cout<<"after swaping \na= "<<a<<".\nb= "<<b<<".\n";
};
int main(){
int a,b;
cout<<"Enter two numbers\n";
cin>>a>>b;
cout<<"Before swaping \na= "<<a<<".\nb= "<<b<<".\n";
swap(a,b);
return 0;}
