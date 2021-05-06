#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,ar[7];
  cin>>a>>b>>c;
  ar[0] = a*b+c;
  ar[1] = a+b*c;
  ar[2] = a*(b+c);
  ar[3] = (a+b)*c;
  ar[4] = a+b+c;
  ar[5] = a*b*c;
  sort(ar,ar+6);
  cout<<ar[5]<<"\n";
  return 0;
}
