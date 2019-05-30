#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
struct Node* start;
void insert(int n){
Node* temp=new Node;
temp->data=n;
temp->next=NULL;
if(start!=NULL)
{temp->next=start;} 
start=temp;
}
void print(){
	struct Node* temp=start;
	while(temp!=NULL){
	cout<<temp->data;
	temp=temp->next;
	}
}
int main(){
start=NULL;
int n,i,x;
cout<<"how many numbers";
cin>>n;
cout<<"enter numbers";
for(i=0;i<n;i++){
cin>>x;	
insert(x);
}
print();

}

