#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,c=0;
  cin>>n;
  if(n>=25){
    c+=n/25;
    n=n-(25*(n/25));
  }

  if(n>=10){
    c+=n/10;
    n=n-(10*(n/10));
  }
  if(n>=5){
    c+=n/5;
    n=n-(5*(n/5));
  }
  if(n>=1){
    c+=n;
  }
  cout<<c<<"\n";
  return 0;
}
