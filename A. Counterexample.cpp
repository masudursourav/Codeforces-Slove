#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int l,r;
  cin>>l>>r;
  if(l%2!=0){
    ++l;
  }
  if(l+2>r){
    cout<<"-1"<<"\n";
  }
  else{
    cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
  }
  return 0;
}
