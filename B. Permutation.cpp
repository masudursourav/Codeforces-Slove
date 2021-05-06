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
    ll n;
    cin>>n;
    set<ll>s;
    for(int i=0;i<n;i++){
      ll a;
      cin>>a;
      s.insert(a);
    }
    ll c=0;
    for(int i=1;i<=n;i++){
      if(s.find(i)==s.end()){
        ++c;
      }
    }
   cout<<c<<"\n";

    return 0;
}
