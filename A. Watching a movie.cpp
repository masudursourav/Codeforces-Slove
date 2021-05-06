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
    ll n,x;
    ll l,r;
    ll sum=0;
    cin>>n>>x;
    ll k=1;
    while(n--){
      l=0;r=0;
      cin>>l>>r;
      while((k+x)<=l){
        k=k+x;
      }
      if(k>l){
        k=(k-x);
      }
      sum+=((r-k)+1);
      k=r+1;
    }
    cout<<sum<<"\n";
    return 0;
}
