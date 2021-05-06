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
    ll a[n];
    ll l,r;
    for(int i=0;i<n;i++){
      cin>>a[i];
    if(a[i]==1){
      l=i+1;
    }
    else if(a[i]==n){
      r=i+1;
    }
    }
    cout<<max(r-1,max(l-1,max(n-r,n-l)))<<"\n";

    return 0;
}
