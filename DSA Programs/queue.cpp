#include<iostream>
using namespace std;
class queue{	
public:int item,f,r,a[50];
 queue(){f=r=NULL;}

void Enqueue(int x){
if(f==r+1)     {cout<<"overflow\n";}
if(f==NULL)    {f=1;r=1;}
else if(r==50)  r=1;
else            r+=1;
a[r]=x;
}
void dequeue(){
if(f==NULL)cout<<"underflow\n";
//item=a[f];
if (f==r)     {f=r=NULL;}
else if(f==50) f=1;
else           f=f+1;
}
void show(){
for(int i=f;i<=r;i++){cout<<a[i]<<" ";
}	
}
}a;
int main(){
a.Enqueue(3);		
a.Enqueue(4);		
a.Enqueue(6);		
a.Enqueue(8);	
a.show();cout<<"\n";
a.dequeue();
a.show();cout<<"\n";
a.Enqueue(45);		
a.show();cout<<"\n";
a.Enqueue(55);		
a.show();cout<<"\n";
a.dequeue();
a.show();cout<<"\n";
a.dequeue();
a.show();cout<<"\n";
	
	return 0;
}
