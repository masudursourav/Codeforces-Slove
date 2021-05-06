#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);
  int n,a,b;
  cin>>n;
  for(int i=0;i<3;i++){
    cin>>a>>b;
    if(a==n){
      n=b;
    }
    else if(n==b){
      n=a;
    }
  }
  cout<<n<<"\n";
  return 0;
}
