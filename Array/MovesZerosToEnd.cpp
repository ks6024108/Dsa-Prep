// move all the zeros to the end of array

#include<iostream>
using namespace std;

int main(){
  int a[100],size,k;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"Array before shifting:"<<endl;
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }

  //finding first zero in array
  int j;
  for(int i=0;i<size;i++){
    if(a[i]==0){
      j=i;
      break;
    }
  }

  //moving zeros to end
  for(int i=j+1;i<size;i++){
    if(a[i]!=0){
      swap(a[i],a[j]);
      j++;
    }
  }

  cout<<"\nArray after shifting:"<<endl;
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
  
  return 0;
}