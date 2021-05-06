
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

  ll n,k;
  cin>>n>>k;
  vector<ll>a(n+1);
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
    ll ans=0;
  for(int i=1;i<=n;i++){
    if(a[i]){
      ll d=i-k;
      ll j=k-d;
      if(j<1 || j>n || a[i]==a[j]){
        ++ans;
      }
    }
  }

  cout<<ans<<"\n";
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
