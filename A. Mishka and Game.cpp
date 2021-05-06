#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m=0,c=0,mi,ci;
  cin>>n;
  while(n--){
    cin>>mi>>ci;
    if(mi>ci){
      ++m;
    }
    else if(ci>mi){
      ++c;
    }
  }
  if(m>c){
    cout<<"Mishka"<<"\n";
  }
  else if(m<c){
    cout<<"Chris"<<"\n";
  }
  else{
    cout<<"Friendship is magic!^^"<<"\n";
  }
  return 0;
}
