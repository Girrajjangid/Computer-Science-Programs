#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *start;
void create(int x){
node *temp=new node();
temp->data=x;
temp->next=NULL;
node *ptr=start;
if(start!=NULL){
while(ptr->next!=NULL)
{ptr=ptr->next;}
ptr->next=temp;
return;}
start=temp;
}
void print(){
cout<<"entered list:\n";
node*ptr=start;
while(ptr!=NULL){
cout<<ptr->data<<" ";
ptr=ptr->next;}
}
beginI(int x){
node *temp=new node();
temp->data=x;
temp->next=start;
start=temp;}
endI(int x){create(x);}
nthI(int x,int p){
node *temp=new node();
node *ptr=start;
temp->data=x;
temp->next=NULL;
if(p==1){temp->next=start;start=temp;return 0;}
for(int i=1;i<p-1;i++)	
ptr=ptr->next;     
temp->next=ptr->next;
ptr->next=temp;}    
beginD(){
node* ptr=start;
start=start->next;	
free(ptr);
}
endD(){
	node *pre,*ptr=start;
	while(ptr->next!=NULL){
	pre=ptr;ptr=ptr->next;}
	pre->next=NULL;
    free(ptr);
}
nthD(int x){
node *ptr=start,*pre=ptr;
if(x==1){
start=start->next;
free(ptr);
}
for(int i=0;i<x-1;i++)
{pre=ptr;ptr=ptr->next;}
pre->next=ptr->next;
free(ptr);
}
NDx(){
node *ptr=start,*pre=ptr,*temp;
while(ptr->next!=NULL){
pre=ptr;
ptr=ptr->next;
if(pre->data>ptr->data)     //5   4    3   4    2
{cout<<"IN";                //4   5    3    4   2
temp->data=ptr->data;    // pre  ptr  1    2   3   4    5  
ptr->data=pre->data;
pre->data=temp->data;}
}
}

ND(int x){
node *ptr=start,*pre=ptr,*temp;
while(ptr->next!=NULL){
if(ptr->data==x){pre->next=ptr->next;temp=ptr;free(temp);
}	
else {pre=ptr;ptr=ptr->next;}
}
}
int main(){
	start=NULL;
	int i,n,x;
	cout<<"How many numbers you have entered.\n";
	cin>>n;
	cout<<"Enter Numbers\n";
	for(i=0;i<n;i++){
	cin>>x;
	create(x);}
	print();
	cout<<"\nEnter Operation.\n";
	cout<<"Press 1 for Insertion at beginning\n";
	cout<<"Press 2 for Insertion at ending\n";
	cout<<"Press 3 for Insertion at Nth postion\n";
	cout<<"Press 4 for deletion at beginning\n";
	cout<<"Press 5 for deletion at ending\n";
	cout<<"Press 6 for deletion at Nth postion\n";
	cout<<"Press 7 for deletion a Number\n";
	int a,q,p;
	cin>>q;
	switch(q){
		case 1:cout<<"Enter number.\n";cin>>a;beginI(a);print();break;
		case 2:cout<<"Enter number.\n";cin>>a;endI(a);print();break;
        case 3:cout<<"Enter Position.\n";cin>>p;cout<<"Enter number.\n";cin>>a;nthI(a,p);print();break;
		case 4:beginD();print();break;
		case 5:endD();print();break;
		case 6:cout<<"Enter Position.\n";cin>>a;nthD(a);print();break;
		case 7:cout<<"Enter Number.\n";cin>>a;ND(a);print();break;
		default:cout<<"WRONG NUMBER ENTERED";break;}
	return 0;
} 
