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
    ll k='f'*'a'*'c'*'e';
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    ll ans=0;
    for(int i=0;i<n-1;i++){
      for(int j=0;j<m-1;j++){
        if(a[i][j]*a[i][j+1]*a[i+1][j+1]*a[i+1][j]==k){
          ++ans;
        }
      }
    }
    cout<<ans<<"\n";
    return 0;
}
