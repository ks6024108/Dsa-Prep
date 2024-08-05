/*   gfg binary search hard problem */

/*  ps:-
1. every student should get one book
2.Books will be allocated in contiguous way
3.out of all permutations student with most number of books got minimum pages
*/
#include<iostream>
#include<cmath>
using namespace std;

int findPages(int[],int,int);
int main(){
  int pages[5]={5,10,30,20,15},books=5,students;
  cout<<"Enter Number of students for books distribution:"<<endl;
  cin>>students;

  int minPages=findPages(pages,books,students);
  if(minPages==-1){
    cout<<"We can't distribute books in more students";
  }
  else{
  cout<<"minimum pages for distribution will be:"<<minPages;
  }
  return 0;
}

int findPages(int pages[],int books,int students){
  if(students>books){
    return -1;
  }

  int start=0,end=0,mid,ans;
  for(int i=0;i<books;i++){
    start=max(start,pages[i]);
    end+=pages[i];
  }

  while(start<=end){
    mid=start+(end-start)/2;
    int page=0,count=1;
    for(int i=0;i<books;i++){
      page+=pages[i];
      if(page>mid){
        count++;
        page=pages[i];
      }
    }
    if(count<=students){
      ans=mid;
      end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  return ans;
}