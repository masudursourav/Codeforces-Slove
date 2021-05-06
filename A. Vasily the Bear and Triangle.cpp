//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
int sign(ll n){
if(n==0){
  return 0;
}
if(n>=1){
  return 1;
}
return -1;
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y;
    cin>>x>>y;
    ll t=abs(x)+abs(y);
    pair<ll,ll>f=mp(t*sign(x),0);
    pair<ll,ll>s=mp(0,t*sign(y));
    if(f.first>s.first){
      swap(f,s);
    }
    cout<<f.first<<" "<<f.second<<" "<<s.first<<" "<<s.second<<"\n";
    return 0;
}
