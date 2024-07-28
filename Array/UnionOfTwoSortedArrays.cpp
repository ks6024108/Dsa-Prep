#include<bits/stdc++.h>
using namespace std;

void unionOfArrays(vector<int> &a,vector<int> &b){
  int n1=a.size();
  int n2=b.size();
  int i=0,j=0;

  vector<int> unions={};
  while(i<n1 && j<n2){
    if(a[i]<=b[j]){
      if(unions.size()==0 || unions.back()!=a[i]){
        unions.push_back(a[i]);
      }
      i++;
    }
    else{
      if(unions.size()==0 || unions.back()!=b[j]){
        unions.push_back(b[j]);
      }
      j++;
    }
  }

  while(j<n2){
    if(unions.size()==0 || unions.back()!=b[j]){
        unions.push_back(b[j]);
      }
    j++;
  }

  while(i<n1){
    if(unions.size()==0 || unions.back()!=a[i]){
        unions.push_back(a[i]);
      }
      i++;
  }

  cout<<"union of arrays will be:"<<endl;
  for(int i=0;i<unions.size();i++){
    cout<<unions[i]<<" ";
  }
}

int main(){
  vector<int> a={8,9,10,11,11,11,11,12,13,13,13,13,15,16};
  vector<int> b={3,4,5,15,18};
  
  //logic for union
  unionOfArrays(a,b);
  
  return 0;
}