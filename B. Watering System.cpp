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
    ll n,b,a;
    cin>>n>>b>>a;
    ll s[n];
    ll sum=0;
    for(int i=0;i<n;i++){
      cin>>s[i];
      sum+=s[i];
    }
    sort(s+1,s+n,greater<ll>());
    ll k=0;
    ll j=1;
    for(int i=0;;i++){
      ll ans=(ll)(b*s[0])/sum;
      if(ans>=a){
        cout<<k<<"\n";
        break;
      }
      else{
        ++k;
        sum=sum-s[j];
        ++j;
      }
    }

    return 0;
}
