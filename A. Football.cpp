#include <bits/stdc++.h>
using namespace std;
int main()
{
  string team,win;
  int n;
  cin>>n;
  int c=0;
  while(n--){
    cin>>team;
    if(c!=0){
      if(team==win){
        ++c;
      }
      else{
        --c;
      }
    }
    else{
      win=team;
      c=1;
    }
  }
  cout<<win<<"\n";
  return 0;
}
