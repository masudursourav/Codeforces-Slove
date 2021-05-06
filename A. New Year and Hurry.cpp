#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int sum=k,temp;
  for(int i=1;i<=n;i++){
    sum+=i*5;
    if(sum>240){
      temp=i-1;
      break;
    }
    else{
      temp=i;
    }
  }
  cout<<temp<<"\n";
  return 0;
}
