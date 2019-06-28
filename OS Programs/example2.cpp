#include<iostream>
using namespace std;
int main(){
	int i,quantum,p,t,b[10],w[10],rb[10],tat[10];
	cout<<"Enter the number of processes.\n";
	cin>>p;
	cout<<"Enter the burst time\n";
	for (i=0;i<p;i++){
		cin>>b[i];
		rb[i]=b[i];
		}
	cout<<"Enter the quantum time\n";
	cin>>quantum;
	t=0;
	while(1){
		bool done=true;
		for(i=0;i<p;i++){
			if(rb[i]>0){
				done=false;
				if(rb[i]>quantum){
					t+=quantum;
					rb[i]-=quantum;
					}
				else{
					t+=rb[i];
					w[i]=t-b[i];
					rb[i]=0;
					}
				}
			}
		if(done==true)
		break;	
		}cout<<"BT WT TAT\n";
		
	for(i=0;i<p;i++){
		cout<<b[i]<<" "<<w[i]<<" "<<b[i]+w[i]<<endl;
		}


	return 0;		
}
