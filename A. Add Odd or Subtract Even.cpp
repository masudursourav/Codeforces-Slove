#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,a,b,sum;
  cin>>t;
  while(t--){
    cin>>a>>b;
    sum=0;
    if(a>b){
      sum=a-b;
      if(sum%2==0){
        cout<<"1"<<"\n";
      }
      else{
        cout<<"2"<<"\n";
      }
    }
    else if(b>a){
      sum=b-a;
      if(sum%2==0){
        cout<<"2"<<"\n";
      }
      else{
        cout<<"1"<<"\n";
      }
    }
    else{
      cout<<"0"<<"\n";
    }
  }
  return 0;
}
