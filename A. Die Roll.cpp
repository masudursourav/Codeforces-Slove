#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int A=max(a,b);
  if(A==1){
    cout<<1<<"/"<<1<<"\n";
  }
  else if(A==2){
    cout<<5<<"/"<<6<<"\n";
  }
  else if(A==3){
    cout<<2<<"/"<<3<<"\n";
  }
  else if(A==4){
    cout<<1<<"/"<<2<<"\n";
  }
  else if(A==5){
    cout<<1<<"/"<<3<<"\n";
  }
  else if(A==6){
    cout<<1<<"/"<<6<<"\n";
  }
 return 0;
}
