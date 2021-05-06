//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
ll cal(ll a,ll b,ll c){
  return (abs(a-b)+abs(a-c)+abs(b-c));
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
      ll a,b,c;
      cin>>a>>b>>c;
      ll ans=cal(a,b,c);
      for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
          for(int k=-1;k<=1;k++){
            ll na=a+i;
            ll nb=b+j;
            ll nc=c+k;
            ans=min(ans,cal(na,nb,nc));
          }
        }
      }
      cout<<ans<<"\n";
    }

    return 0;
}
