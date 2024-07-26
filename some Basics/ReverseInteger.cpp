#include<iostream>
#include<climits>
using namespace std;

int main(){

  int num,rem,rev=0,temp;

  cout<<"enter a number:"<<endl;
  cin>>num;

  temp=num;
  //main logic
  while(num){
    rem=num%10;
    num/=10;

    //for checking overflow in case of max and min
    if(rev>INT_MAX/10  || rev<INT_MIN/10){
      cout<<"out of range ,please enter in integer range";
      return 0;
    }
    rev=rev*10+rem;
  }
  cout<<"reverse of "<<temp<<" will be:"<<rev;
  return 0;
}