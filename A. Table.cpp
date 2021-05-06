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
    char a;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a;
        if(a=='1'){
          if(i==0 || j==0 || i==n-1 || j==m-1){
            cout<<2<<"\n";
            return 0;
          }
        }
      }
    }
    cout<<4<<"\n";

    return 0;
}
