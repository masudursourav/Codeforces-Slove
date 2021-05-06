#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,sum=0,a,b,d[1000];
  cin>>n;
  for(int i=1;i<n;i++){
    cin>>d[i];
  }
  cin>>a>>b;
  int j=1;
  for(int i=a;i<b;i++){
    sum+=d[i];
  }
  cout<<sum<<"\n";
  return 0;
}
