#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a[10000],b[3],p[10000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[a[i]-1]+=1;
  }
  sort(b,b+3);
  cout<<b[0]<<"\n";
  for(int i=0;i<b[0];i++){
    for(int j=0;j<n;j++){
      if(a[j]==1){
        cout<<j+1<<" ";
        a[j]=0;
        break;
      }
    }
      for(int j=0;j<n;j++){
        if(a[j]==2){
          cout<<j+1<<" ";
          a[j]=0;
          break;
        }
      }
        for(int j=0;j<n;j++){
          if(a[j]==3){
            cout<<j+1<<"\n";
            a[j]=0;
            break;
          }
        }
    }
    return 0;
  }
