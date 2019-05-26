using namespace std;
#include<conio.h>
#include<iostream>

int maxi;
int mini;
int a[5];

void MiniMaxi(int i,int j){
	int min1,max1,mid;
	if(i==j){
		mini = a[i];
		maxi = a[i];
	}
	if(i == j-1){
		if(a[i]<a[j]){
			maxi = a[j];
		}
		else{
			mini = a[i];
		}
	}
	else{
		mid = (i+j) / 2 ;
		MiniMaxi(i,mid);
		min1 = mini;
		max1 = maxi;
		MiniMaxi(mid+1,j);
		if(maxi<max1){
			maxi= max1;
		}
		if(mini<min1){
		mini = mini;
		}
	}
	cout<<"maximum : "<<maxi;
	cout<<"minimum : "<<mini;
}

int main(){
int i;
cout<<"Enter 5 numbers.\n";
for(i=0;i<5;i++){
cin>>a[i];}
maxi = a[0];
mini = a[0];
MiniMaxi(1,5);
cout<<"Maximum = "<<maxi<<endl;
cout<<"Minimum = "<<mini;
return 0;	
}

