#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a[10000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){
      a[i]=a[i]-1;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i];
    if(i!=n-1){
      cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
