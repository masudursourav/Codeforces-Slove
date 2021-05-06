#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,k,r;
   cin>>n>>k;
   r=n/k;
   if(r%2==0){
     cout<<"NO"<<"\n";
   }
   else{
     cout<<"YES"<<"\n";
   }
   return 0;
}
