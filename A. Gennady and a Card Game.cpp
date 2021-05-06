#include <bits/stdc++.h>
using namespace std;
int main()
{
  char a[2],b[2],c[2],d[2],e[2],f[2];
  cin>>a[0]>>a[1];
  cin>>b[0]>>b[1];
  cin>>c[0]>>c[1];
  cin>>d[0]>>d[1];
  cin>>e[0]>>e[1];
  cin>>f[0]>>f[1];
  if(a[0]==b[0] || a[1]==b[1] || a[0]==b[1] ||a[0]==c[0] || a[1]==c[1] || a[0]==c[1] || a[0]==d[0] || a[1]==d[1] || a[0]==d[1]
  || a[0]==e[0] || a[1]==e[1] || a[0]==e[1] ||a[0]==f[0] || a[1]==f[1] || a[0]==f[1]){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<"\n";
  }
  return 0;
}
