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
        --n;
        ll a[n];
        ll l;cin>>l;
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        ll ans=0;
        sort(a,a+n);
        while(1){
          if(a[n-1]<l){
            break;
          }
          --a[n-1];
          ++ans;
          ++l;
          sort(a,a+n);
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
