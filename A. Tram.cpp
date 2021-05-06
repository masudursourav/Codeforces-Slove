#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,n,sum[10000];
  int j=0;
  cin>>n;
  while(n--){
    cin>>a>>b;
    if(j==0){
    sum[j]=b-a;
    ++j;
  }
  else{
    sum[j]=sum[j-1]+(b-a);
    ++j;
  }
  }
  sort(sum,sum+j,greater<int>());
  cout<<sum[0]<<"\n";
  return 0;
}
