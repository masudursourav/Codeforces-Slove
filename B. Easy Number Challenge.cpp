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
        ll a,b,c;
        ll ans=0;
        vector<ll>d(1000001,0);
        for(int i=1;i<1000001;i++){
          for(int j=i;j<1000001;j+=i){
            ++d[j];
          }
        }
        cin>>a>>b>>c;
        for(int i=1;i<=a;i++){
          for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
              ll n=i*j*k;
              ans+=d[n];
            }
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
