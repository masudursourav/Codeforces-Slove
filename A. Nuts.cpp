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
    ll k,a,b,v;
    cin>>k>>a>>b>>v;
    ll c=0;
    while(a>0){
      a-=max(min(k,(ll)b+1),(ll)1)*v;
      b-=(k-1);
      ++c;
    }
    cout<<c<<"\n";

    return 0;
}
