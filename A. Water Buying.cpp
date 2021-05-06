#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int q,n,a,b;
  cin>>q;
  while(q--){
    cin>>n>>a>>b;
    if(b<=2*a){
      long long int r=n/2;
      cout<<(r*b)+(n%2)*a<<"\n";
    }
    else{
      cout<<n*a<<"\n";
    }
  }
  return 0;
}
