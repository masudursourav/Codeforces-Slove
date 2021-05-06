#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,v,k,s,a[100]={0};
  cin>>n>>v;
  int num=0;
  for(int i=1;i<=n;i++)
  {
    cin>>k;
    int c=0;
    while(k--){
      cin>>s;
      if(s<v){
        a[i]=1;
        c=1;
      }
    }
    num+=c;
  }
  if(num==0){
    cout<<0<<"\n";
  }
  else{
    cout<<num<<"\n";
    for(int i=1;i<=50;i++){
      if(a[i]>0){
        cout<<i<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}
