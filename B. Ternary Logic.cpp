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
    ll a,c;
    cin>>a>>c;
    ll ans=0;
    ll t=1;
    while(a||c){
      ans+=(c%3-a%3+3)%3 * t;
      t*=3;
      a/=3;
      c/=3;
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
