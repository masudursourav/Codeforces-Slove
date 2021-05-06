#include <bits/stdc++.h>
using namespace std;
string s,s1;
void sol(){
  cin>>s>>s1;
  string r,r1;
  r=s;
  r1=s1;
  sort(s.begin(),s.end());
  sort(s1.begin(),s1.end());
  if(s>s1)
    cout<<r<<"\n";
    else{
      cout<<r1<<"\n";
    }
}
int main(){
  sol();
  return 0;
}
