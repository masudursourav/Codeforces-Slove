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

       ll t;
       cin>>t;
       while(t--){
         ll n,ans=0;cin>>n;
         vector<ll>a(n);for(int i=0;i<n;i++) cin>>a[i];
         sort(a.rbegin(),a.rend());
         for(int i=0;i<n;i++){ if(a[i]>=i+1)++ans;}
         cout<<ans<<"\n";
       }

      return 0;
}
