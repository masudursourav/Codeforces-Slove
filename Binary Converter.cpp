#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,i=0,r=0;
  char s[10000];
  scanf("%lld",&n);
  while(n!=0){
    r=n%2;
    s[i]=r+'0';
    n=n/2;
    ++i;
  }
  for(i=strlen(s)-1;i>=0;i--){
  printf("%c",s[i]);
}
 printf("\n");
  return 0;
}
