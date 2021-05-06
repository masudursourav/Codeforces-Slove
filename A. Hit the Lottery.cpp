#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int nn,cc=0;
  cin>>nn;
  if(nn>=100){
    cc=nn/100;
    nn=nn-(100*(nn/100));
  }
  if(nn>=20){
    cc+=nn/20;
    nn=nn-(20*(nn/20));
  }
  if(nn>=10){
    cc+=nn/10;
    nn=nn-(10*(nn/10));
  }

  if(nn>=5){
    cc+=nn/5;
    nn=nn-(5*(nn/5));
  }

  if(nn>0){
    cc+=nn;
  }
  cout<<cc<<"\n";
  return 0;
}
