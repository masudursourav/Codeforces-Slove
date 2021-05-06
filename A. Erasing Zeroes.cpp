#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  while(n--){
    int sum=0;
    int p[1000];
    int k=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
        p[k]=i;
        ++k;
      }
    }
    int d=0;
    for(int i=1;i<k;i++){
      d=(p[i]-p[i-1]);
      if(d>1){
        sum+=d-1;
      }
    }
    cout<<sum<<"\n";
  }
}
