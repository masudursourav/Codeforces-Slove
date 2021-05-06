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
    ll t;
    cin>>t;
    while(t--){
      ll n;
      string s;
      cin>>n;
      cin>>s;
      ll c=0;
      ll mx=0;
      bool k=false;
      for(int i=0;i<n;i++){
        if(s[i]=='A'){
          k=true;
          mx=max(mx,c);
          c=0;
        }
        else{
          if(k){
            ++c;
          }
        }
      }
      cout<<max(mx,c)<<"\n";
    }

    return 0;
}
