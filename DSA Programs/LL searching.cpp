#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
node* next;
};
struct node *start=NULL;

void insert(int x,int no){
node *temp=new node();
(*temp).data=x;
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
 cout<<ptr->data;
ptr=ptr->next;}
int no,i=0;
cout<<"\nEnter number for search\n";
cin>>no;
ptr=start;
while(ptr!=NULL){i++;
if(ptr->data==no)
{cout<<i;return;}
else ptr=ptr->next;
}
cout<<"not in list";
}

int main(){
int n,i,x,no;
start =NULL; // null linked list
cout<<"at ending\n\n";
cout<<"how many numbers\n";
cin>>n;
cout<<"enter numbers\n";
for(i=0;i<n;i++){
cin>>x;
insert(x,0);
}
print();
return 0;
}