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

       ll t;cin>>t;
       while(t--){
         ll n;cin>>n;ll c[3]={0};
         for(int i=0;i<n;i++){
           ll in;cin>>in;
           ++c[in%3];
         }
          ll k=max(c[1]-c[0],c[2]-c[1]);
          ll ans=max(c[0]-c[2],k);
          cout<<ans<<"\n";
       }

      return 0;
}
