//add digits of a number until we get single digit number
/*
ex:-
2356 = 2+3+5+6 = 16 = 1+6 = 7 //final answer in single digit
*/

#include<iostream>
using namespace std;

int main(){
  int num,sum,temp,rem;

  cout<<"Enter a number:"<<endl;
  cin>>num;
  temp=num;

  //main logic
  while(num>9){
    sum=0;
    while(num){
      rem=num%10;
      num/=10;
      sum+=rem;
    }
    num=sum;
  }
  cout<<"sum of digits in number "<<temp<<" in single digit will be:"<<sum;
  return 0;
}