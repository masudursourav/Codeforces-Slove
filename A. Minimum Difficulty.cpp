//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n+1];
    ll ans=0;
    for(int i=1;i<=n;i++){
      cin>>a[i];
      ans=max(ans,a[i]-a[i-1]);
    }
    ll num=INT_MAX;
    for(int i=3;i<=n;i++){
      num=min(num,max(ans,a[i]-a[i-2]));
    }
    cout<<num<<"\n";
    return 0;
}
