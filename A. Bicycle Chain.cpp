//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll m;
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++){
      cin>>b[i];
    }
    ll c=1;
    ll mx=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(b[j]%a[i]==0){
         ll d=b[j]/a[i];
           if(d>mx){
             mx=d;
             c=1;
           }
           else if(d==mx){
             ++c;
           }
        }
      }
    }
    cout<<c<<"\n";

    return 0;
}
