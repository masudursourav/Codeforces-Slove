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
    ll c=0;
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++){
        ll s=sqrt((i*i)+(j*j));
        if(s*s==((i*i)+(j*j)) && s<=n){
          ++c;
        }
      }
    }
    cout<<c<<"\n";

    return 0;
}
