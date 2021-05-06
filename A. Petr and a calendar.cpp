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
    ll m,d;
    ll ans=1;
    int n[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>m>>d;
    for(int i=1;i<n[m];i++){
      if(d==7){
        ++ans;
        d=1;
      }
      else{
        d++;
      }
    }
    cout<<ans<<"\n";
    return 0;
}
