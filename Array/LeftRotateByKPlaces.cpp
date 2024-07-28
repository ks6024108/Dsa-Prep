
/*         example of built-in algorithm library        */

#include<iostream>
#include<algorithm>
using namespace std;

void leftRotate(int[],int,int);
void printArray(int[],int);


int main(){
  int a[100],size,k;
  cout<<"Enter size of array:"<<endl;
  cin>>size;

  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  cout<<"Array before rotation:"<<endl;
  printArray(a,size);

  cout<<"\nEnter number of shifts:"<<endl;
  cin>>k;

  //in case user enter shifts more then size of array
  if(k>size){
    k=k%size;
  }

  leftRotate(a,size,k);

  cout<<"Array after rotation:"<<endl;
  printArray(a,size);

  return 0;
}

//left rotation function
void leftRotate(int a[],int size,int k){
  rotate(a,a+k,a+size); //built-in function that perform left rotation
}

//for printing array 
void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
}