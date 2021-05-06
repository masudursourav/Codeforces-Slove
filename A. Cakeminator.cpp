#include <bits/stdc++.h>
using namespace std;
int main()
{
  char a[100][100];
  int r,c;
  cin>>r>>c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>a[i][j];
    }
  }
  int numr=0,numc=0;

    int cn=0;
  for(int i=0;i<c;i++){
    int ch=0;
    for(int j=0;j<r;j++){
      if(a[j][i]!='.'){
        ch=1;
        break;
      }
    }
    if(ch==0){
      numc+=r;
      ++cn;
    }
  }

  for(int i=0;i<r;i++){
    int ch=0;
    for(int j=0;j<c;j++){
      if(a[i][j]!='.'){
        ch=1;
        break;
      }
    }
    if(ch==0){
      numr+=c;
      numr-=cn;
    }
  }

  cout<<numr+numc<<"\n";
  return 0;
}
