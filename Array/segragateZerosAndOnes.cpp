#include<iostream>
using namespace std;

void printArray(int[],int);
void segerate(int[],int);
int main(){
  int a[100],size;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements (only enter 0 or 1)
  cout<<"Enter elements(0 or 1):"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  //main logic
  cout<<"\narray elements before segrating"<<endl;
  printArray(a,size);

  //main logic
  segerate(a,size);

  cout<<"\narray elements after segrating"<<endl;
  printArray(a,size);
  return 0;
}

void segerate(int a[],int size){
  int start=0,end=size-1;
  while(start<end){
    if(a[start]==0){
      start++;
    }
    else{
      if(a[end]==0){
        swap(a[start],a[end]);
        start++;
        end--;
      }
      else{
        end--;
      }
    }
  }
}

void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
}