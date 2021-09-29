
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	void move(int,char,char,char);
	int n;
	cout<<"enter number of disks :";
	cin>>n;
	move(n,'a','b','c');
}
void move(int n,char beg,char aux,char end){
	if(n==1){
		cout<<"\nmove:disk1 from "<<beg<<"->"<<end;
	}
	else{
		move(n-1,beg,end,aux);
		cout<<"\nmove disk :"<<beg<<"->"<<end;
		move(n-1,aux,beg,end);
	}
}

