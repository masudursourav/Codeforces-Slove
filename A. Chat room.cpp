#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s="hello";
  string k;
  cin>>k;
  int c=0;
  for(int i=0;i<k.size();i++){
    if(s[c]==k[i]){
      ++c;
    }
    if(c>=s.size()){
      cout<<"YES"<<"\n";
      return 0;
    }
  }
  cout<<"NO"<<"\n";
  return 0;
}
