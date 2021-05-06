#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  char c='a';
  if(n==k){
    for(int i=0;i<n;i++){
      printf("%c",c+i);
    }
    cout<<"\n";
  }
  else{
    int ch=0,kk=1;
    for(int i=0;i<n;i++){
      if(ch==0){
        printf("%c",c);
        ch=1;
      }
      else{
        printf("%c",c+kk);
        if(kk<k-1){
        ++kk;
      }
        ch=0;
      }
    }
    cout<<"\n";
  }
  return 0;
}
