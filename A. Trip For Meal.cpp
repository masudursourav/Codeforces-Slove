//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n;
        cin>>n;
        ll ans=0;
        ll a,b,c;cin>>a>>b>>c;
        if(n==1){
          cout<<0<<"\n";
          return;
        }
        else{
          --n;
          ans+=min(a,b);
          --n;
          if(n>0){
            ans+=n*min({a,b,c});
          }
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
