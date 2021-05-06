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
    ll m[5];
    ll x[5]={500, 1000, 1500, 2000, 2500};
    for(int i=0;i<5;i++){
      cin>>m[i];
    }
    ll w[5];
    for(int i=0;i<5;i++){
      cin>>w[i];
    }
    ll h1,h2;
    cin>>h1>>h2;
    ll sum=0;
    for(int i=0;i<5;i++){
      ll f=(3*x[i])/10;
      ll l=(x[i]-((x[i]*m[i])/250))-(50*w[i]);
      sum+=max(f,l);
    }
    cout<<sum+((h1*100)-(h2*50))<<"\n";

    return 0;
}
