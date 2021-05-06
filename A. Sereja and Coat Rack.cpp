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
    ll n,d;
    cin>>n>>d;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    ll m;
    cin>>m;
    ll t=m;
    ll sum=0;
    for(int i=0;i<min(n,m);i++){
      sum+=a[i];
      --t;
    }
    sum=sum-(t*d);
    cout<<sum<<"\n";

    return 0;
}
