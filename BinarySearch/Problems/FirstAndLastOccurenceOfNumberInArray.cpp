
#include<iostream>
using namespace std;

int FirstOccurence(int[],int,int);
int LastOccurence(int[],int,int);

int main(){
  int a[100],size,num,first,last;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  //enter array elements
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"Enter number to be search for occurence:"<<endl;
  cin>>num;
  
  first=FirstOccurence(a,size,num);
  last=LastOccurence(a,size,num);
  if(first==-1 && last==-1){
    cout<<"No occurence of that number";
  }
  else{
    cout<<"the first occurence at index "<<first<<"\nand last occurence at index "<<last;
  }
  return 0;
}

//first occurence
int FirstOccurence(int a[],int size,int num){
  int start=0,end=size-1,mid,first=-1;
  while(start<=end){
    mid=start+(end-start)/2;
    if(a[mid]==num){
      first=mid;
      end=mid-1;
    }
    else if(a[mid]<num){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return first;
}

//last occurence
int LastOccurence(int a[],int size,int num){
  int start=0,end=size-1,mid,last=-1;
  while(start<=end){
    mid=start+(end-start)/2;
    if(a[mid]==num){
      last=mid;
      start=mid+1;
    }
    else if(a[mid]<num){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return last;
}