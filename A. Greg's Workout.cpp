#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,in,sumc=0,sumbi=0,sumb=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>in;
    if(i%3==1){
      sumc+=in;
    }
    else if(i%3==2){
      sumbi+=in;
    }
    else if(i%3==0){
      sumb+=in;
    }
  }
  if(sumc>sumbi && sumc>sumb){
    cout<<"chest"<<"\n";
  }
  else if(sumbi>sumc && sumbi>sumb){
    cout<<"biceps"<<"\n";
  }
  else if(sumb>sumc && sumb>sumbi){
    cout<<"back"<<"\n";
  }
  return 0;
}
