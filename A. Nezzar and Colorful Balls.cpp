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
         ll n;
         cin>>n;
         vector<ll>v(n,0);
         ll mx=LONG_MIN;
         for(int i=0;i<n;i++){
           ll in;
           cin>>in;
           ++v[in];
           if(v[in]>mx){
             mx=v[in];
           }
         }
         cout<<mx<<"\n";
       }

      return 0;
}
