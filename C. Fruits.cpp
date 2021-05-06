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
    ll n,m;
    cin>>n>>m;
    ll a[n];
    string s[m];
    ll b[n];
    map<string,ll>mp;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<m;i++){
      cin>>s[i];
      if(mp.count(s[i])){
        mp[s[i]]=mp[s[i]]+1;
      }
      else{
        mp[s[i]]=1;
      }
    }
    ll j=0;
    for(auto x:mp){
      b[j]=x.second;
      ++j;
    }
    sort(a,a+n);
    sort(b,b+j,greater<ll>());
    ll mn=0;
    for(int i=0;i<j;i++){
      mn+=a[i]*b[i];
    }
    sort(a,a+n,greater<ll>());
    ll mx=0;
    for(int i=0;i<j;i++){
      mx+=a[i]*b[i];
    }
    cout<<mn<<" "<<mx<<"\n";

    return 0;
}
