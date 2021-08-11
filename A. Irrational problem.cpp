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
        ll p1,p2,p3,p4,a,b;
        cin>>p1>>p2>>p3>>p4>>a>>b;
        ll ans=0;
        for(int i=a;i<=b;i++){
          ll x=((((i%p1)%p2)%p3)%p4);
          if(x==i){
            ++ans;
          }
        }
        cout<<ans<<"\n";

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
