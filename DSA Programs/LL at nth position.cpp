#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
node* next;
};
struct node* start=NULL;

void insert(int x){

node *temp=new node();
temp->data=x;
temp->next=NULL;
if(start==NULL)
{temp->next=start;start=temp;return;}  
node *ptr=start;
while(ptr->next!=NULL)
{ptr=ptr->next;}
ptr->next=temp;
}
void print(){
struct node *ptr=start;
cout<<"list is:\n";
while(ptr!=NULL){       
ptr=ptr->next;
}}
void inserts(int data,int pos){
node *temp1=new node();
(*temp1).data=data;
temp1->next=NULL;
if(pos==1){temp1->next=start;start=temp1;return;}
node* ptr1=start;
for(int i=1;i<pos-1;i++){
ptr1=ptr1->next;}
temp1->next=ptr1->next;
ptr1->next=temp1;
}
void prints(){
struct node *ptr1=start;
cout<<"Entered list is:\n";
while(ptr1!=NULL){
cout<<ptr1->data;
ptr1=ptr1->next;
}
}

int main(){
int n,i,p,x,data;
start =NULL; // null linked list
cout<<"at nth position\n\n";
cout<<"How many numbers";
cin>>n;
cout<<"Enter numbers\n";
for(i=0;i<n;i++)
{cin>>x;
insert(x);}
print();

cout<<"\nenter position where u wants to add number\n";
cin>>p;
cout<<"enter number\n";
cin>>data;
inserts(data,p);
prints();
return 0;
}
