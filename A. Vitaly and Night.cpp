#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a,b;
  cin>>n>>m;
  int c=0;
  while(n--){
    for(int i=0;i<m;i++){
      cin>>a>>b;
      if(a==1 || b==1){
        ++c;
      }
    }
  }
  cout<<c<<"\n";
  return 0;
}
