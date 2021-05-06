//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
bool check(ll n,ll k,ll v){
  ll sum=0;
  while(v>0){
    sum+=v;
    v=v/k;
  }
  return (sum>=n);
}
void slove(){
    ll n,k;
    cin>>n>>k;
    ll ans=INT_MAX;
    ll l=1,r=n;
    while(l<=r){
      ll mid=(r-l)/2 + l;
      if(check(n,k,mid)){
        ans=min(ans,mid);
        r=mid-1;
      }
      else{
        l=mid+1;
      }
    }
    cout<<ans<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t=1;// cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
