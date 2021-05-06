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
    ll n,t;
    cin>>n>>t;
    vector<ll>v;
    vector<ll>::iterator it;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      v.pb(in);
    }
    while(t--){
      ll q;
      cin>>q;
      it=upper_bound(v.begin(),v.end(),q);
      cout<<it-v.begin()<<"\n";
    }

    return 0;
}
