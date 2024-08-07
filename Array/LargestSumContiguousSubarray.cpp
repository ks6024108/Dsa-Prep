/* also called kadane's algorithm */

#include<iostream>
#include<climits>
// #include<algorithm>
using namespace std;


int main(){
  int a[100],size;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  
  // main logic starts here
  int prefix=0,maxi=INT_MIN;
  for(int i=0;i<size;i++){
    prefix+=a[i];
    maxi=max(maxi,prefix);
    if(prefix<0){
      prefix=0;
    }
  }

  cout<<"the maximum sum will be:"<<maxi;
  return 0;
}