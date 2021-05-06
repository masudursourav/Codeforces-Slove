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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    int a[n+1];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int ans=INT_MAX;
    for(int i=1;i<n;i++){
      if(s[i]=='L' && s[i-1]=='R'){
        ans=min(ans,(a[i]-a[i-1])/2);
      }
    }
    if(ans==INT_MAX){
      cout<<"-1"<<"\n";
    }
    else{
      cout<<ans<<"\n";
    }

    return 0;
}
