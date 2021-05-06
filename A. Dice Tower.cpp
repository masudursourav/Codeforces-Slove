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
    ll n,x;
    cin>>n>>x;
    while(n--){
      ll a,b;
      cin>>a>>b;
      if(a==x || b==x || b==7-x || a==7-x){
        cout<<"NO"<<"\n";
        return 0;
      }
    }
    cout<<"YES"<<"\n";

    return 0;
}
