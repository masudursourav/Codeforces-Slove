#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s,t;
  cin>>s;
  t=s;
  reverse(s.begin(),s.end());
  if(s==t){
    cout<<"palindrome"<<"\n";
  }
  else{
    cout<<"not palindrome"<<"\n";
  }
  return 0;
}
