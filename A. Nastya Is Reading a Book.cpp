#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,f,a[10000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>f>>a[i];
  }
  cin>>k;
  k=k-1;
  int c=0;
  for(int i=0;i<n;i++){
    if(k>=a[i]){
      if(i!=n-1){
      if(k<a[i+1]){
        c=i+1;
      }
      else if(k==a[i+1]){
        c=i+2;
      }
    }
    }
  }
  cout<<n-c<<"\n";
  return 0;
}
