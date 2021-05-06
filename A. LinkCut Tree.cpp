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
    ll l, r, k;
   cin >> l >> r >> k;
   vector<ll> ans;
   for (ll i=0;i<61;i++) {
       ll x=pow(k,i);
       if (l<=x&&x<=r)
       ans.push_back(x);
   }
   if (ans.size() == 0)
       cout << "-1\n";
   else {
       for (auto i : ans) cout << i << " ";
       cout << "\n";
   }

    return 0;
}
