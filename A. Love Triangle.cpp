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

       ll n;cin>>n;++n;
       vector<ll>a(n);for(int i=1;i<n;i++)cin>>a[i];
       for(int i=1;i<n;i++){ll x=a[i],y=a[x],z=a[y];if(i==z){cout<<"YES"<<"\n";return 0;}}
       cout<<"NO"<<"\n";

      return 0;
}
