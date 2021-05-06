#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[10000]={0};
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int in;
       cin>>in;
       a[in]=a[in]+1;
   }
   for(int i=0;i<=1000;i++){
       if(n%2==0){
       if(a[i]>n/2){
           cout<<"NO"<<"\n";
           return 0;
       }
   }
       else{
        if(a[i]>(n+1)/2){
           cout<<"NO"<<"\n";
           return 0;
       }
   }
   }
   cout<<"YES"<<"\n";
   return 0;
}
