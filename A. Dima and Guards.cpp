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
    ll n,a,b,c,d;
    cin>>n;
    ll ansp,ans1=0,ans2=0,ch=0;
    for(int i=1;i<=4;i++){
      cin>>a>>b>>c>>d;
      if((min(a,b)+min(c,d))<=n){
        ansp=i;
        ans1=min(a,b);
        ans2=max((n-min(a,b)),min(c,d));
        ch=1;
      }
    }
    if(ch==0)
    cout<<"-1"<<"\n";
    else
    cout<<ansp<<" "<<ans1<<" "<<ans2<<"\n";
    return 0;
}
