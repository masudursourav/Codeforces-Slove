#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[100000],b[10000],c=0,s=1,temp,j=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
      ++c;
      if(c>1){
      b[j]=s;
      ++j;
    }
      s=1;
    }
    else{
      s=s+1;
    }

  }
  b[j]=s;
  ++j;
  cout<<c<<"\n";
  for(int i=0;i<j;i++){
    cout<<b[i];
    if(i!=j-1){
      cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
