#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0,cf=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='x'){
      ++c;
      if(c>=3){
        ++cf;
      }
    }
    else{
      c=0;
    }
  }
  cout<<cf<<"\n";
  return 0;
}
