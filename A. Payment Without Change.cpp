#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,n,nf,s,t;
  cin>>t;
  while(t--){
    nf=0;
    cin>>a>>b>>n>>s;
    nf=(s/n);
    if(nf<=a){
      s=s-(nf*n);
    }
    else{
      s=s-(n*a);
    }
    if(s<=b){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
 return 0;
}
