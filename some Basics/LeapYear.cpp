#include<iostream>
using namespace std;


int main(){
  int year;

  cout<<"enter a year for checking leap or not"<<endl;
  cin>>year;

  //main logic
  if(year%400==0){
    cout<<year<<" is a leap year";
  }
  else if(year%4==0 && year%100!=0){
    cout<<year<<" is a leap year";
  }
  else{
    cout<<year<<" is not a leap year";
  }
  return 0;
}