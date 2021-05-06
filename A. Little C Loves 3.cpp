#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  if (n % 3 == 0 || n % 3 == 1)
            printf("1 1 %d\n",n-2);
        else
            printf("1 2 %d\n",n-3);
  return 0;

}
