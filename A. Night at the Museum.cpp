#include <bits/stdc++.h>
using namespace std;
int a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int main()
{
  string s;
  cin>>s;
  int sum=0;
  int l=26;
  int x=1;
  int y=(s[0]-'a')+1;
  sum+=min(abs(x-y),l-abs(x-y));
  for(int i=0;i<s.size()-1;i++){
    int x=(s[i]-'a')+1;
    int y=(s[i+1]-'a')+1;
    sum+=min(abs(x-y),l-abs(x-y));
  }
  cout<<sum<<"\n";
}
