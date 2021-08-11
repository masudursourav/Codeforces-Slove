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
        ll n,k;
        cin>>n>>k;
        ll a[26]={0};
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++) ++a[s[i]-'A'];
        sort(a,a+26,greater<ll>());
        ll ans=0;
        for(int i=0;i<26;i++){
          ans+=(min(k,a[i]))*(min(k,a[i]));
          k=max(0LL,k-a[i]);
        }
        cout<<ans<<"\n";


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
