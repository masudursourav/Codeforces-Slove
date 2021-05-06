#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a[10005]={0};
  cin>>n;
  for(int i=0;i<n;i++){
    int in;
    cin>>in;
    a[in]=a[in]+1;
  }
  int mx=0;
  int c=0;
  for(int i=0;i<10000;i++){
    if(a[i]>0){
      ++c;
    }
    if(a[i]>mx){
      mx=a[i];
    }
  }
  cout<<mx<<" "<<c<<"\n";
  return 0;
}
