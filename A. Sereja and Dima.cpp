#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a[100000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  long long int sums=0,sumd=0;
  int i=0;
  n=n-1;
  int c=0;
  while(i<=n){
    if(c%2==0){
    if(a[n]>a[i]){
      sums+=a[n];
      n=n-1;
    }
    else{
      sums+=a[i];
      i=i+1;
    }
  }
  else{
    if(a[n]>a[i]){
      sumd+=a[n];
      n=n-1;
    }
    else{
      sumd+=a[i];
      i=i+1;
    }
  }
  ++c;
  }
  cout<<sums<<" "<<sumd<<"\n";
  return 0;
}
