#include <bits/stdc++.h>
using namespace std;
int main()
{
  int sum,n,a[10000],tomas;
  cin>>n;
  for(int i=0;i<n;i++){
    int in;
    sum=0;
    for(int j=0;j<4;j++){
      cin>>in;
      sum+=in;
    }
    a[i]=sum;
  }
  tomas=a[0];
  sort(a,a+n,greater<int>());
  int j=0;
  for(int i=0;i<n;i++){
    if(a[i]==tomas){
      j=i+1;
      break;
    }
  }
  cout<<j<<"\n";
  return 0;
}
