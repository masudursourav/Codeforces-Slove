//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll mx=LONG_MAX;
    ll ans=0;
    for(int i=n-1;i>=0;i--){
      mx=min(mx-1,a[i]);
      mx=max(0LL,mx);
      ans+=mx;
    }
    cout<<ans<<"\n";

    return 0;
}
