#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  string s;
  int l,r;
  char c1,c2;
  cin>>n>>m;
  cin>>s;
  while(m--){
    cin>>l>>r;
    cin>>c1;
    cin>>c2;
    for(int i=l-1;i<r;i++){
      if(s[i]==c1){
        s[i]=c2;
      }
    }
  }

  cout<<s<<"\n";
  return 0;
}
