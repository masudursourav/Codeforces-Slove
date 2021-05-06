#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c;
  cin>>a>>b>>c;
  if(a==b && b==c){
    cout<<a+b+2*c<<"\n";
  }
  else if(a>b){
    cout<<(b+1)+b+2*c<<"\n";
  }
  else if(a<b){
    cout<<a+(a+1)+2*c<<"\n";
  }
  else{
    cout<<a+b+2*c<<"\n";
  }
  return 0;
}
