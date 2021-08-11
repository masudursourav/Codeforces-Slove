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
        set<ll>s;
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(i>=(k-1)){
            s.insert(a[i]);
          }
        }
        if(s.size()==1){
          ll ans=0;
          for(int i=n-1;i>=0;i--){
            if(a[k-1]==a[i]){
              ++ans;
            }
            else{
              break;
            }
          }
          cout<<n-ans<<"\n";
        }
        else{
          cout<<-1<<"\n";
        }

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
