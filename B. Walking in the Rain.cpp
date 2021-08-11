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
        ll n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        ll ans1=min(a[0],a[n-1]);
        for(int i=0;i<n-1;i++){
          ll mx=max(a[i],a[i+1]);
          if(mx<ans1){
            ans1=mx;
          }
        }
      cout<<ans1<<"\n";
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
