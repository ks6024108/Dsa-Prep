/*
find second largest element in array without sorting
approaches:-
      1.find largest in first pass then second pass for second largest element.
      2.using two pointer approach
*/

#include<iostream>
using namespace std;

int SecondLargest(int[],int);

int main(){
  int a[100],size,ans; 

  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //input array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  ans=SecondLargest(a,size);

  if(ans!=-1){
    cout<<"Second largest element will be:"<<ans;
  }
  else{
    cout<<"There is no second largest element in array";
  }

  return 0;
}

//function for find second largest
int SecondLargest(int a[],int size){
  int largest=a[0],slargest=-1; //in case of non negative array elements we taken slargest=-1 ,if negative then use INT_MIN
  for(int i=1;i<size;i++){
    if(a[i]>largest){
      slargest=largest;
      largest=a[i];
    }
    else if(a[i]<largest  && a[i]>slargest){
      slargest=a[i];
    }
  }
  return slargest;
}