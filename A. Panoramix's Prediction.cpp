#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int p=0;
  for(int i=n+1;i<=m;i++){
    int temp=i;
    int c=0;
    for(int j=2;j*j<=temp;j++){
      if(temp%j==0){
        c=1;
        break;
      }
    }
    if(c==0){
      p=temp;
      break;
    }
  }
  if(p==m){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<"\n";
  }
  return 0;
}
