#include<iostream>
using namespace std;

int main(){

  int num,temp,ans=0,rem,mul=1;
  cout<<"enter number in binary form:"<<endl;
  cin>>num;

  temp=num;

  //main logic
  while(num){
    rem=num%10;
    num/=10;
    ans=rem*mul+ans;
    mul*=2;
  }

  cout<<"the binary "<<temp<<" is equalint in decimal number "<<ans;
  return 0;
}