#include<iostream>
using namespace std;


int main(){
  int a[100],size,temp; 

  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //input array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  //printing array before rotation
  cout<<"Array before rotation:"<<endl;
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }

  //main logic
  temp=a[0];
  for(int i=1;i<size;i++){
    a[i-1]=a[i];
  }
  a[size-1]=temp;

  //printing array after rotation
  cout<<"\nArray after rotation:"<<endl;
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}