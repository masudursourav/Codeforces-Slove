//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
bool bs(ll a[],ll s,ll e,ll q){
  while(s<=e){
    ll mid=(ll)(s+e)/2;
    if(a[mid]==q){
      return true;
    }
    else if(a[mid]>q){
      e=mid-1;
    }
    else if(a[mid]<q){
      s=mid+1;
    }
  }
  return false;
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    while(t--){
      ll q;
      cin>>q;
      if(bs(a,0,n-1,q)){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }
    }

    return 0;
}
