#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s,k,r,rf;
  cin>>s;
  cin>>k;
  cin>>r;
  sort(r.begin(),r.end());
  rf=s+k;
  sort(rf.begin(),rf.end());
  if(rf==r){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<"\n";
  }
  return 0;
}
