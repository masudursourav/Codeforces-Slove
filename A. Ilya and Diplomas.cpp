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
        ll n,a,b,c,d,e,f;
        cin>>n>>a>>b>>c>>d>>e>>f;
        ll k=min(b,n-c-e);
        n-=k;
        ll m=min(d,n-e);
        cout<<k<<" "<<m<<" "<<n-m<<"\n";

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
