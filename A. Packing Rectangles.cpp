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
    ll a,b,n;
    cin>>a>>b>>n;
    ll i=max(a,b);
    ll k=2;
    while(1){
      ll x=(i/a);
      ll y=(i/b);
      if(x*y>=n){
        break;
      }
      i=pow(i,);
    }
    cout<<i<<"\n";

    return 0;
}
