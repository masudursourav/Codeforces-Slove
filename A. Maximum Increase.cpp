#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a;
  cin>>n;
  int c=1,cf=1;
  cin>>a;
  int temp=a;
  for(int i=1;i<n;i++){
    cin>>a;
    if(a>temp){
      ++c;
      temp=a;
      if(c>cf){
        cf=c;
      }
    }
    else{
      c=1;
      temp=a;
    }
  }
  cout<<cf<<"\n";
  return 0;
}
