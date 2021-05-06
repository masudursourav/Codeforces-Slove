#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=19;
  int j=0;
  while(j<=n){
    int sum=0;
    int temp=i;
    while(temp>0){
      int r=temp%10;
      int d=temp/10;
      sum=r+d;
      if(sum==10){
        break;
        ++j;
      }
    }
    ++i;
  }
  cout<<i<<"\n";
}
