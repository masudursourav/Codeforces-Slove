#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,n;
  string s;
  cin>>a>>b>>n;
  cin>>s;
  int l=n/2;
  for(int i=0;i<n;i++){
    cout<<s[i];
    if(i+1==l){
      cout<<a*b;
    }
  }
  cout<<"\n";
  return 0;
}
