#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int a,b,c;
  int count=0,ce=0;
  cin>>t;
  while(t--){
    count=0;
    cin>>a>>b>>c;
    if(a==1){
      ++count;
    }
    if(b==1){
      ++count;
    }
    if(c==1){
      ++count;
    }
    if(count>=2){
      ++ce;
    }
  }
  cout<<ce<<"\n";
  return 0;
}
