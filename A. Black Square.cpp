#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int sum=0;
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int ar[5]={a,b,c,d};
  string s;
  cin>>s;
  int l=s.size();
  for(int i=0;i<l;i++){
    int in=s[i]-'1';
    sum+=ar[in];
  }
  cout<<sum<<"\n";
  return 0;
}
