#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *top;
};
class stack{
		
		node *start=NULL;
		
		public:void push(int x){
			node *newnode=new node();
			newnode->data=x;
			newnode->top=NULL;
			if(start==NULL){
				start=newnode;
			
			   newnode->top=NULL;
			}
			else{
				node *n;
				n=start;
				while(n->top!=NULL){
					n=n->top;
					}
					
					n->top=newnode;
					
				  	}
			}
			public:void pop(){
			 node *n;
			
			 n=start;
			 while(n->top->top!=NULL){
					n=n->top;
					}
					
					
					n->top=NULL;
					
				  	
			}
			 
			public:void display(){
				node *n;
				n=start;
				while(n!=NULL){
					cout<<n->data<<endl;
					n=n->top;
				}
			}
		};
		int main(){
			stack s1;
			int choice,x;
				while(choice!=4){
			cout<<endl<<"-------MENU-------"<<endl;
			cout<<"1 for push"<<endl;
			cout<<"2 for pop"<<endl;
			cout<<"3 for display"<<endl;
			cout<<"4 for exit"<<endl;
			cout<<"enter your choice:"<<endl;
			cin>>choice;
			switch(choice){
				case 1:
				cout<<"enter no:";
				cin>>x;
				s1.push(x);
				break;
				case 2:
				s1.pop();
				break;
				case 3:
				s1.display();
				break;
			
				}
			}
			
		}
			
