#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  if(n%2==0){
    cout<<n-8<<" "<<8<<"\n";
  }
  else{
    cout<<n-9<<" "<<9<<"\n";
  }
  return 0;
}
