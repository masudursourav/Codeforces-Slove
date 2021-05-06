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
    ll a,b,c,mx=1,n;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
        ll k=n-i*a-j*b;
        if(k>=0 && k%c==0){
          mx=max(mx,(i+j+k/c));
        }
      }
    }
    cout<<mx<<"\n";
    return 0;
}
