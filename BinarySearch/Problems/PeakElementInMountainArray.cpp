/*   we have to return the index of the peak element present in mountain array  */

#include<iostream>
using namespace std;

int PeakElementInMountainArray(int[],int);

int main(){
  int a[100],size;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  
  int index=PeakElementInMountainArray(a,size);
  cout<<"Peak Element "<<a[index]<<" is at index "<<index;
  return 0;
}

int PeakElementInMountainArray(int a[],int size){
  int start=0,end=size-1,mid;
  while(start<=end){
    mid=end+(start-end)/2;

    if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
      return mid;
    }
    else if(a[mid]>a[mid-1]){
        start=mid+1;
    }
    else{
      end=mid-1;
    }
  }

}