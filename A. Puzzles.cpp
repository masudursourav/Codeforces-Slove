#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a[100],b[100];
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  sort(a,a+m);
  int min=2000;
  for(int i=0;i+n<=m;i++){
    if(abs(a[n+i-1]-a[i])<min){
      min=abs(a[n+i-1]-a[i]);

  }
}
  cout<<min<<"\n";
  return 0;
}
