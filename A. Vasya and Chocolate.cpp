#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int s,a,b,c,t;
  cin>>t;
  while(t--){
  cin>>s>>a>>b>>c;
  long long int r,sum=0,x;
  r=s/c;
  x=r/a;
  sum=x*b+r;
  cout<<sum<<"\n";
}
return 0;
}
