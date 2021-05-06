#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int n;
  int c8=0;
  cin>>n;
  cin>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='8'){
      ++c8;
    }
  }
  n=n/11;
  if(c8>n){
    cout<<n<<"\n";
  }
  else if(c8<n){
    cout<<c8<<"\n";
  }
  else if(n==c8){
    cout<<c8<<"\n";
  }
  else if(c8==0){
    cout<<0<<"\n";
  }
  return 0;
}
