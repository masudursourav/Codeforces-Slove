#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  cout<<a[(int)n/2]<<"\n";
  return 0;
}
