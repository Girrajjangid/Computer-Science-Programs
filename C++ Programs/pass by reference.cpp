#include<iostream>
using namespace std;
void swap(int &a,int &b){
a+=5;
b+=5;
cout<<"\na= "<<a;
cout<<"\nb= "<<b;
};

int main(){
int a,b;
cout<<"Enter two numbers\n";
cin>>a>>b;
cout<<"\na= "<<a;
cout<<"\nb= "<<b;
swap(a,b);
cout<<"\na= "<<a;
cout<<"\nb= "<<b;
return 0;}
