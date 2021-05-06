#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b;
  cin>>a>>b;
  long long int r=0;
  while(b>0){
    r=r*10+b%10;
    b=b/10;
  }
  cout<<a+r<<"\n";
  return 0;
}
