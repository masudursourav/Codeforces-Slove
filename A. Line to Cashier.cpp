#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int m[1000],p[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m[i];
  }
  long long int sum=0;
  for(int i=0;i<n;i++){
    sum=0;
    for(int j=0;j<m[i];j++){
      int in;
      cin>>in;
      sum+=in*5;
    }
    sum+=m[i]*15;
    p[i]=sum;
  }
  sort(p,p+n);
  cout<<p[0]<<"\n";
}
