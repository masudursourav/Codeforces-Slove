#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[4];
  cin>>a[0]>>a[1]>>a[2];
  sort(a,a+3);
  int sum=(a[1]-a[0])+(a[2]-a[1]);
  cout<<sum<<"\n";
  return 0;
}
