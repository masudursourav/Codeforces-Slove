#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[5];
  for(int i=n+1;;i++){
    int temp=i;
    int j=0;
    while(temp>0){
      int r=temp%10;
      a[j]=r;
      ++j;
      temp=temp/10;
    }
    sort(a,a+4);
    if(a[0]!=a[1] && a[2]!=a[3] && a[1]!=a[2]){
      cout<<i<<"\n";
      break;
    }
  }
  return 0;
}
