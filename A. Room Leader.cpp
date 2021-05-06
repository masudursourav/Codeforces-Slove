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
    ll n;
    cin>>n;
    string ans;
    ll mx=LONG_MIN;
    while(n--){
      string s;
      ll p,m,a,b,c,d,e;
      cin>>s>>p>>m>>a>>b>>c>>d>>e;
      ll sum=(a+b+c+d+e)+(100*p)-(50*m);
      if(sum>mx){
        mx=sum;
        ans=s;
      }
    }
    cout<<ans<<"\n";

    return 0;
}
