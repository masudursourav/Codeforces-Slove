#include <bits/stdc++.h>
using namespace std;
void printnum(int n,int c){
  if(n>=c){
    cout<<c<<"\n";
    ++c;
    printnum(n,c);
  }
  else
  return;
}
int main()
{
  int n,c=1;
  cin>>n;
  printnum(n,c);
  return 0;
}
