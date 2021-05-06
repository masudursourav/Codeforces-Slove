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
    ll a,b,r;
    cin>>a>>b>>r;
    r=2*r;
    a=(ll)(a/r);
    b=(ll)(b/r);
    if(min(a,b)>=1){
      cout<<"First"<<"\n";
    }
    else{
      cout<<"Second"<<"\n";
    }

    return 0;
}
