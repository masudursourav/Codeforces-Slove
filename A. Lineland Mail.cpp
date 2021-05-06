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
    ll a[n+3];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    a[0]=a[2];
    a[n+1]=a[n-1];
    for(int i=1;i<=n;i++){
      cout<<min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]))<<" "<<max(a[i]-a[1],a[n]-a[i])<<"\n";
    }

    return 0;
}
