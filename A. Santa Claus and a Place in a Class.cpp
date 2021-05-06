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
    ll n,m,s;
    cin>>n>>m>>s;
    ll p=(ll)((s-1)/2);
    ll ans1=(ll)(p/m)+1;
    ll ans2=(ll)(p%m)+1;
    if(s%2==0){
      cout<<ans1<<" "<<ans2<<" "<<"R"<<"\n";
    }
    else{
      cout<<ans1<<" "<<ans2<<" "<<"L"<<"\n";
    }
    return 0;
}
