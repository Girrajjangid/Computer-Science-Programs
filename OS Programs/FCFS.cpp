#include<iostream>
using namespace std;
int main(){
	int p,b[10],w[10],tat[10];
	
	cout<<"Enter the no. of jobs";
	cin>>p;
	cout<<"Enter the BT of Jobs";
	for(int i=0;i<p;i++){
		cin>>b[i];
	}
	w[0]=0;
	for(int j=1;j<p;j++){
	w[j]=w[j-1]+b[j-1];
	}
	cout<<"BT WT TAT";
	for (int k=0;k<p;k++){
	tat[k]=w[k]+b[k];
	cout<<b[k]<<w[k]<<tat[k]<<endl;
	}
	
	
	return 0;
}
