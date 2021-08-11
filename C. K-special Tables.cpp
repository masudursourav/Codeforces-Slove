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
        ll e=n*(k-1)+1;
        ll ans=n*(2*e+(n-k+1)*(n-1))/2;
        cout<<ans<<"\n";
        ll d=1;
        for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
            if(j>=k){
              cout<<e++<<" ";
            }
            else{
              cout<<d++<<" ";
            }
          }
          cout<<"\n";
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
