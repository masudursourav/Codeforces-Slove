#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,p,q;
  cin>>t;
  int count=0;
  while(t--){
    cin>>p>>q;
    int r=q-p;
    if(r>=2){
      ++count;
    }
  }
  cout<<count<<"\n";
  return 0;
}
