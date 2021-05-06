#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int count=0;
  cin>>n;
  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
      if(n/i==i){
        ++count;
      }
      else{
        count=count+2;
      }
    }
  }
  cout<<count-1<<"\n";
  return 0;
}
