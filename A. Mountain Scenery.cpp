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
     ll a[2*n+1];
     for(int i=0;i<=2*n;i++){
       cin>>a[i];
     }
     for(int i=0;i<=2*n;i++){
       if(i%2==1 && k!=0 && (a[i]-1)>a[i-1] && (a[i]-1)>a[i+1]){
         a[i]=a[i]-1;
         --k;
       }
       cout<<a[i]<<" ";
     }
     cout<<"\n";
    return 0;
}
