#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k,t;
  cin>>n>>k>>t;
  if(t>=k && t<=n){
    cout<<k<<"\n";
  }
  else if(t<=k){
    cout<<t<<"\n";
  }
  else{
    cout<<(n+k)-t<<"\n";
  }
  return 0;
}
