using namespace std;
#include <conio.h>
#include<iostream>
#include <cmath>
int knapsack(int w,int wt[],int v[],int n){
	if(n==0||w==0){
		return 0 ;
	}
	else if(wt[n-1]>w){
		return knapsack(w,wt,v,n-1);
	}
	else{
		return max( v[n-1] + knapsack(w-wt[n-1] ,wt,v,n-1)  , knapsack(w,wt,v,n-1));
	}
}

// implement knapsack
int main(){
int i,n,wt[10],v[20],w;
cout<<"Enter  number of objects.\n";
cin>>n;
cout<<"Enter the value of weights :\n";
for(i=0;i<n;i++){
cin>>wt[i];
}
cout<<"Enter the value of profits :\n";
for(i=0;i<n;i++){
	cin>>v[i];
}
cout<<"Enter the value of maximum capacity :\n";
cin>>w;
cout<<"Maximum profit is :"<<knapsack(w,wt,v,n);
return 0;	
}

