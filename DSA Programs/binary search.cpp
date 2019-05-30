#include<iostream>
using namespace std;
int main(){
int n,data[20],beg,end,lb=0,ub,loc,value,mid;
cout<<"enter the number of elements u want to insert\n";
cin>>n;	              
cout<<"enter the sorted elements\n";
for(int i=0;i<n;i++){cin>>data[i];}
cout<<"entered array is:\n";
for(int i=0;i<n;i++){cout<<data[i]<<" ";}
cout<<"\nenter number for search\n";
cin>>value;
ub=n;
beg=lb;
end=ub;
mid=(beg+end)/2;
while(beg<=end&&data[mid]!=value){
if(value<data[mid])
end=mid-1;
else beg=mid+1;
mid=(end+beg)/2;
}
if(data[mid]==value){loc=mid;
cout<<++loc;
}
else cout<<"not found";
return 0;
}                        
