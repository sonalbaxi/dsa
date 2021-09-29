#include<iostream>
#define N 5
using namespace std;
int main(){
int a[N],i,j,temp;
cout<<"Enter total "<<N<<" Elements in an array:"<<endl;
for(i=0;i<N;i++){
	
cout<<"Enter no:"<<endl;
cin>>a[i];
}
cout<<"Using Bubble Sort:\n";
for(i=0;i<N;i++)
{
for(j=0;j<N-1-i;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"After sorting"<<endl;
cout<<"Sorted elements are :"<<endl;
for(i=0;i<N;i++){
cout<<a[i]<<endl;
}
return 0;
}
