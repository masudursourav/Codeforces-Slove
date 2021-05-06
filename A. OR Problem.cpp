#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a,b;
  cin>>a;
  cin>>b;
  int l=a.size();
  for(int i=0;i<l;i++){
    if(a[i]=='0' && b[i]=='0'){
      cout<<"0";
    }
    else{
      cout<<"1";
    }
  }
  cout<<"\n";
  return 0;
}
