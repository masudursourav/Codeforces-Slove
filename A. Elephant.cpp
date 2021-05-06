#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,r;
  cin>>n;
  int count=0;
  while(n!=0){
    if(n>=5){
      count++;
      n=n-5;
    }
    else if(n>=4){
      count++;
      n=n-4;
    }
    else if(n>=3){
      count++;
      n=n-3;
    }
    else if(n>=2){
      count++;
      n=n-2;
    }
    else if(n>0){
      ++count;
      n=n-1;
    }
  }
  cout<<count<<"\n";
  return 0;
}
