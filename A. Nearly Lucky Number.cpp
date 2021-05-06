#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  int r;
  int count=0;
  while(n>0){
    r=n%10;
    if(r==7 || r==4){
      ++count;
      n=n/10;
      continue;
    }
    n=n/10;
  }
  int c=0;
  if(count==0){
    c=1;
  }
  while(count>0){
    r=count%10;
    if(r==7 || r==4){
      count=count/10;
      continue;
    }
    else{
      c=1;
      break;
    }
    count=count/10;
  }
  if(c==1){
    cout<<"NO"<<"\n";
  }
  else{
    cout<<"YES"<<"\n";
  }
  return 0;
}
