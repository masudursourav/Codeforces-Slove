#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,b,d,a,sum=0,c=0;
  cin>>n>>b>>d;
  while(n--){
    cin>>a;
    if(b>=a){
    sum+=a;
  }
    if(sum>d){
      sum=0;
      ++c;
    }
  }
  cout<<c<<"\n";
  return 0;
}
