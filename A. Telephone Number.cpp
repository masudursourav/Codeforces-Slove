#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  string s;
  cin>>t;
  while(t--){
    int p=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='8'){
        p=n-i;
        break;
      }
    }
    if(p>=11){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}
