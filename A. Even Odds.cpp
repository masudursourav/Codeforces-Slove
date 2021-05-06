#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int ri,rf,rk,rr,rn;
  long double n,r,k;
  cin>>n>>k;
  r=ceil(n/2);
  ri=r;
  rk=k;
  rn=n;
  if(k<=ri){
    rf=1+(rk-1)*2;
    cout<<rf<<"\n";
  }
  else{
    if((rk%ri)==0){
      rf=(rn/2)*2;
    }
    else
    rf=(rk%ri)*2;
    cout<<rf<<"\n";
  }
 return 0;
}
