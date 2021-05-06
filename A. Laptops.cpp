#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,a,b,x,y,c=0;
  cin>>t;
  while(t--){
    cin>>x>>y;
    if(x!=y){
      cout<<"Happy Alex"<<"\n";
      return 0;
    }
  }
  cout<<"Poor Alex"<<"\n";
  return 0;
}
