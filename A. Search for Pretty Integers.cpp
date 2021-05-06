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
    ll a[n],b[m];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<m;i++){
      cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(a[i]==b[j]){
          cout<<b[j]<<"\n";
          return 0;
        }
      }
    }
    cout<<min(((b[0]*10)+a[0]),((a[0]*10)+b[0]))<<"\n";

    return 0;
}
