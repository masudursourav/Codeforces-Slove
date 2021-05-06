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
    cout<<(n+m)-1<<"\n";
    for(int i=1;i<=m;i++){
      cout<<1<<" "<<i<<"\n";
    }
    for(int i=2;i<=n;i++){
      cout<<i<<" "<<1<<"\n";
    }

    return 0;
}
