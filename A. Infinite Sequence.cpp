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
    ll a,b,c;
    cin>>a>>b>>c;
    if(c==0){
      if(a==b){
        cout<<"YES"<<"\n";
        return 0;
      }
      else{
        cout<<"NO"<<"\n";
        return 0;
      }
    }
    if((b-a)%c==0 && (b-a)/c>=0){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }

    return 0;
}
