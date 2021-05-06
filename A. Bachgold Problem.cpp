#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  if(n%2==0){
    int l=n/2;
    cout<<l<<"\n";
    for(int i=1;i<l;i++){
      cout<<"2"<<" ";
    }
    cout<<"2"<<"\n";
  }
  else{
    int l=(n-3)/2;
    cout<<l+1<<"\n";
    for(int i=1;i<=l;i++){
      cout<<"2"<<" ";
    }
    cout<<"3"<<"\n";
  }
  return 0;
}
