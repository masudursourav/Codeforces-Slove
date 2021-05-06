//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll c=0;
    for(int i=1;i<n;i++){
      if (a[i]<=a[i-1])
        {
            ll x=a[i-1]-a[i];
            c+=x/k+1;
            a[i]+=(x/k+1)*k;
        }
    }
    cout<<c<<"\n";

    return 0;
}
