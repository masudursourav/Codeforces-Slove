#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000];
  cin>>n;
  int c=1,cf=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
      ++c;
      if(c>cf){
        cf=c;
      }
    }
    else{

      c=1;
    }
  }
  cout<<cf<<"\n";
  return 0;
}
