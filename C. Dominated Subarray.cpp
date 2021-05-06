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
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll ans =LLONG_MAX;
      map<ll,ll>m;
      for(int i=1;i<=n;i++){
        ll in;
        cin>>in;
        if(m[in]!=0){
          ans=min(ans,i-m[in]);
        }
        m[in]=i;
      }
      if(ans>=n){
        cout<<"-1"<<"\n";
      }
      else{
        cout<<ans+1<<"\n";
      }
    }

    return 0;
}
