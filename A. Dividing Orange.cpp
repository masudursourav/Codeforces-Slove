//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll n,k;
   cin>>n>>k;
   ll a[10000],b[10000];
   for(int i=0;i<k;i++){
     cin>>a[i];
     b[a[i]]=1;
   }
   int l=1;
   for(int i=0;i<k;i++){
     int c=1;
     cout<<a[i]<<" ";
     while(c<n){
       if(b[l]==0){
         ++c;
         cout<<l<<" ";
       }
       ++l;
     }
     cout<<"\n";
   }

    return 0;
}
