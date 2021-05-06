#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin>>s;
  int c=1;
  for(int i=0;i<s.size();i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
      i+=2;
      if(!c){
        cout<<" ";
      }
    }
    else{
      cout<<s[i];
      c=0;
    }
  }
  cout<<"\n";
  return 0;
}
