//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t;cin>>t;
       while(t--){
         ll n,k;
         cin>>n>>k;
         ll ans=0;
         while(n){
           ans+=n%k;
           n=(ll)(n/k);
           ++ans;
         }
         cout<<ans-1<<"\n";
       }

      return 0;
}
