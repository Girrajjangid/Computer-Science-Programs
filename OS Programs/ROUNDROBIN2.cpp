#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
	int i,n,bt[20],wt[20],rem_bt[20],tat[20],t,quantum;
	float avg_Wt=0,avg_Tat=0;
	cout<<"Enter the no. of processes.\n";
	cin>>n;
	cout<<"Enter the burst time\n";
	for(int i=0;i<n;i++){
		cin>>bt[i];
		rem_bt[i]=bt[i];
	}
	cout<<"Enter the quantum time.\n";
	cin>>quantum;
	t=0;
	while(1){
		bool done = true;
		for ( i = 0 ; i < n ; i++)
		{
            if (rem_bt[i] > 0)
            {
                done = false; 
				if (rem_bt[i] > quantum){
                    t += quantum;
 					rem_bt[i] -= quantum;
                }
				else
                {
                    t = t + rem_bt[i];
 					wt[i] = t - bt[i];
 					rem_bt[i] = 0;
                }
                
            }
        }
 		if (done == true)
          break;
    }
for (i = 0; i < n ; i++)
	tat[i] = bt[i] + wt[i];
for ( i=0; i<n; i++)
    {
        avg_Wt = avg_Wt + wt[i];
        avg_Tat = avg_Tat + tat[i];
	}
	avg_Wt/=n;
	avg_Tat/=n;
	cout<<"Processes\tB.T\tW.T\tT.A.T\n";
	for(i=0;i<n;i++){
		cout<<"   P"<<i+1<<"\t\t "<<bt[i]<<"\t "<<wt[i]<<"\t "<<tat[i]<<endl; 
	}
	cout<<"Average Waiting time = "<<avg_Wt<<endl;
	cout<<"Average Turn around time = "<<avg_Tat;
	
	return 0;
}
