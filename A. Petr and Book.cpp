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
        ll a[7];
        for(int i=0;i<7;i++) cin>>a[i];
        while(1){
          for(int i=0;i<7;i++){
            n-=a[i];
            if(n<=0){
              cout<<i+1<<"\n";
              return;
            }
          }
        }

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
