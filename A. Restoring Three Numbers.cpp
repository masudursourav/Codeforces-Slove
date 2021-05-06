#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5];
  long long int c,b,a,d;
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
  sort(arr,arr+4);
  a=arr[3]-arr[2];
  b=arr[3]-arr[1];
  c=arr[3]-arr[0];
  cout<<a<<" "<<b<<" "<<c<<"\n";
  return 0;
}
