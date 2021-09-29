#include<iostream>
#define N 5
using namespace std;
int main(){
int a[N],i,j,temp;
cout<<"enter total "<<N<<" elements in an array:"<<endl;
for(i=0;i<N;i++){
cout<<"enter no:"<<endl;
cin>>a[i];
}
cout<<"Using insertion sort:"<<endl;
for(i=0;i<N;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp){
a[j+1]=a[j];
--j;
}
a[j+1]=temp;
}
cout<<"Sorted elements:"<<endl;
for(i=0;i<N;i++){
cout<<a[i]<<endl;
}
return 0;
}

