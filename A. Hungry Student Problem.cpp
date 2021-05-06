#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a;
  cin>>n;
  while(n--){
    cin>>a;
    while(a!=0){
    if((a<7 && a%3==0) || (a%7==0) || (a%3==0)){
      cout<<"YES"<<"\n";
      break;
    }
    else if(a<7 && a%3!=0){
      cout<<"NO"<<"\n";
      break;
    }
    a=a-7;
  }
}
return 0;
}
