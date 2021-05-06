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
    ll n;
    cin>>n;
    ll mx=0,mx1=0;
    for(int i=1;i*i<=n;i++){
      if(n%i==0){
        if(n/i==i){
          mx=i;mx1=i;
          break;
        }
        else{
          if(mx<i || mx1<(n/i)){
            mx=i;
            mx1=n/i;
          }
        }
      }
    }
    cout<<mx<<" "<<mx1<<"\n";

    return 0;
}
