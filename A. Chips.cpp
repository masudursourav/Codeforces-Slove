#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k;
  int i=1;
  cin>>k>>n;
  while(n!=0){
    n-=i;
    ++i;
    if(i>k){
      i=1;
    }
    if(i>n){
      break;
    }
  }
  cout<<n<<"\n";
  return 0;
}
