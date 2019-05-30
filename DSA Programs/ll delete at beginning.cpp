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
ptr=ptr->next;
ptr->next=temp;
}
void print(){
struct node *ptr=start;
cout<<"\nBefore deletion list is:\n";
while(ptr!=NULL){
cout<<ptr->data<<" ";
ptr=ptr->next;
}
ptr=start;
start=start->next;
free(ptr);
ptr=start;
cout<<"\nAfter deletion list is:\n";
while(ptr!=NULL){
cout<<ptr->data<<" ";
ptr=ptr->next;
}

}
int main(){
int n,i,x;
start =NULL;
cout<<"at beginning\n\n";
cout<<"how many numbers\n";
cin>>n;
cout<<"enter numbers\n";
for(i=0;i<n;i++){
cin>>x;
insert(x);
}
print();
return 0;
}