#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,sum1=0,sum2=0,t,t2;
  cin>>t;
  t2=t;
  while(t--){
    cin>>a;
    sum1+=a;
  }
  while(t2--){
    cin>>b;
    sum2+=b;
  }
  if(sum1>=sum2){
    cout<<"Yes"<<"\n";
  }
  else{
    cout<<"No"<<"\n";
  }
  return 0;

}
