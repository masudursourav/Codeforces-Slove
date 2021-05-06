#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin>>n;
  cin>>s;
  int c=0,a[101]={0},k=0;
  for(int i=0;i<n;i++){
    if(s[i]=='B'){
      ++c;
      int j=i;
      for(j=i;j<n;j++){
        if(s[j]=='W'){
          break;
        }
        else
        a[k]=a[k]+1;
      }
      ++k;
      i=j;
    }
  }
  cout<<c<<"\n";
  for(int i=0;i<k;i++){
    cout<<a[i]<<" ";
    if(i==k-1){
      cout<<"\n";
    }
  }
  return 0;
}
