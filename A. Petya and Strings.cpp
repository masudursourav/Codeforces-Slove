#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  string b;
  cin>>a>>b;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] < 92) {
            a[i] += 32;
        }
        if(b[i] < 92) {
            b[i] += 32;
        }
    }
  if(a<b){
    cout<<"-1"<<"\n";
  }
  else if(a>b){
    cout<<"1"<<"\n";
  }
  else if(a==b){
    cout<<"0"<<"\n";
  }
  return 0;
}
