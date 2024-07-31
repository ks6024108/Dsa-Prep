// don't consider decimal ,return only integer part

#include<iostream>
using namespace std;

int Sqrt(int);
int main(){
  int x;
  cout<<"Enter number for square root:"<<endl;
  cin>>x;

  int res=Sqrt(x);
  cout<<"The sqrt of "<<x<<" will be "<<res;
}


int Sqrt(int x){
  if(x<2){
    return x;
  }
  int start=0,end=x,mid,ans;
  while(start<=end){
    mid=start+(end-start)/2;

    if(mid==x/mid){
      return mid;
    }
    else if(mid<x/mid){
        ans=mid;
        start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return ans;
}