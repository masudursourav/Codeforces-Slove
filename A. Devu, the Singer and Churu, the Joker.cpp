#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t,sum=0,d,sumt=0;
  cin>>n>>d;
  for(int i=1;i<=n;i++){
    cin>>t;
    sumt+=t;
  }
  sum=sumt+(10*(n-1));
  if(sum>d){
    cout<<"-1"<<"\n";
  }
  else{
    d=d-sumt;
    cout<<(int)d/5<<"\n";
  }
  return 0;
}
