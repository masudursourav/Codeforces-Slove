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
         ll n, k;
       cin >> k >> n;
       ll a[10000];
       for (int i=1;i<=n*k;i++){
           cin >> a[i];
       }
       ll x=(k+1)/2 - 1;
       x = k - x;
       ll z=n*k+1;
       ll ans=0;
       while(n--){
           z-=x;
           if (z<=0) break;
           ans+=a[z];
       }
       cout << ans << endl;
     }

      return 0;
}
