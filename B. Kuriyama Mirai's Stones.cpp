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
        ll a[n+2],b[n+2];
        vector<ll>v;
        a[0]=0;
        for(int i=1;i<=n;i++){
          cin>>a[i];
          v.push_back(a[i]);
          a[i]+=a[i-1];
        }
        sort(v.begin(),v.end());
        b[0]=0;
        for(int i=1;i<=n;i++){
          b[i]=v[i-1];
          b[i]+=b[i-1];
        }
        ll q;
        cin>>q;
        while(q--){
          ll option,l,r;
          cin>>option>>l>>r;
          if(option==1){
            cout<<a[r]-a[l-1]<<"\n";
          }
          else{
            cout<<b[r]-b[l-1]<<"\n";
          }
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
