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
    ll n,m,l;
    cin>>n>>m>>l;
    ll res=(n*m)/__gcd(n,m);
    cout<<(ll)(l/res)<<"\n";

    return 0;
}
