#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,in,sum=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>in;
    sum+=i*in;
  }
  cout<<sum<<"\n";
  return 0;
}
