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
        ll a[n+1]={0};
        ll mx=0;
        ll ans=1;
        for(int i=0;i<2*n;i++){
          ll in;cin>>in;
          if(a[in]==1){
            --mx;
          }
          else if(a[in]==0){
            ++mx;
            ++a[in];
          }
          ans=max(mx,ans);

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
