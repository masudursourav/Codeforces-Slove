//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
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
         ll a,b;
         cin>>a>>b;
         ll ans=LONG_MAX,at=a,bt=b;
         for(ll i=0;i<32;i++){
          ll  c=i;
           b=bt+i;
           a=at;
           if(b==1){
             ++b;
             c=1;
           }
           while(a){
             ++c;
             a/=b;
           }
           ans=min(ans,c);
         }
         cout<<ans<<"\n";
       }

      return 0;
}
