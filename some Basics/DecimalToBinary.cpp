#include<iostream>
using namespace std;

int main(){
  int num,ans=0,rem,mul=1,temp;
  cout<<"enter a number in decimal:"<<endl;
  cin>>num;

  temp=num;
  //main logic
  while(num){
    rem=num%2;
    num/=2;
    ans=rem*mul+ans;
    mul*=10;
  }
  cout<<"the number "<<temp<<" in binary form:"<<ans;

  return 0;
}