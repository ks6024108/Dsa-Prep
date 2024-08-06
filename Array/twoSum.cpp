//array is sorted
#include<iostream>
using namespace std;

void printArray(int[],int);
int twoSum(int[],int,int);
int main(){
  int a[100],size,target;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements (only enter 0 or 1)
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"enter target element:"<<endl;
  cin>>target;

  //main logic
  cout<<"\narray elements before segrating"<<endl;
  printArray(a,size);

  //main logic
  twoSum(a,size,target);

 int ans=twoSum(a,size,target);
 if(ans==1){
  cout<<"\nelements present in array";
 }else{
  cout<<"\nnot two elements that meets target";
 }
}

int twoSum(int a[],int size,int target){
  int start=0,end=size-1;
  while(start<end){
    if(a[start]+a[end]==target){
      return 1;
    }
    else if(a[start]+a[end]<target){
      start++;
    }
    else{
      end--;
    }
  }
  return 0;
}

void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
}