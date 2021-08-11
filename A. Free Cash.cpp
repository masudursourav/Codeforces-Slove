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
    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    int c=1,ans=1;
    for(int i=0;i<n-1;i++){
      c=1;
      if(a[i].first==a[i+1].first && a[i].second==a[i+1].second){
        while(a[i].first==a[i+1].first && a[i].second==a[i+1].second && i<n-1){
          ++c;
          ++i;
        }
      }
      ans=max(ans,c);
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
