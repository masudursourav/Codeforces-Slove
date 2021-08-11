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
        vector<pair<ll,ll>>a;
        ll mx=LONG_MIN,mi=LONG_MAX;
        for(int i=0;i<n;i++){
          ll l,k;
          cin>>l>>k;
          a.pb(mp(l,k));
          if(l<mi){
            mi=l;
          }
          if(k>mx){
            mx=k;
          }
        }
       for(int i=0;i<n;i++){
         if(a[i].first==mi && a[i].second==mx){
           cout<<i+1<<"\n";
           return;
         }
       }
       cout<<-1<<"\n";
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
