#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=2;i<=n;){
    if(n%i==0){
      cout<<i;
      n=n/i;
      i=2;
    }
    else{
      i++;
    }
  }
  cout<<"\n";
  return 0;
}
