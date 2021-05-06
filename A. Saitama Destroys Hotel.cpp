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
    int n,mx=0,f,t,k;
    cin>>n>>k;
    while(n--){
      cin>>f>>t;
      mx=max(mx,(f+t));
    }
    cout<<max(mx,k)<<"\n";

    return 0;
}
