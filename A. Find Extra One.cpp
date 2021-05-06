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
    ll x,y;
    cin>>n;
    ll c=0,d=0;
    while(n--){
      cin>>x>>y;
      if(x>0){
        ++c;
      }
      else if(x<0){
        ++d;
      }
    }
    if(c<2 || d<2){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }

    return 0;
}
