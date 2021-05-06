#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<char>c;
  char a,in;
  cin>>a;
  while(a!='}'){
    cin>>in;
    if(in=='}'){
      break;
    }
    c.insert(in);
    cin>>a;
  }
  cout<<c.size()<<"\n";
}
