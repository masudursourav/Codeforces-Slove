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
        ll n,d;
        cin>>n>>d;
        ll a;cin>>a;
        ll ans=2;
        for(int i=1;i<n;i++){
         ll b;cin>>b;
         if(b-a-2*d>0) ans+=2;
         else if(b-a-2*d==0) ans+=1;
         a=b;
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
