using namespace std;
#include <conio.h>
#include<stdio.h>
#include<iostream>
// In this program we find min and max values
int main(){
int x[10];
int max ,min,n,i;
cout<<"Enter 5 numbers.\n";
for(i=0;i<5;i++){cin>>x[i];}
max = x[0];
min = x[0];
for(i=0;i<5;i++){
	if(x[i] > max){
	
		max = x[i];
	}else {
		min = x[i];
	
	}
}
cout<<"Maximum = "<<max<<endl;
cout<<"Minimum = "<<min;
return 0;	
}

