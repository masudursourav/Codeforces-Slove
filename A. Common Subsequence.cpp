//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
      ll n,m;
      cin>>n>>m;
      ll a[n];
      ll k=false;
      ll s;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<m;i++){
        ll in;
        cin>>in;
        if(k==false){
        for(int i=0;i<n;i++){
          if(in==a[i]){
            k=true;
            s=a[i];
            break;
          }
        }
      }
      }
     if(k){
       cout<<"YES"<<"\n";
       cout<<1<<" "<<s<<"\n";
     }
     else{
       cout<<"NO"<<"\n";
     }
    }

    return 0;
}
