//assuming array is sorted if not then try to use vector
#include<iostream>
using namespace std;

void printArray(int[],int);
int pairWithGivenDifference(int[],int,int);
int main(){
  int a[100],size,diff;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements (only enter 0 or 1)
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"\nenter difference:"<<endl;
  cin>>diff;
  //main logic
  cout<<"\narray elements before segrating"<<endl;
  printArray(a,size);

  //main logic
  int ans=pairWithGivenDifference(a,size,diff);

  if(ans==1){
    cout<<"\nelements present";
  }
  else{
    cout<<"\nNot present";
  }
  
  return 0;
}

int pairWithGivenDifference(int a[],int size,int diff){
  int start=0,end=1;
  while(end<size){
    if(a[end]-a[start]==diff){
      return 1;
    }
    else if(a[end]-a[start]<diff){
      end++;
    }
    else{
      start++;
    }
  }
  return 0;
}

void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
}