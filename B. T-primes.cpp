#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a;
  scanf("%lld",&n);
  for(int i=0;i<n;i++){
    scanf("%lld",&a);
    double nd=sqrt(a);
    long long int num=sqrt(a);
    int c=0;
    for(int j=2;j*j<=num;j++){
      if(num%j==0){
        c=1;
        break;
      }
    }
    if(!c && num>=2 && nd==num){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
