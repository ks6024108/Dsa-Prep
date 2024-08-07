#include<iostream>
using namespace std;

int main(){
  int a[100],n;
  cout<<"Enter array size:"<<endl;
  cin>>n;
  cout<<"Enter elements:"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int totalSum=0;
  for(int i=0;i<n;i++){
    totalSum+=a[i];
  }

  int prefix=0;
  bool check=false;
  for(int i=0;i<n-1;i++){
      prefix+=a[i];
      if(totalSum==2*prefix){
        check=true;
      }
  }
  if(check){
    cout<<"array exists";
  }
  else{
    cout<<"not exists";
  }
  return 0;
}