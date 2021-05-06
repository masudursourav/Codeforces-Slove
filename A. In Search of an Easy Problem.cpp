#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,in;
  int c=0;
  cin>>n;
  while(n--){
    cin>>in;
    if(in==1){
      c=1;
    }
  }
  if(c==0){
    cout<<"EASY"<<"\n";
  }
  else{
    cout<<"HARD"<<"\n";
  }
  return 0;
}
