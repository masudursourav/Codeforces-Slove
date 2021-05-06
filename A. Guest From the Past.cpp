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
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    if(a<=b-c || b>n){
      cout<<(ll)(n/a)<<"\n";
    }
    else{
      ll ans=(ll)((n-c)/(b-c));
      n-=(b-c)*ans;
      ans+=(ll)n/a;
      cout<<ans<<"\n";
      }

    return 0;
}
