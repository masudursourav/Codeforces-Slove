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
        ll n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        ll ans=0,c=0;
        while(1){
          ll br=0,k=0;
          for(int i=0;i<n;i++){
            if(a[i]==-1){
              ++br;
            }
          }
          if(br==n){
            break;
          }
          for(int i=0;i<n;i++){
              if(c>=a[i] && a[i]>=0){
                ++c;
                k=1;
                a[i]=-1;
              }
          }
          ans+=k;
          k=0;
          for(int i=n-1;i>=0;i--){
              if(c>=a[i]&& a[i]>=0){
                ++c;
                k=1;
                a[i]=-1;
              }
          }
          ans+=k;
        }

        cout<<ans-1<<"\n";

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
