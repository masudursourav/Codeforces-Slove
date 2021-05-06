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
    cin>>n;
    ll a[5]={0};
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      ++a[in];
    }
    ll ans=0;
    ans+=a[4];
    ans+=a[3];
    a[1]=a[1]-a[3];
    if(a[1]>=4){
      ans+=(ll)a[1]/4;
      a[1]=a[1]%4;
    }
    if(a[1]>=2){
      a[2]+=(ll)a[1]/2;
      a[1]=a[1]%2;
    }
    if(a[2]>=2){
      ans+=(ll)a[2]/2;
      a[2]=a[2]%2;
    }
    cout<<ans+max(a[1],a[2])<<"\n";

    return 0;
}
