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
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll mx=0,c=0;
    ll k=a[0]*2;
    for(int i=1;i<n;i++){
      if(k>=a[i]){
        ++c;
        if(c>mx){
          mx=c;
        }
      }
      else{
        c=0;
      }
      k=a[i]*2;
    }
   cout<<mx+1<<"\n";
    return 0;
}
