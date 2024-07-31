/*    number in array are in strictly increasing order  */

#include<iostream>
using namespace std;

int InsertPosition(int[],int,int);

int main(){
  int a[100],size,num,pos;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"Enter number to be search:"<<endl;
  cin>>num;
  
  pos=InsertPosition(a,size,num);

  cout<<"Element "<<num<<" will be insert at index "<<pos;
  return 0;
}


int InsertPosition(int a[],int size,int num){
  int start=0,end=size-1,mid,pos=size;
  while(start<=end){
    mid=start+(end-start)/2;
    if(a[mid]==num){
      return mid;
    }
    else if(a[mid]<num){
      start=mid+1;
    }
    else{
      pos=mid;
      end=mid-1;
    }
  }
  return pos;
}