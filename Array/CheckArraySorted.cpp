// check array is sorted or not

#include<iostream>
using namespace std;

int main(){
  int a[100],size;
  bool check; 

  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //input array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  //main logic
  for(int i=1;i<size;i++){
    if(a[i]>=a[i-1]){}
    else{
      check=false;
      break;
    }
    check=true;
  }

  if(check){
    cout<<"Array is in sorted order";
  }
  else{
    cout<<"Array is not in sorted order";
  }
  return 0;
}