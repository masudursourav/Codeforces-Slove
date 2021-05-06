#include <bits/stdc++.h>
using namespace std;
int Print(int n){
  for(int i=1;i<=n;i++){
    cout<<i;
    if(i!=n){
      cout<<" ";
    }
  }
}
int main(){
  int n;
  cin>>n;
  Print(n);
  cout<<"\n";
  return 0;
}
