#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,p[10000],t[10000],sum1=0,sum2=0,c;
  cin>>n>>c;
  for(int i=0;i<n;i++){
    cin>>p[i];
  }
  for(int i=0;i<n;i++){
    cin>>t[i];
  }
  int ti=0;
  for(int i=0;i<n;i++){
    ti+=t[i];
    sum1+=max(0,p[i]-(ti*c));
  }
  ti=0;
  for(int i=n-1;i>=0;i--){
    ti+=t[i];
    sum2+=max(0,p[i]-(ti*c));
  }
  if(sum1>sum2){
    cout<<"Limak"<<"\n";
  }
  else if(sum2>sum1){
    cout<<"Radewoosh"<<"\n";
  }
  else{
    cout<<"Tie"<<"\n";
  }
  return 0;
}
