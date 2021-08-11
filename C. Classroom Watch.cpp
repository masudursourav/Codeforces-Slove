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
        vector<ll>ans;
        for(ll i=n-81;i<=n;i++){
          ll k=i,m=i;
          while(m){
            k+=m%10;
            m/=10;
          }
          if(k==n){
            ans.pb(i);
          }
        }
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
        }
        cout<<"\n";

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
