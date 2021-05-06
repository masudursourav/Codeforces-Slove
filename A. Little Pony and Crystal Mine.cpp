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
    ll m=n/2;
    ll a[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        ll d=(abs(i-m)+abs(j-m));
        if(d<=m){
          a[i][j]=1;
        }
        else{
          a[i][j]=0;
        }
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(a[i][j]){
          cout<<"D";
        }
        else{
          cout<<"*";
        }
      }
      cout<<"\n";
    }

    return 0;
}
