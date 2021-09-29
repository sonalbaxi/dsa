#include<iostream>
#define N 5
using namespace std;
int main(){
	int a[N],i,j,temp,min_num;
	cout<<"Enter total "<<N<<" elements in an array:"<<endl;
	for(i=0;i<N;i++){
		cout<<"Enter no:"<<endl;
		cin>>a[i];
}
cout<<"Using Selection Sort:"<<endl;
for(i=0;i<N-1;i++)
{ 
	min_num=i;
	for(j=i+1;j<N;j++){
		if(a[j]<a[min_num]){
			min_num=j;
		}
	}
temp=a[i];
a[i]=a[min_num];
a[min_num]=temp;
}
cout<<"Sorted Elements are:"<<endl;
for(i=0;i<N;i++){
cout<<a[i]<<endl;
	}
}

