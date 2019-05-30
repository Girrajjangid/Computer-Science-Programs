#include<iostream>
using namespace std;
void Tower(int n,char a,char b,char c)
{
if(n==1)
cout<<a<<"-"<<c<<endl;
else{
Tower(n-1,a,c,b);
cout<<a<<"-"<<c<<endl;
Tower(n-1,b,a,c);
}
}
int main(){
int n;
cout<<"Enter the numbers of disk";
cin>>n;
Tower(n,'A','B','C');
return 0;
}
