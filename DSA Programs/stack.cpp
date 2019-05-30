#include<iostream>
using namespace std;
class stack{
public:
int a[50],MAX=50;
int t=NULL;
void push(int x){
if(t==MAX){cout<<"OVERFLOW";
return;}
t+=1;
a[t]=x;
}
void pop(){
if(t==NULL){cout<<"UNDERFLOW";return;}
int temp=a[t];
t-=1;
}
void show(){
int i;
cout<<"Stack:\n";
for(i=1;i<=t;i++)
cout<<a[i]<<" ";
}}o;
int main(){
o.push(2);
o.push(3);
o.push(5);
o.push(6);
o.push(8);
o.push(9);
o.show();cout<<"\n";
o.pop();
o.show();cout<<"\n";
o.pop();
o.show();cout<<"\n";
o.push(6);
o.show();cout<<"\n";
return 0; }
