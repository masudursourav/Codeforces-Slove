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
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      sum+=in;
    }
    ll c=0;
    for(ll i=sum+1;i<=sum+5;i++){
      if(((i-1)%(n+1))==0){
        ++c;
      }
    }
    cout<<5-c<<"\n";

    return 0;
}
