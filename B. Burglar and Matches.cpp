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
    ll n,m;
    cin>>n>>m;
    pair<ll,ll>a[m];
    ll b[m];
    for(int i=0;i<m;i++){
      cin>>a[i].first>>a[i].second;
      b[i]=a[i].second;
    }
    sort(b,b+m,greater<ll>());
    ll sum=0;
    ll k=0;
    int ch=0;
    while(n>0 && ch<m){
      for(int i=0;i<m;i++){
        if(b[k]==a[i].second){
          sum+=(min(n,a[i].first)*a[i].second);
          n=n-min(n,a[i].first);
          a[i].second=0;
          ++k;
          ++ch;
          break;
        }
      }
    }
    cout<<sum<<"\n";


    return 0;
}
