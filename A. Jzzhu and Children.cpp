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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll j=0,s;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    while(1){
      for(int i=0;i<n;i++){
        if(a[i]>0){
          s=i+1;
          a[i]=a[i]-k;
        }
        else{
          ++j;
        }
      }
      if(j==n){
        break;
      }
      else{
        j=0;
      }
    }
    cout<<s<<"\n";

    return 0;
}
