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
cout<<"before deletion list is:\n";
while(ptr!=NULL){
 cout<<ptr->data<<" ";
ptr=ptr->next;}

cout<<"\nenter position where u wants to delete a number\n";
int p;
cin>>p;
ptr=start;
 node *pre=ptr;
for(int i=0;i<p-1;i++)
{ pre=ptr;
ptr=ptr->next;}
free(ptr);
pre->next=ptr->next;

ptr=start;
while(ptr!=NULL){
 cout<<ptr->data<<" ";
ptr=ptr->next;}}

int main(){
int n,i,p,x,data;
start =NULL; // null linked list
cout<<"at nth position\n\n";
cout<<"How many numbers\n";
cin>>n;
cout<<"Enter numbers\n";
for(i=0;i<n;i++)
{cin>>x;
insert(x);}
print();
return 0;
}
