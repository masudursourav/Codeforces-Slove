#include <bits/stdc++.h>
using namespace std;
int main(){
  set<int>a;
  set<int>b;
  int n,p;
  cin>>n;
  cin>>p;
  for(int i=1;i<=p;i++){
    int in;
    cin>>in;
    b.insert(in);
  }
  int q;
  cin>>q;
  for(int i=1;i<=q;i++){
    int in;
    cin>>in;
    b.insert(in);
  }
  if(n==b.size()){
    cout<<"I become the guy."<<"\n";
  }
  else{
    cout<<"Oh, my keyboard!"<<"\n";
  }
  return 0;
}
