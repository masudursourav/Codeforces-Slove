#include <bits/stdc++.h>
using namespace std;
int main()
{
  int h,m,n,t;
  cin>>t;
  while(t--){
    n=0;
    cin>>h>>m;
    n=h*60+m;
    cout<<1440-n<<"\n";
  }
  return 0;
}
