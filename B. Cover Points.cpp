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
    ll ans=0;
    cin>>n;
    while(n--){
      ll x,y;
      cin>>x>>y;
      ans=max(ans,(x+y));
    }
    cout<<ans<<"\n";

    return 0;
}
