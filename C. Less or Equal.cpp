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
    ll a[n+1];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    if(a[k]==a[k-1] && k!=0 ){
      cout<<"-1"<<"\n";
    }
    else if(k==0 && a[0]==1){
      cout<<"-1"<<"\n";
    }
    else if(k==0){
      cout<<a[0]-1<<"\n";
    }
    else{
      cout<<a[k-1]<<"\n";
    }

    return 0;
}
