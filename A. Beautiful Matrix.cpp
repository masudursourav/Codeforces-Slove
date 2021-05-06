#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[6][6];
  int r=0,c=0;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>a[i][j];
      if(a[i][j]==1){
        r=(i+1),c=(j+1);
      }
    }
  }
  cout<<(abs(3-r)+abs(3-c))<<"\n";
  return 0;
}
