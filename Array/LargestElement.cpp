// find largest element in array

#include<iostream>
using namespace std;

int main(){

  int a[100],size,largest;

  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //input array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  //main logic
  largest=a[0];
  for(int i=1;i<size;i++){
    if(a[i]>largest){
      largest=a[i];
    }
  }

  //print
  cout<<"Maximum number in array is:"<<largest;

  return 0;
}