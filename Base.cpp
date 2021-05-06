#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    while(n!=0){
      cout<<n%2;
      n=n/2;
    }
    cout<<"\n";
  }
  return 0;
}
