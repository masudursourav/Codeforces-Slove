#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int c=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(i%2==0){
        cout<<"#";
      }
      else{
        if(c==0){
          if(j!=m-1)
          cout<<".";
          else{
            cout<<"#";
            c=1;
          }
        }
        else{
          if(j==0)
          cout<<"#";
          else{
            cout<<".";
            if(j==m-1)
            c=0;
          }
        }
      }
    }
    cout<<"\n";
  }
  return 0;
}
