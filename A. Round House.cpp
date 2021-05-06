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
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans=((a+b)%n+n)%n;
    if(ans){
      cout<<ans<<"\n";
    }
    else{
      cout<<n<<"\n";
    }
    return 0;
}
