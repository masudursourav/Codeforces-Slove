#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int n,c,a[10000];
  cin>>n;
  for(long int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  c=n/2;
  if(n%2==0)
  cout<<a[c-1]<<"\n";
  else
  cout<<a[c]<<"\n";
  return 0;
}
