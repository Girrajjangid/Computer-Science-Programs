#include<iostream>
using namespace std;
int main(){
int temp,n,data[20],beg=1,end,r,l,loc,value,mid;
cout<<"enter the number of elements u want to insert\n";
cin>>n;	              
cout<<"enter the sorted elements\n";
for(int i=0;i<n;i++){cin>>data[i];}
cout<<"entered array is:\n";
for(int i=0;i<n;i++){cout<<data[i]<<" ";}
cout<<"\nsorted array is:\n";
end=n;
l=beg;
r=end;
loc=beg;
A:{while(data[loc]<=data[r]&&loc!=r){
r-=1;
if(loc==r)return 0;
if(data[loc]>data[r]){temp=data[loc];data[loc]=data[r];data[r]=temp;
loc=r;}goto B;}}

B:{while(data[l]<=data[loc]){
l=l+1;
if(loc==l)return 0;
if(data[l]>data[l]){
temp=data[loc];data[loc]=data[l];data[l]=temp;
loc=l;}goto A;}}
for(int i=1;i<=n;i++)
cout<<data[i]<<" ";
return 0;}



