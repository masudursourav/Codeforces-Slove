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
    ll t,x,s;
    cin>>t>>s>>x;
    x=x-t;
    if(x>=0 && (x%s)<=1 && x!=1)
    {
      cout<<"YES"<<"\n";
    }
    else{
    cout<<"NO"<<"\n";
  }
    return 0;
}
