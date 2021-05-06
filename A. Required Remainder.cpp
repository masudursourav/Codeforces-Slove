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
    ll t,x,y,n;
    cin>>t;
    while(t--){
      cin>>x>>y>>n;
      ll ans=(((ll)(n/x))*x)+y;
      if(ans>n){
        ans=((((ll)(n/x))-1)*x)+y;
      }
      cout<<ans<<"\n";
    }

    return 0;
}
