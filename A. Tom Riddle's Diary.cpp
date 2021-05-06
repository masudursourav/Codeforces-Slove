#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s,r[1000];
  for(int i=0;i<n;i++){
    cin>>s;
    r[i]=s;
    int c=0;
    for(int j=0;j<i;j++){
      if(r[j]==s){
        cout<<"YES"<<"\n";
        c=1;
        break;
      }
    }
    if(!c){
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}
