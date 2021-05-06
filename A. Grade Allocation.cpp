#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,sum=0,n,m,in;
  cin>>t;
  while(t--){
    cin>>n>>m;
    sum=0;
    while(n--){
      cin>>in;
      sum+=in;
    }
  cout<<min(sum,m)<<"\n";
  }
  return 0;
}
