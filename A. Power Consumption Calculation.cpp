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
        ll n,p1,p2,p3,t1,t2;
        cin>>n>>p1>>p2>>p3>>t1>>t2;
        ll l,r;
        cin>>l>>r;
        ll ans=(r-l)*p1;
        for(int i=1;i<n;i++){
          ll x,y;cin>>x>>y;
          ans+=(y-x)*p1;
          ans+=min(x-r,t1)*p1;
          ans+=max(0LL,min(x-r-t1,t2))*p2;
          ans+=max(0LL,x-r-t1-t2)*p3;
          l=x;
          r=y;
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
