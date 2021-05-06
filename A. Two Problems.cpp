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
    ll x,t,a,b,d1,d2;
    cin>>x>>t>>a>>b>>d1>>d2;
    map<ll,ll>m;
    m[0]=1;
    for(int i=0;i<t;i++){
      m[(a-(i*d1))]=1;
      for(int j=0;j<t;j++){
        m[(b-(j*d2))]=1;
        m[(a-(i*d1))+(b-(j*d2))]=1;
      }
    }
    if(m[x]==1){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
    return 0;
}
