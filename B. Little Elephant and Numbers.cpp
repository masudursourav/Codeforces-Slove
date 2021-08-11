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
        ll a[10]={0};
        ll temp=n;
        while(temp){
          ++a[temp%10];
          temp/=10;
        }
        ll ans=0;
        for(int i=1;i*i<=n;i++){
          if(n%i==0){
            if(n/i==i){
              ll k=n/i;
              while(k){
                if(a[k%10]>0){
                  ++ans;
                  break;
                }
                k/=10;
              }
            }
            else{
              ll k=i;
              ll l=n/i;
              while(k){
                if(a[k%10]>0){
                  ++ans;
                  break;
                }
                k/=10;
              }
              while(l){
                if(a[l%10]>0){
                  ++ans;
                  break;
                }
                l/=10;
              }
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
