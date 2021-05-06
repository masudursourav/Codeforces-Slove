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
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    ll q;
    cin>>q;
    while(q--){
      ll x,y;
      cin>>x>>y;
        a[x-1]+=y-1;
        a[x+1]+=a[x]-y;
        a[x]=0;
    }
    for(int i=1;i<=n;i++){
      cout<<a[i]<<"\n";
    }
    return 0;
}
