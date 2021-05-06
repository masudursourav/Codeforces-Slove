#include <bits/stdc++.h>
using namespace std;
int main()
{
  string v[30],v1[30];
  long long int n,m,x;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<m;i++){
    cin>>v1[i];
  }
  long long int y;
  cin>>y;
  while(y--){
    cin>>x;
    --x;
    cout<<v[x%n]+v1[x%m]<<"\n";
  }
}
