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
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll k=(x*y)/__gcd(x,y);
    ll ans=(ll)(b/k)-(ll)((a-1)/k);
    cout<<ans<<"\n";

    return 0;
}
