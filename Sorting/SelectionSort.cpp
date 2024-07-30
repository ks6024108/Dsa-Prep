#include<iostream>
using namespace std;

void SelectionSort(int[],int);
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

  //selection sort function
  SelectionSort(a,size);

  cout<<"\nArray After Sorting:"<<endl;
  printArray(a,size);
  return 0;
}

//selection sort
void SelectionSort(int a[],int n){
  int min;
  for(int i=0;i<n-1;i++){  //n-1 round
    min=i;
    for(int j=i+1;j<n;j++){  //find minimum in array
      if(a[j]<a[min]){
        min=j;
      }
    }
    swap(a[i],a[min]);  //swap both
  }
}

//print array
void printArray(int a[],int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}