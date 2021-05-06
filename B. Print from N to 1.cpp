#include <bits/stdc++.h>
using namespace std;
void printnum(int n){
  if(n>=1){
    cout<<n;
    --n;
    if(n>0){
      cout<<" ";
    }
    if(n==0){
      cout<<"\n";
    }
    printnum(n);
  }
  else
  return;
}
int main()
{
  int n;
  cin>>n;
  printnum(n);
  return 0;
}
