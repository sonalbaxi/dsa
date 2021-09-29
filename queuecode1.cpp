#include <iostream>
#include <conio.h>
#define MAX 10 // Changing this value will change length of array
using namespace std;
int queue[MAX];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option, val;
while(1)
{
cout<<endl<<endl<<"----- MAIN MENU --------"<<endl;
cout<<"1 for insert an element"<<endl;
cout<<"2 for Delete an element"<<endl;
cout<<"3 for Peek"<<endl;
cout<<"4 for Display the queue"<<endl;
cout<<"5 for EXIT"<<endl;
cout<<"Enter your option :"<<endl;
cin>>option;
switch(option)
{
case 1:
insert();
break;
case 2:
val = delete_element();
if (val != -1)
cout<<"\n"<<"The number deleted is : "<< val;
break;
case 3:
val = peek();
if (val != -1)
cout<<"\n"<<"The first value in queue is "<< val;
break;
case 4:
display();
break;
case 5:
	exit(1);
}
}

return 0;
}
void insert()
{
int num;
cout<<endl<<"Enter the number to be inserted in the queue :";
cin>>num;
if(rear == MAX-1)
cout<<"overflow";
else if(front == -1 && rear == -1)
front = rear = 0;
else
rear++;
queue[rear] = num;
}
int delete_element()
{
int val;
if(front == -1 || front>rear)
{
cout<<endl<<"UNDERFLOW";
return -1;
}
else
{
val = queue[front];
front++;
if(front > rear)
front = rear = -1;
return val;
}
}
int peek()
{
if(front==-1 || front>rear)
{
cout<<"QUEUE IS EMPTY";
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
cout<<endl;
if(front == -1 || front > rear)
cout<<endl<<"QUEUE IS EMPTY";
else
{
for(i = front;i <= rear;i++)
cout<<"\t"<<queue[i];
}
}

