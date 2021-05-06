#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000];
  cin>>n;
    long long sum=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  sum=sum/2;
  sort(a,a+n,greater<int>());
  long long int c=0,ans=0;
  for(int i=0;sum>=ans;i++){
    ans+=a[i];
    ++c;
  }
 cout<<c<<"\n";
 return 0;
}
