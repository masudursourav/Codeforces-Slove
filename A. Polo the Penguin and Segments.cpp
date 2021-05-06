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
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    while(n--){
      ll l,r;
      cin>>l>>r;
      sum+=((r-l)+1);
    }
    cout<<(k-(sum%k))%k<<"\n";

    return 0;
}
