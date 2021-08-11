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
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        cout<<a[n-1]-a[0]<<" ";
        if(a[n-1]-a[0]==0){
          cout<<((n-1)*n)/2<<"\n";
        }
        else{
          ll c1=0,c2=0;
          for(int i=0;i<n;i++){
            if(a[0]==a[i]){
              ++c1;
            }
            else{
              break;
            }
          }
          for(int i=n-1;i>=0;i--){
            if(a[n-1]==a[i]){
              ++c2;
            }
            else{
              break;
            }
          }
          cout<<c1*c2<<"\n";
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
