#include<iostream>
using namespace std;
int main(){
int n,a[50],i,j,key;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter the element of array\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"entered array is:\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
for(i=0;i<=n;i++)
{j=i;
while(a[j-1]>a[j]){
key=a[j];
a[j]=a[j-1];
a[j-1]=key;j++;
}	
cout<<"\nSorted array is:\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
	
}
return 0;
}
