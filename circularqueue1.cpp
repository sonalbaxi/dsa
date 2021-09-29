#include<iostream>
#include <conio.h>
#define MAX 10
using namespace std;
int queue[MAX];
int front=-1, rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option, val;
do
{
cout<<"--------MAIN MENU--------"<<endl;
cout<<"1. for Insert an element"<<endl;
cout<<"2. for Delete an element"<<endl;
cout<<"3. for Peek"<<endl;
cout<<"4. for Display the queue"<<endl;
cout<<"5. for EXIT"<<endl;
cout<<"Enter your option : "<<endl;
cin>>option;
switch(option)
{
case 1:
insert();
break;
case 2:
val = delete_element();
if(val!=-1)
front=rear=-1;
cout<<"\n The number deleted is :"<< val;
break;
case 3:
val = peek();
if(val!=-1)
cout<<"\n The first value in queue is : "<< val;
break;
case 4:
display();
break;
}
}while(option!=5);
return 0;
}
void insert()
{
int num;
cout<<"\n Enter the number to be inserted in the queue : ";
cin>>num;
if(front==0 && rear==MAX-1)
cout<<"\n OVERFLOW";
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=num;
}
else if(rear==MAX-1 && front!=0)
{
rear=0;
queue[rear]=num;
}
else
{
rear++;
queue[rear]=num;
}
}
int delete_element()
{
int val;
if(front==-1 && rear==-1)
{
cout<<"\n UNDERFLOW";
return -1;
}
val = queue[front];
if(front==rear)
front=rear=-1;
else
{
if(front==MAX-1)
front=0;
else
front++;
}
return val;
}
int peek()
{
if(front==-1 && rear==-1)
{
cout<<"\n QUEUE IS EMPTY";
return -1;
}
else
{
return queue[front];
}
}
void display()
{
int i;
cout<<"\n";
if (front ==-1 && rear==-1)
cout<<"\n QUEUE IS EMPTY";
else
{
if(front<rear)
{
for(i=front;i<=rear;i++)
cout<<"\t"<< queue[i];
}
else
{
for(i=front;i<MAX;i++)
cout<<"\t"<< queue[i];
for(i=0;i<=rear;i++)
cout<<"\t"<< queue[i];
}
}
}

