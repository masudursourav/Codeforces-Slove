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
    if(n<3){
      cout<<"-1"<<"\n";
    }
    else{
      for(int i=n;i>=1;i--){
        cout<<i<<" ";
      }
      cout<<"\n";
    }

    return 0;
}
