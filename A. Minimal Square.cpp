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
    ll t;
    cin>>t;
    while(t--){
      ll a,b;
      cin>>a>>b;
      ll k=max(2*a,b);
      ll l=max(2*b,a);
      ll ans=min(k,l);
      ans*=ans;
      cout<<ans<<"\n";
    }

    return 0;
}
