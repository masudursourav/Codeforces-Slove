#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int d1,d2,d3,sum,sum1,sum2,sum3,x;
  cin>>d1>>d2>>d3;
  sum=2*(d1+d2);
  sum1=2*(d2+d3);
  sum2=2*(d1+d3);
  sum3=d1+d2+d3;
  x=min({sum,sum1,sum2,sum3});
  cout<<x<<"\n";
  return 0;
}
