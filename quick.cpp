#include<iostream>
#define N 5
void quicksort(int,int);
int partition(int,int);
int pIndex;
int a[N];
using namespace std;
int main(){
cout<<"this program shows the use of quick sorting"<<endl;
int i;
for(i=0;i<N;i++){
cout<<"\nenter no:";
cin>>a[i];
}
quicksort(0,N-1);
cout<<"\nafter sorting"<<endl;
for(i=0;i<N;i++){
cout<<a[i]<<endl;
}
return 0;
}
void quicksort(int start,int end){
if(start<end){
int pIndex=partition(start,end);
quicksort(start,pIndex-1);
quicksort(pIndex+1,end);
}
}
int partition(int start,int end){
int pivot=a[end];
pIndex=start;
for(int i=start;i<end;i++){
if(a[i]<pivot){
int temp=a[pIndex];
a[pIndex]=a[i];
a[i]=temp;
pIndex=pIndex+1;
}
}
int t=a[end];
a[end]=a[pIndex];
a[pIndex]=t;
return pIndex;
}

