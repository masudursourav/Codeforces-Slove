#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,s;
  cin>>n>>s;
  int j=1;
  int r=0;
  while(j<=s){
    r=n%10;
    if(r==0){
      n=n/10;
    }
    else if(r>0){
      n=n-1;
    }
    j++;
  }
  cout<<n<<"\n";
  return 0;
}
