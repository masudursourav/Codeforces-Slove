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
    string s;cin>>s;
    ll ans=n,mini=n,maxi=-1,one=0;
    for(ll i=1;i<=n;i++){
      if(s[i-1]=='1'){
        ++one;
        mini=min(i,mini);
        maxi=max(i,maxi);
      }
    }
    if(one){
      ans=max(2*maxi,2*(n-mini+1));
    }
    cout<<max(n+one,ans)<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t; cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
