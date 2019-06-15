#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"enter number of students\n";
cin>>n;
int *ptr=new int[n];
cout<<"enter percentage of students"<<endl;
for(i=1;i<=n;i++){
cout<<"student "<<i<<":";
cin>>*(ptr+i);	}

cout<<"display info\n"<<endl;

for(i=1;i<=n;i++){
cout<<"student "<<i<<":"<<*(ptr+i)<<"%"<<endl;}
//delete []ptr;

return 0;}
