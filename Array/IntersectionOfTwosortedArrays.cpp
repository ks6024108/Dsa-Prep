#include<bits/stdc++.h>
using namespace std;

void IntersectionOfArrays(vector<int> &a,vector<int> &b){
  int n1=a.size();
  int n2=b.size();
  int i=0,j=0;

  vector<int> intersection={};
  while(i<n1 && j<n2){
    if(a[i]<b[j]){
      i++;
    }
    else if(b[j]<a[i]){
      j++;
    }
    else{
      intersection.push_back(a[i]);
      i++;
      j++;
    }
  }
  
  cout<<"Intersection of arrays will be:"<<endl;
  for(int i=0;i<intersection.size();i++){
    cout<<intersection[i]<<" ";
  }
}

int main(){
  vector<int> a={1,2,2,3,3,4,5,6,7,8,8};
  vector<int> b={2,3,4,5,6,6,7,8,8};
  
  //logic for intersection
  IntersectionOfArrays(a,b);
  
  return 0;
}