#include <bits/stdc++.h>
using namespace std;
bool pal(int n){
  string s,r;
  if(n==0){
    return false;
  }
  int c=0;
  while(n>0){
    c=n%2;
    s+=c+'0';
    n=n/2;
  }
  r=s;
  reverse(s.begin(),s.end());
  if(s==r){
    return true;
  }
  else{
    return false;
  }
}
int main()
{
  int n;
  cin>>n;
  if(pal(n)){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<"\n";
  }
}
