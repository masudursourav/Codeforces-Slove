#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  int a[100],b[100];
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int in,k=0;
  for(int i=0;i<m;i++){
    cin>>in;
    for(int j=0;j<n;j++){
      if(a[j]==in){
        b[k]=j;
        ++k;
        break;
      }
    }
  }
  sort(b,b+k);
  for(int i=0;i<k;i++){
    cout<<a[b[i]];
    if(i!=k-1){
      cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
