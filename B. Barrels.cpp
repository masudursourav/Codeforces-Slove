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
         ll n,k;
         cin>>n>>k;
         vector<ll>v(n);
         for(int i=0;i<n;i++){
           cin>>v[i];
         }
         sort(v.rbegin(),v.rend());
         ll sum=v[0];
         for(int i=1;i<=k;i++){
           sum+=v[i];
         }
         cout<<sum<<"\n";
       }

      return 0;
}
