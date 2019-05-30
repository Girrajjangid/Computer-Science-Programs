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
(*temp).data=x;
temp->next=start;
start=temp;
}
void print(){
struct node *ptr=start;
cout<<"list is:\n";
while(ptr!=NULL){
 //cout<<"hello\n";
int x;
cout<<ptr->data;
ptr=ptr->next;
}
}
int main(){
int n,i,x;
start =NULL; // null linked list
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
