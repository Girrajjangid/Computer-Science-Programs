	#include<iostream>
using namespace std;
int main(){
	int j,temp,i,p,b[10],w[10],tat[10],c[10];
	cout<<"Enter the no. of jobs";
	cin>>p;
	cout<<"Enter the BT of Jobs";
	for( i=0;i<p;i++){cin>>b[i];c[i]=i+1;}
	for(j=0;j<p;j++){
	for(i=j+1;i<p;i++){
		if(b[j]>b[i]){temp=b[j];b[j]=b[i];b[i]=temp;
					  temp=c[j];c[j]=c[i];c[i]=temp;}}}
	w[0]=0;
	for( j=1;j<p;j++){
	w[j]=w[j-1]+b[j-1];
	}
	cout<<"BT WT TAT";
	for (int k=0;k<p;k++){
	tat[k]=w[k]+b[k];
	cout<<b[k]<<w[k]<<tat[k]<<endl;
	}
	
	
	return 0;
}
