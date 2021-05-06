#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin>>n;
  cin>>s;
  if(n==1){
    cout<<s<<"\n";
    return 0;
  }
  cout<<1;
  for(int i=1;i<n;i++){
    if(s[i]=='0'){
      cout<<s[i];
    }
  }
  cout<<"\n";
  return 0;
}
