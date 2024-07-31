/*     for binary search the array must be sorted  */

#include<iostream>
using namespace std;

int BinarySearch(int[],int,int);

int main(){
  int a[100],size,num;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"Enter number to be search:"<<endl;
  cin>>num;
  int index=BinarySearch(a,size,num);
  if(index!=-1){
    cout<<num<<" find at index "<<index;
  }
  else{
    cout<<"Not found";
  }
  return 0;
}

int BinarySearch(int a[],int size,int num){
  int start=0,end=size-1,mid;
  while(start<=end){
    mid=start+(end-start)/2;
    if(a[mid]==num){
      return mid;
    }
    else if(a[mid]<num){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return -1;
}