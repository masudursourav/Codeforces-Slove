//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n;cin>>n;
        ll a[n];
        ll mn=1;
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        for(int i=0;i<n;i++){
          ll c=1;
          for(int j=i;j>=1;j--){
            if(a[j]>=a[j-1]){
              ++c;
            }
            else{
              break;
            }
          }
          for(int l=i;l<n-1;l++){
            if(a[l]>=a[l+1]){
              ++c;
            }
            else{
              break;
            }
          }
          if(c>mn){
           mn=c;
          }
        }
        cout<<mn<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
