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
    ll a[6];
    for(int i=0;i<6;i++){
      cin>>a[i];
    }
    for(int i=0;i<6;i++){
      for(int j=i+1;j<6;j++){
        for(int k=j+1;k<6;k++){
          ll sum=a[i]+a[j]+a[k];
          ll fsum=0;
          ll co=0;
          for(int l=0;l<6;l++){
            if(l!=i && l!=j && l!=k){
              fsum+=a[l];
              ++co;
              if(sum==fsum && co==3){
                cout<<"YES"<<"\n";
                return 0;
              }
            }
          }
        }
      }
    }
    cout<<"NO"<<"\n";
    return 0;
}
