#include<iostream>
using namespace std;
void swap(int *a,int *b){
*a+=5;
*b+=5;
cout<<"\na= "<<a;//address
cout<<"\nb= "<<b;//address
cout<<"\na= "<<*a;//value
cout<<"\nb= "<<*b;//value
cout<<"\nb= "<<&a;//address
cout<<"\nb= "<<&b;//address
};
int main(){
int a=10,b=20;
//cout<<"Enter two numbers\n";
//cin>>a>>b;
cout<<"\na= "<<a;
cout<<"\nb= "<<b;
swap(&a,&b);
//cout<<"\na= "<<a;
//cout<<"\nb= "<<b;
return 0;}
