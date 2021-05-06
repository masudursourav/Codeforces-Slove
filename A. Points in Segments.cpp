#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a[1000],b[1000],f[1000];
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
  }
  int c=0,ch=0,k=0;
  for(int i=1;i<=m;i++){
    ch=0;
    for(int j=0;j<n;j++){
      if(i>=a[j] && i<=b[j]){
        ch=1;
        break;
      }
    }
    if(!ch){
      ++c;
      f[k]=i;
      ++k;
    }
  }
  cout<<c<<"\n";
  for(int i=0;i<k;i++){
    cout<<f[i];
    if(i!=k-1){
      cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
