#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,b;
  cin>>n;
  int c=0;
  int temp=n;
  while(temp--){
    cin>>a>>b;
    if(a==b || a>n || b>n){
      ++c;
    }
  }
  cout<<c<<"\n";
  return 0;
}
