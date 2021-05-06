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
    ll r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1;i<10;i++){
      for(int j=1;j<10;j++){
        for(int k=1;k<10;k++){
          for(int l=1;l<10;l++){
            if(r1==(i+j) && r2==(k+l) && c1==(i+k) && c2==(j+l) && d1==(i+l) && d2==(j+k)
            && i!=j && k!=l && i!=l && j!=k && i!=k && j!=l){
              cout<<i<<" "<<j<<"\n"<<k<<" "<<l<<"\n";
              return 0;
            }
          }
        }
      }
    }
    cout<<"-1"<<"\n";

    return 0;
}
