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
        ll n;
        cin>>n;
        ll a[n],b[n];
         for(int i=0;i<n;i++){
           cin>>a[i]>>b[i];
         }
         int c=0;
         for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            if(a[i]==b[j] && i!=j){
              ++c;
              break;
            }
          }
         }
         cout<<n-c<<"\n";
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
