// linear search operation
/* if element find then return the index of element else return -1 */

#include<iostream>
using namespace std;

int LinearSearch(int[],int,int);

int main(){
  int a[100],size,num,index=-1;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //input array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  //input number to be search in array
  cout<<"Enter number to be search:"<<endl;
  cin>>num;

  index=LinearSearch(a,size,num);

  if(index!=-1){
    cout<<"element found at index:"<<index;
  }
  else{
    cout<<"element not found in array";
  }
  return 0;
}

//linear search function
int LinearSearch(int a[],int size,int num){
  for(int i=0;i<size;i++){
    if(a[i]==num){
      return i;
    }
  }
  return -1;
}