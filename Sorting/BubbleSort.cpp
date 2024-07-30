#include<iostream>
using namespace std;

void BubbleSort(int[],int);
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

  //Bubble sort function
  BubbleSort(a,size);

  cout<<"\nArray After Sorting:"<<endl;
  printArray(a,size);
  return 0;
}

//Bubble sort
void BubbleSort(int a[],int n){
  for(int i=0;i<n-1;i++){  //n-1 round
    for(int j=1;j<n-i;j++){  
        if(a[j]<a[j-1]){
          swap(a[j-1],a[j]);
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