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

       ll n,k;cin>>n>>k;
       vector<ll>a(n);
       for(int i=0;i<n;i++)cin>>a[i];
       ll ans;
       sort(a.begin(),a.end());
       cout<<a[n-k]<<"\n";

      return 0;
}
