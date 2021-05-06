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
    ll ans=0;
    for(int i=k;i<=n;i++){
      ans+=3;
    }
    for(int i=k-1;i>0;i--){
      ans+=3;
    }
    if(k!=n && k!=1){
      ans+=min(k-1,n-k);
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
