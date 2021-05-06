#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k,f,t,a[100000];
  cin>>n>>k;
  int j=0;
  while(n--){
    cin>>f>>t;
    if(t>k){
      a[j]=f-(t-k);
      ++j;
    }
    else{
      a[j]=f;
      ++j;
    }
  }
  sort(a,a+j,greater<int>());
  cout<<a[0]<<"\n";
  return 0;
}
