//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    ll h,m;
    cin>>x;
    cin>>h>>m;
    ll k=h*60 + m;
    for(int i=0;;i++){
      ll h1=(ll)k/60;
      ll m1=k%60;
      if((ll)(h1/10)==7 || h1%10==7 || (ll)(m1/10)==7 || m1%10==7){
        cout<<i<<"\n";
        break;
      }
      k=((k-x)+1440)%1440;
    }

    return 0;
}
