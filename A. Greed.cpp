#include <bits/stdc++.h>
using namespace std;
long long int b[1000000];
int main()
{
  long long int n,sum=0,a;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    sum+=a;
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  sort(b,b+n);
  if((b[n-1]+b[n-2])>=sum){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<"\n";
  }
  return 0;
}
