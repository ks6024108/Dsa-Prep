#include<iostream>
using namespace std;

void InsertionSort(int[],int);
void printArray(int[],int);

int main(){
  int a[100],size;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"Array Before Sorting:"<<endl;
  printArray(a,size);

  //insertion sort function
  InsertionSort(a,size);

  cout<<"\nArray After Sorting:"<<endl;
  printArray(a,size);
  return 0;
}

//insertion sort
void InsertionSort(int a[],int n){
  for(int i=1;i<n;i++){  //n-1 round
    for(int j=i;j>0;j--){  // give element right position
        if(a[j]<a[j-1]){
          swap(a[j],a[j-1]);
        }
        else{
          break;
        }
    }
  }
}

//print array
void printArray(int a[],int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}