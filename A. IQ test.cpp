#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
  int n;
  cin>>n;
  int e=0,o=0,en=0,on=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){
      ++e;
      en=a[i];
    }
    else{
      ++o;
      on=a[i];
    }
  }
  int p=0;
  if(e==1){
    for(int i=0;i<n;i++){
      if(a[i]==en){
      p=i+1;
      break;
      }
    }
  }
  else{
    for(int i=0;i<n;i++){
      if(a[i]==on){
      p=i+1;
      break;
      }
    }
  }
  cout<<p<<"\n";
  return 0;
}
