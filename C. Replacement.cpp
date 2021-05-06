#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int a[5];
  a[0]=1;
  cin>>a[1]>>a[2]>>a[3]>>a[4];
  sort(a,a+5);
  int sum=0;
  for(int i=0;i<4;i++){
    sum=sum+a[i];
  }
  cout<<sum<<"\n";
  return 0;
}
