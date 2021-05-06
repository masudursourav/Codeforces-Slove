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
    input();
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n],c[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      c[i]=a[i];
    }
    sort(a,a+n,greater<ll>());
    ll j=0;
    ll mn=LONG_MAX;
    for(int i=0;i<k;i++){
      if(mn>a[i]){
        mn=a[i];
      }
      for(int l=0;l<n;l++){
        if(c[l]==a[i]){
          b[j]=l+1;
          ++j;
          c[l]=-1;
          break;
        }
      }
    }
    cout<<mn<<"\n";
    sort(b,b+j);
    for(int i=0;i<j;i++){
      cout<<b[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
