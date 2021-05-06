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
    ll t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<ll>());
    for(int i=0;i<n && k>0;i++){
      for(int j=0;j<n;j++){
        if(a[i]<b[j]){
          a[i]=b[j];
          b[j]=0;
          --k;
          break;
        }
      }
    }
    ll sum=0;
    for(int i=0;i<n;i++){
      sum+=a[i];
    }
    cout<<sum<<"\n";
  }

    return 0;
}
