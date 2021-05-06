#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int sum=0,k2,k3,k5,k6;
  cin>>k2>>k3>>k5>>k6;
  long int n=min(k2,min(k5,k6));
  sum=n*256;
  k2=k2-n;
  long int n1=min(k2,k3);
  sum+=n1*32;
  cout<<sum<<"\n";
  return 0;

}
