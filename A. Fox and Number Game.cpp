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
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int c=1;
    while(1){
      sort(a,a+n);
      for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i]){
          a[i+1]=a[i+1]-a[i];
        }
        else{
          ++c;
        }
      }
      if(c==n){
        break;
      }
      else{
        c=1;
      }
    }
    ll sum=0;
    for(int i=0;i<n;i++){
      sum+=a[i];
    }
    cout<<sum<<"\n";
    return 0;
}
