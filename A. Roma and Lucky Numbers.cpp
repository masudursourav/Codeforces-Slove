#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k,a;
  cin>>n>>k;
  int count=0;
  while(n--){
    cin>>a;
    int c=0;
    while(a>0){
      if(a%10==4){
        ++c;
      }
      else if(a%10==7){
        ++c;
      }
      a=a/10;
    }
    if(c<=k){
      ++count;
    }
  }
  cout<<count<<"\n";
  return 0;
}
