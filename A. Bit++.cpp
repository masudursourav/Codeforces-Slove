#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int n;
  cin>>n;
  int c=0;
  while(n--){
    cin>>s;
    if(s=="++X" || s=="X++"){
      ++c;
    }
    else if(s=="--X" || s=="X--"){
      --c;
    }
  }
  cout<<c<<"\n";
}
