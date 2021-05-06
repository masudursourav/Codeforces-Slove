#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a=0,al=0,b=0,bl=0,t,n,x,y;
  cin>>n;
  while(n--){
    cin>>t>>x>>y;
    if(t==1){
      a+=x;
      al+=y;
    }
    else{
      b+=x;
      bl+=y;
    }
  }
    if(a>=al){
      cout<<"LIVE"<<"\n";
    }
    else{
      cout<<"DEAD"<<"\n";
    }
    if(b>=bl){
      cout<<"LIVE"<<"\n";
    }
    else{
      cout<<"DEAD"<<"\n";
    }
  return 0;
}
