#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int sum=0,a,p,n,min;
  cin>>n;
  cin>>a>>p;
  sum=a*p;
  min=p;
  n=n-1;
  while(n--){
    cin>>a>>p;
    if(p<min){
      min=p;
    }
    sum+=min*a;
  }
  cout<<sum<<"\n";
  return 0;
}
