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
      ll s,n;
      cin>>n;
      s=0;
      for(int i=0;i<64;i++){
        if(pow(2,i)<=n){
          s=s+pow(2,i);
        }
        else{
          break;
        }
      }
      cout<<(n*(n+1)/2)-2*s<<"\n";
    }

    return 0;
}
