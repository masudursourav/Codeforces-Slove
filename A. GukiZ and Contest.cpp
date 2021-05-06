#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[100000],b[100000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b,b+n,greater<int>());
  int temp=b[0];
  int j=0;
  int c=1;
  int ck=1;
  for(int i=0;i<n;i++){
    for(int k=0;k<n;k++){
      if(a[i]==b[k]){
        if(b[k]==temp){
        cout<<c<<"\n";
        ++ck;
      }
      else{
        temp=b[k];
        cout<<ck<<"\n";
      }
      }
      else
      ++c;
    }
  }
}
