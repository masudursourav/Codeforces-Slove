#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  if(m>n){
    cout<<"-1"<<"\n";
    return 0;
  }
  int temp;
  if(n%2==0){
    temp=n/2;
  }
  else{
    temp=(n+1)/2;
  }
  while(temp<=n){
    if(temp%m==0){
      cout<<temp<<"\n";
      return 0;
    }
    ++temp;
  }
  cout<<"-1"<<"\n";
  return 0;
}
