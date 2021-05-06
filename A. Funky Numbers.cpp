//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
map<ll,ll>m;
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll i=0,a=1,s[100000];
    while(n>a){
      s[i]=a;
      m[a]=1;
      ++i;
      a=(i+1)*(i+2)/2;
    }
    for(i=i-1;i>=0;i--){
      if(m[n-s[i]]==1){
        cout<<"YES"<<"\n";
        return 0;
      }
    }
    cout<<"NO"<<"\n";

    return 0;
}
