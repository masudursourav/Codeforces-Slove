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
    ll a,b;
    cin>>a>>b;
    ll c=0;
    while(a!=0 && b!=0){
      if(a>=b){
        c+=(a/b);
        a=a%b;
      }
      else{
        c+=(b/a);
        b=b%a;
      }
    }
    cout<<c<<"\n";

    return 0;
}
