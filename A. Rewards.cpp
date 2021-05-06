#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[3],b[3];
  cin>>a[0]>>a[1]>>a[2];
  cin>>b[0]>>b[1]>>b[2];
  int n;
  cin>>n;
  int as=a[0]+a[1]+a[2];
  int bs=b[0]+b[1]+b[2];
  int an=as/5;
  int bn=bs/10;
  if(an>=1 && as%5!=0){
    ++an;
  }
  if(bn>=1 && bs%10!=0){
    ++bn;
  }
  if(as!=0 && an==0){
    ++an;
  }
  if(bs!=0 && bn==0){
    ++bn;
  }
  int s=an+bn;
  int sf=n-s;
  int c=0;
  if((bs==0 || as==0) && sf>=0){
    c==1;
  }

  if(sf>=0 || c==1){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<"\n";
  }
  return 0;
}
