#include <bits/stdc++.h>
using namespace std;
int main()
{
  double n,k,r,g,b;
  long long int re;
  cin>>n>>k;
  r=ceil((n*2.0)/k);
  g=ceil((n*5.0)/k);
  b=ceil((n*8.0)/k);
  re=r+g+b;
  cout<<re<<"\n";
  return 0;
}
