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
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        vector<ll>b(m);
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        for(int i=0;i<m;i++){
          cin>>b[i];
        }
        ll ans=1000;
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(a[i]==b[j]){
              ans=min(ans,a[i]);
            }
            else{
              ans=min(ans,a[i]*10+b[j]);
              ans=min(ans,b[j]*10+a[i]);
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
