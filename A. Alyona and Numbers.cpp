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
    ll n,m;
    cin>>n>>m;
    ll a[5]={0},b[5]={0};
    for(int i=1;i<=n;i++){
      ++a[i%5];
    }
    for(int i=1;i<=m;i++){
      ++b[i%5];
    }
    cout<<a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1]<<"\n";
    return 0;
}
