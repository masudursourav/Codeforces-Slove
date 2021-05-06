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
  ll n,m;
  cin>>n>>m;
  ll a[1000][1000];
  ll ans=LONG_MIN;
  for(int i=0;i<n;i++){
    ll temp=LONG_MAX;
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      temp=min(temp,a[i][j]);
    }
    ans=max(ans,temp);
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
