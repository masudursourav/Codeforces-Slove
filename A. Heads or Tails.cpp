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
    set<pair<ll,ll>>s;
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    for(int i=a;i<=x;i++){
      for(int j=b;j<=y;j++){
        if(i>j)
        s.insert(mp(i,j));
      }
    }
    cout<<s.size()<<"\n";
        for(auto i:s){
      cout<<i.first<<" "<<i.second<<"\n";
    }


    return 0;
}
