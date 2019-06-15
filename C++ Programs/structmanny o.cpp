#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
struct student{
	int r;
	char g,n[12];
	};
int main(){
student o[4]; 
	int i;
	for(i=0;i<=2;i++){
	cout<<"enter name\n";
	cin>>o[i].n;
	cout<<"enter roll no.\n";
	cin>>o[i].r;
	cout<<"enter grade\n";
	cin>>o[i].g;}cout<<"entered information\n";
	for( i=0;i<=2;i++){
	cout<<"Name= "<<o[i].n<<".\nRoll no.= "<<o[i].r;
	cout<<".\nGrade= "<<o[i].g;}
return 0;}
