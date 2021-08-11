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
        ll o,e;
        o=(ll)n/2;
        e=(ll)n/2;
        if(n%2==1){
          ++o;
          --n;
        }
        ll ans=((n%1000000007)+((e*3)%1000000007)+((ll)((ll)n/3)/(ll)2)%1000000007)%1000000007;
        cout<<ans<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t; cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
