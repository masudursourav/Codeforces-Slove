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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++){
     cin>>a[i];
     b[i]=a[i];
    }
    sort(a,a+n,greater<ll>());
    ll sum=0;
    for(int i=0;i<n;i++){
      sum+=(a[i])*i+1;
    }
    cout<<sum<<"\n";
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(a[i]==b[j]){
          cout<<j+1<<" ";
          b[j]=0;
          break;
        }
      }
    }
    cout<<"\n";

    return 0;
}
