//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){

  ll n;
  cin>>n;
  map<ll,ll>m;
  ll sum=0;
  for(int i=0;i<n;i++){
    ll a,b;cin>>a>>b;
    m.insert(mp(a,b));
    sum+=b;
  }
  ll mi;
  cin>>mi;
  for(int i=0;i<mi;i++){
    ll a,b;cin>>a>>b;
    if(m[a]){
      if(m[a]<b){
        sum-=m[a];
        m[a]=b;
        sum+=b;
      }
    }
    else{
      m.insert(mp(a,b));
      sum+=b;
    }
  }
  cout<<sum<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
