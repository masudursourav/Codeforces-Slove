#include <bits/stdc++.h>
using namespace std;
int main()
{
  int l,r,a;
  cin>>l>>r>>a;
  if(l==r){
    if(a%2==0){
      cout<<l+r+a<<"\n";
    }
    else{
      cout<<l+r+(a-1)<<"\n";
    }
    return 0;
  }
  int mx=max(l,r);
  int mi=min(l,r);
  l=mx;
  r=mi;
  r=r+a;
  a=r-mx;

  if(a>0){
    if(a%2==0){
      cout<<l*2+a<<"\n";
    }
    else{
      cout<<l*2+(a-1)<<"\n";
    }
  }
  else{
    cout<<min(l,r)*2<<"\n";
  }
  return 0;
}
