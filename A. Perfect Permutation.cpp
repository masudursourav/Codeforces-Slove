#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000];
  cin>>n;
  if(n%2!=0){
    cout<<"-1"<<"\n";
  }
  else{  int k=0,j=1;
  for(int i=1;i<=n;i++){
    if(i%2==0){
      a[k]=i;
      k=k+2;
    }
    else{
      a[j]=i;
      j=j+2;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i];
    if(i!=n-1){
      cout<<" ";
    }
  }
  cout<<"\n";
}
  return 0;
}
