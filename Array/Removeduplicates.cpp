/*
    ** in sorted array   **
return the number of unique elements in array and 
set all unique elements at starting in array  
*/

#include<iostream>
using namespace std;

int RemoveDuplicate(int[],int);
int main(){
  int a[100],size,ans;

  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //input array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  ans=RemoveDuplicate(a,size);
  cout<<"The number of unique elements in array is:"<<ans;
  return 0;
}

//function for main logic  (2-pointer approach)
int RemoveDuplicate(int a[],int size){
  int i=0;
  for(int j=1;j<size;j++){
    if(a[j]!=a[i]){
      a[i+1]=a[j];
      i++;
    }
  }
  return i+1;
}