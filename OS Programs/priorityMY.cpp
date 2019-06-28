#include<iostream>
using namespace std;
int main(){
int temp,j,n,pr[10],wt[10],tat[10],bt[10],pro[10],i;
float avg_Tat=0,avg_Wt=0;
cout<<"Enter the number of processes.\n";
cin>>n;
cout<<"Enter the burst time of processes respectively.\n";
for(i=0;i<n;i++){
cin>>bt[i];
pro[i]=i+1;
}
cout<<"Enter the priority of processes respectively.\n";
for(i=0;i<n;i++)cin>>pr[i];
wt[0]=0;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(pr[i]<pr[j]){		//swaping
			temp=pr[i];pr[i]=pr[j];pr[j]=temp;
			temp=bt[i];bt[i]=bt[j];bt[j]=temp;
			temp=pro[i];pro[i]=pro[j];pro[j]=temp;	
		}
	}
}
for(i=0;i<n;i++){
	wt[i+1]=bt[i]+wt[i];avg_Wt+=wt[i];
	tat[i]=wt[i]+bt[i];avg_Tat+=tat[i];
}
cout<<"Processes  B.T     priority     W.T\tT.A.T\n";
for(i=0;i<n;i++){
	cout<<"   P"<<pro[i]<<"\t    "<<bt[i]<<"\t\t"<<pr[i]<<"\t  "<<wt[i]<<"\t  "<<tat[i]<<endl;
}
cout<<"Average Waiting time = "<<avg_Wt/n<<endl;
cout<<"Average Turn around time = "<<avg_Tat/n;
return 0;
}
