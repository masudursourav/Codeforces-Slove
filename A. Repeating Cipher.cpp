#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i=0;
  int g=1;
  while(n>i){
    cout<<s[i];
    i+=g;
    ++g;
  }
  cout<<"\n";
  return 0;
}
