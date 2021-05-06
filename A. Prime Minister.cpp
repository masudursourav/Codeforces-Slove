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
    vector<ll>a;
    vector<ll>ans;
    ans.pb(1);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      a.pb(in);
    }
    ll sum=a[0],re=0;
    for(int i=1;i<n;i++){
      if(a[i]<=(a[0]/2)){
        ans.pb(i+1);
        sum+=a[i];
      }
      else{
        re+=a[i];
      }
    }
    if(sum>re){
      cout<<ans.size()<<"\n";
      for(auto i:ans){
        cout<<i<<" ";
      }
      cout<<"\n";
    }
    else{
      cout<<0<<"\n";
    }

    return 0;
}
