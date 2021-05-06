#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int r1,r2,s,v1,v2,t1,t2;
  cin>>s>>v1>>v2>>t1>>t2;
  r1=2*t1+s*v1;
  r2=2*t2+s*v2;
  if(r1<r2){
    cout<<"First"<<"\n";
  }
  else if(r2<r1){
    cout<<"Second"<<"\n";
  }
  else{
    cout<<"Friendship"<<"\n";
  }
  return 0;
}
