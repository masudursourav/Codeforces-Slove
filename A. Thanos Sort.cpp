#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[100];
  int temp=1;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int c=1;
  int t=a[0];
  for(int i=1;i<n;i++){
    if(a[i]>=t){
      ++c;
      t=a[i];
    }
    else{
      if(c>temp){
        temp=c;
      }
      c=1;
      t=a[i];
    }
  }
  cout<<temp<<"\n";
  return 0;
}
