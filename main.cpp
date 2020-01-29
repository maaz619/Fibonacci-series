#include<iostream>
using namespace std;
int main(){
  long int i,j=0,k=0,l=1;
  cout<<"Enter Input:";
  cin>>i;
  if(i>=2||i==1)
  cout<<"0"<<endl<<"1"<<endl;
  while(i>j){
    j=k+l;
    if(j>i)
    break;
    cout<<j<<endl;
    k=l;
    l=j;
  }
return 0;
}

