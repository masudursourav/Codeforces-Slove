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
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    int c=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        bool  ch=true;
        for(int k=i+1;k<n;k++){
          if(a[k][j]>a[i][j]){
            ch=false;
          }
        }
        for(int k=i-1;k>=0;k--){
          if(a[k][j]>a[i][j]){
            ch=false;
          }
        }
        if(ch){
          ++c;
          break;
        }
      }
    }
    cout<<c<<"\n";
    return 0;
}
