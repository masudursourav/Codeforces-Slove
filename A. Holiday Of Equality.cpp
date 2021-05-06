#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int sum=0;
  int n,a[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  int up=a[n-1];
  for(int i=0;i<n;i++){
    sum+=up-a[i];
  }
  cout<<sum<<"\n";
  return 0;
}
