#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m,l,r;
  cin>>n>>m>>l>>r;
  if((n+m)<=(l*r)){
    cout<<"Yes"<<"\n";
  }
  else{
    cout<<"No"<<"\n";
  }
  return 0;
}
