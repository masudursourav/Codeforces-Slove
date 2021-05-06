#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,r=0,r1=0;
  cin>>a>>b;
  if(a>=b){
    r=a-b;
    r1=((a+b)-r)/2;
  }
  else if(b>=a){
    r=b-a;
    r1=((a+b)-r)/2;
  }
 cout<<r1<<" "<<r/2<<"\n";
 return 0;
}
