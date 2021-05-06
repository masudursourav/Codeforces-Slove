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
    vector<ll>a(n); for(int i=0;i<n;i++) cin>>a[i];
    ll ans=0;
    for(int i=0;i<n-2;i++){
      if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
        ++ans;
        a[i+2]=0;
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
