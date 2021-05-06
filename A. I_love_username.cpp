#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,p,max,min,c=0;
  cin>>n>>p;
  max=p;
  min=p;
  while(--n){
    cin>>p;
    if(p>max){
      ++c;
      max=p;
    }
    if(p<min){
      ++c;
      min=p;
    }
  }
  cout<<c<<"\n";
}
