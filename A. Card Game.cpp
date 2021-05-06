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
      ll n,a,b;
      cin>>n>>a>>b;
      ll mx=0;
      ll f=false;
      for(int i=0;i<a;i++){
        ll in;
        cin>>in;
        if(in>mx){
          f=true;
          mx=in;
        }
      }
      for(int i=0;i<b;i++){
        ll in;
        cin>>in;
        if(in>mx){
          f=false;
          mx=in;
        }
      }
    if(f){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }

    }

    return 0;
}
