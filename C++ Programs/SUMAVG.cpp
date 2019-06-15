#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
struct student{
	int r;
	char g,n[12];
	};
int main(){
//student o[4];
int a[30],n,i,s=0;
char c;
cout<<"how many numbers of u want to get average and sum\n";
cin>>n;
cout<<"\nenter numbers";
for(i=0;i<n;i++){
	cin>>a[i];s=s+a[i];}
float avg=s/n;
cout<<"\n For sum press 's'\n For average press 'a'\n";
cin>>c;
if(c=='a'||c=='A')cout<<avg;
else if(c=='s'||c=='S')cout<<s;
return 0;}
