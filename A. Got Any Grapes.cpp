#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int x,y,z,a,b,c,sum=0,sum1=0;
  cin>>x>>y>>z;
  cin>>a>>b>>c;
  sum+=a-x;
  if(sum<0){
    cout<<"NO"<<"\n";
    return 0;
  }
  sum+=(b-y);
  if(sum<0){
    cout<<"NO"<<"\n";
    return 0;
  }
  sum+=(c-z);
  if(sum<0){
    cout<<"NO"<<"\n";
    return 0;
  }
  cout<<"YES"<<"\n";
  return 0;
}
