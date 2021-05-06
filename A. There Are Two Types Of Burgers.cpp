#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int t,b,p,f,h,c,sum;
  cin>>t;
  while(t--){
    sum=0;
    cin>>b>>p>>f;
    cin>>h>>c;
    b=b/2;
    int c1=0,c2=0;
    if(c>h){
    for(int i=1;i<=b && i<=f;i++){
      sum+=c;
    }
    b=b-f;
    c1=1;
  }
    else{
      for(int i=1;i<=b && i<=p ;i++){
        sum+=h;
      }
      b=b-p;
      c2=1;
    }
    if(c1 && b>=1){
      for(int i=1;i<=b && i<=p ;i++){
        sum+=h;
      }
    }
    else{
      for(int i=1;i<=b && i<=f;i++){
        sum+=c;
      }
    }
    cout<<sum<<"\n";
}
return 0;
}
