//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
ll powll(ll b,ll e){
  ll total=1;
  for(int i=1;i<=e;i++){
    total*=b;
  }
  return total;
}
void slove(){
        ll n;
        cin>>n;
        ll ans=0;
        for(int i=1;i<=n;i*=10){
          ans+=(n-i)+1;
        }
        cout<<ans<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
