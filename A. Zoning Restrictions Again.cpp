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
    ll n,mx,r;
    cin>>n>>mx>>r;
    ll a[r],b[r],c[r];
    for(int i=0;i<r;i++){
      cin>>a[i]>>b[i]>>c[i];
    }
    ll sum=0;
    for(int i=1;i<=n;i++){
      bool k=true;
      ll ans=LONG_MAX;
      for(int j=0;j<r;j++){
        if(a[j]<=i && i<=b[j]){
          ans=min(ans,(c[j]*c[j]));
          k=false;
        }
      }
      if(k){
        sum+=mx*mx;
      }
      else{
        sum+=ans;
      }
    }
    cout<<sum<<"\n";
    return 0;
}
