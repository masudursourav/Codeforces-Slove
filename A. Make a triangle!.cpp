#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b<=c){
    cout<<(c-(a+b))+1<<"\n";
  }
  else if(a+c<=b){
    cout<<(b-(a+c))+1<<"\n";
  }
  else if(b+c<=a){
    cout<<(a-(b+c))+1<<"\n";
  }
  else{
    cout<<"0"<<"\n";
  }
  return 0;
}
