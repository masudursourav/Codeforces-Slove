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
    ll t;
    cin>>t;
    while(t--){
      ll x;
      cin>>x;
      if((360%(180-x))){
        cout<<"NO"<<"\n";
      }
      else{
        cout<<"YES"<<"\n";
      }
    }

    return 0;
}
