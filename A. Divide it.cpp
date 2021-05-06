#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,c,ch,t;
  cin>>t;
  while(t--){
    cin>>n;
    c=0,ch=0;
    while(n>1){
      if(n%2==0 || n%3==0 || n%5==0){
        ++c;
        if(n%2==0){
          n=n/2;
        }
        else if(n%3==0){
          n=(2*n)/3;
        }
        else if(n%5==0){
          n=(4*n)/5;
        }
      }
      else{
        ch=1;
        break;
      }
    }
    if(!ch){
      cout<<c<<"\n";
    }
    else{
      cout<<"-1"<<"\n";
    }
  }
  return 0;
}
