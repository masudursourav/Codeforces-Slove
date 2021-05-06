#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a,b,c,d,k,x,y;
  int t;
  cin>>t;
  while(t--){
    x=0.0,y=0.0;
    cin>>a>>b>>c>>d>>k;
    x=ceil(a/c);
    y=ceil(b/d);
    int xi=x;
    int yi=y;
    if(xi+yi<=k){
      cout<<k-yi<<" "<<yi<<"\n";
    }
    else{
      cout<<"-1"<<"\n";
    }
  }
  return 0;
}
