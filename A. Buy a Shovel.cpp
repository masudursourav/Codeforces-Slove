#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int k,r,sum=0;
  cin>>k>>r;
  int temp=0;
  for(int i=1;;i++){
    sum=k*i;
    if(sum%10==0 || sum%10==r){
      temp=i;
      break;
    }
  }
  cout<<temp<<"\n";
  return 0;
}
